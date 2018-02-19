/* Header file automatically generated from windows.media.import.idl */
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
#ifndef __windows2Emedia2Eimport_h__
#define __windows2Emedia2Eimport_h__
#ifndef __windows2Emedia2Eimport_p_h__
#define __windows2Emedia2Eimport_p_h__


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
#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportDeleteImportedItemsFromSourceResult;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportFindItemsResult;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult ABI::Windows::Media::Import::IPhotoImportFindItemsResult

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportFindItemsResult2;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 ABI::Windows::Media::Import::IPhotoImportFindItemsResult2

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportImportItemsResult;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult ABI::Windows::Media::Import::IPhotoImportImportItemsResult

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportItem;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem ABI::Windows::Media::Import::IPhotoImportItem

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportItemImportedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs ABI::Windows::Media::Import::IPhotoImportItemImportedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportManagerStatics;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics ABI::Windows::Media::Import::IPhotoImportManagerStatics

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportOperation;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation ABI::Windows::Media::Import::IPhotoImportOperation

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportSelectionChangedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs ABI::Windows::Media::Import::IPhotoImportSelectionChangedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportSession;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession ABI::Windows::Media::Import::IPhotoImportSession

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportSession2;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 ABI::Windows::Media::Import::IPhotoImportSession2

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportSidecar;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar ABI::Windows::Media::Import::IPhotoImportSidecar

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportSource;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource ABI::Windows::Media::Import::IPhotoImportSource

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportSourceStatics;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics ABI::Windows::Media::Import::IPhotoImportSourceStatics

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportStorageMedium;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium ABI::Windows::Media::Import::IPhotoImportStorageMedium

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                interface IPhotoImportVideoSegment;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment ABI::Windows::Media::Import::IPhotoImportVideoSegment

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportItem;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_USE
#define DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d04d6068-b5a3-508e-bc6b-1dcdfcfb0d08"))
IIterator<ABI::Windows::Media::Import::PhotoImportItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportItem*, ABI::Windows::Media::Import::IPhotoImportItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Import.PhotoImportItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Import::PhotoImportItem*> __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_t;
#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportItem*>
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_USE
#define DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("82347483-3b75-5e95-bba4-abc0b8a320aa"))
IIterable<ABI::Windows::Media::Import::PhotoImportItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportItem*, ABI::Windows::Media::Import::IPhotoImportItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Import.PhotoImportItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Import::PhotoImportItem*> __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_t;
#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportItem*>
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportOperation;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_USE
#define DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7c9dde1a-a8a1-5957-8e0d-c401d19c9237"))
IIterator<ABI::Windows::Media::Import::PhotoImportOperation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportOperation*, ABI::Windows::Media::Import::IPhotoImportOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Import.PhotoImportOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Import::PhotoImportOperation*> __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_t;
#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportOperation*>
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_USE
#define DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("94f33a8f-115a-50cb-b59d-ab8483a84842"))
IIterable<ABI::Windows::Media::Import::PhotoImportOperation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportOperation*, ABI::Windows::Media::Import::IPhotoImportOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Import.PhotoImportOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Import::PhotoImportOperation*> __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_t;
#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportOperation*>
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportSidecar;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE
#define DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("aef5ebf0-1363-593a-86d5-f92bc230bfd6"))
IIterator<ABI::Windows::Media::Import::PhotoImportSidecar*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSidecar*, ABI::Windows::Media::Import::IPhotoImportSidecar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Import.PhotoImportSidecar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Import::PhotoImportSidecar*> __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_t;
#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportSidecar*>
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportSidecar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE
#define DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2b7f92ad-e596-5669-b622-fbfbc7040e89"))
IIterable<ABI::Windows::Media::Import::PhotoImportSidecar*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSidecar*, ABI::Windows::Media::Import::IPhotoImportSidecar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Import.PhotoImportSidecar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Import::PhotoImportSidecar*> __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_t;
#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportSidecar*>
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportSidecar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportSource;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#define DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7d70f831-6ee4-5130-a7b8-253a21154e82"))
IIterator<ABI::Windows::Media::Import::PhotoImportSource*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSource*, ABI::Windows::Media::Import::IPhotoImportSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Import.PhotoImportSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Import::PhotoImportSource*> __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_t;
#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportSource*>
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#define DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("40e01d62-b413-5b43-ab07-ab28b23fc886"))
IIterable<ABI::Windows::Media::Import::PhotoImportSource*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSource*, ABI::Windows::Media::Import::IPhotoImportSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Import.PhotoImportSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Import::PhotoImportSource*> __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_t;
#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportSource*>
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportStorageMedium;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE
#define DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("985cb948-9769-55dc-85d9-125a5d03d6bb"))
IIterator<ABI::Windows::Media::Import::PhotoImportStorageMedium*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportStorageMedium*, ABI::Windows::Media::Import::IPhotoImportStorageMedium*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Import.PhotoImportStorageMedium>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Import::PhotoImportStorageMedium*> __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t;
#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportStorageMedium*>
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportStorageMedium*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE
#define DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3233cbfe-f9ee-560f-bd0f-e36abe6cda7f"))
IIterable<ABI::Windows::Media::Import::PhotoImportStorageMedium*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportStorageMedium*, ABI::Windows::Media::Import::IPhotoImportStorageMedium*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Import.PhotoImportStorageMedium>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Import::PhotoImportStorageMedium*> __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t;
#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportStorageMedium*>
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportStorageMedium*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportVideoSegment;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE
#define DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c4c16a75-3310-5ab9-9307-78755ab1094d"))
IIterator<ABI::Windows::Media::Import::PhotoImportVideoSegment*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportVideoSegment*, ABI::Windows::Media::Import::IPhotoImportVideoSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Import.PhotoImportVideoSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Import::PhotoImportVideoSegment*> __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t;
#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportVideoSegment*>
//#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Import::IPhotoImportVideoSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE
#define DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("94dd3b44-da03-5d79-bbfb-1beaf2ede482"))
IIterable<ABI::Windows::Media::Import::PhotoImportVideoSegment*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportVideoSegment*, ABI::Windows::Media::Import::IPhotoImportVideoSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Import.PhotoImportVideoSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Import::PhotoImportVideoSegment*> __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t;
#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportVideoSegment*>
//#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Import::IPhotoImportVideoSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_USE
#define DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9a90a84e-924b-5879-88f7-bb2f7b131898"))
IVectorView<ABI::Windows::Media::Import::PhotoImportItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportItem*, ABI::Windows::Media::Import::IPhotoImportItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Import::PhotoImportItem*> __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_t;
#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportItem*>
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_USE
#define DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a5b07808-7d18-5300-9f01-1d85149546d2"))
IVectorView<ABI::Windows::Media::Import::PhotoImportOperation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportOperation*, ABI::Windows::Media::Import::IPhotoImportOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Import::PhotoImportOperation*> __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_t;
#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportOperation*>
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE
#define DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a6fa3abe-cdb9-5054-bf3d-525607f9c2d2"))
IVectorView<ABI::Windows::Media::Import::PhotoImportSidecar*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSidecar*, ABI::Windows::Media::Import::IPhotoImportSidecar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportSidecar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Import::PhotoImportSidecar*> __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_t;
#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSidecar*>
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSidecar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#define DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8b7e83fc-e035-59dc-8100-fcb935c2d7e4"))
IVectorView<ABI::Windows::Media::Import::PhotoImportSource*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSource*, ABI::Windows::Media::Import::IPhotoImportSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Import::PhotoImportSource*> __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t;
#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSource*>
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE
#define DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("35499439-e03e-5711-a955-f7c45928bc90"))
IVectorView<ABI::Windows::Media::Import::PhotoImportStorageMedium*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportStorageMedium*, ABI::Windows::Media::Import::IPhotoImportStorageMedium*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportStorageMedium>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Import::PhotoImportStorageMedium*> __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t;
#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportStorageMedium*>
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportStorageMedium*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE
#define DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("db5493cd-6915-5682-8dd5-1de144ec599d"))
IVectorView<ABI::Windows::Media::Import::PhotoImportVideoSegment*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportVideoSegment*, ABI::Windows::Media::Import::IPhotoImportVideoSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportVideoSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Import::PhotoImportVideoSegment*> __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t;
#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportVideoSegment*>
//#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportVideoSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportDeleteImportedItemsFromSourceResult;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ac6e425d-49e8-50d7-988c-cd5e42038577"))
IAsyncOperationProgressHandler<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*,double> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*, ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*>,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*,double> __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*,DOUBLE>
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e24e7c1-f356-59c1-b0e5-b2dfb225eb4e"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*,double> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*, ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*>,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*,double> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*,DOUBLE>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e2371a9-281a-5226-ae85-caa55c0d61de"))
IAsyncOperationWithProgress<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*,double> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*, ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*>,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult*,double> __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t;
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*,DOUBLE>
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult*,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportFindItemsResult;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("91190f62-7956-5e8f-83f1-84f9fe011b21"))
IAsyncOperationProgressHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,UINT32> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportFindItemsResult*, ABI::Windows::Media::Import::IPhotoImportFindItemsResult*>,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Media.Import.PhotoImportFindItemsResult, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,UINT32> __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,UINT32>
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd7a69d4-2456-5250-9653-31bd2d487104"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,UINT32> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportFindItemsResult*, ABI::Windows::Media::Import::IPhotoImportFindItemsResult*>,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Media.Import.PhotoImportFindItemsResult, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,UINT32> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,UINT32>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6e6f9b4e-c6e1-5364-a650-11c35211bead"))
IAsyncOperationWithProgress<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,UINT32> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportFindItemsResult*, ABI::Windows::Media::Import::IPhotoImportFindItemsResult*>,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Import.PhotoImportFindItemsResult, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,UINT32> __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t;
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,UINT32>
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportImportItemsResult;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                struct PhotoImportProgress;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("acd8a978-b2e1-55d0-bbf6-8dc5088d728a"))
IAsyncOperationProgressHandler<ABI::Windows::Media::Import::PhotoImportImportItemsResult*,struct ABI::Windows::Media::Import::PhotoImportProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportImportItemsResult*, ABI::Windows::Media::Import::IPhotoImportImportItemsResult*>,struct ABI::Windows::Media::Import::PhotoImportProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Media.Import.PhotoImportImportItemsResult, Windows.Media.Import.PhotoImportProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Media::Import::PhotoImportImportItemsResult*,struct ABI::Windows::Media::Import::PhotoImportProgress> __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Import::IPhotoImportImportItemsResult*,ABI::Windows::Media::Import::PhotoImportProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Import::IPhotoImportImportItemsResult*,ABI::Windows::Media::Import::PhotoImportProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0d141ec2-ee90-53a0-9318-10f0ab7f2d17"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::PhotoImportImportItemsResult*,struct ABI::Windows::Media::Import::PhotoImportProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportImportItemsResult*, ABI::Windows::Media::Import::IPhotoImportImportItemsResult*>,struct ABI::Windows::Media::Import::PhotoImportProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Media.Import.PhotoImportImportItemsResult, Windows.Media.Import.PhotoImportProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::PhotoImportImportItemsResult*,struct ABI::Windows::Media::Import::PhotoImportProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::IPhotoImportImportItemsResult*,ABI::Windows::Media::Import::PhotoImportProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Import::IPhotoImportImportItemsResult*,ABI::Windows::Media::Import::PhotoImportProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d874ec64-0951-5459-a0dd-0f8bf3917eb1"))
IAsyncOperationWithProgress<ABI::Windows::Media::Import::PhotoImportImportItemsResult*,struct ABI::Windows::Media::Import::PhotoImportProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportImportItemsResult*, ABI::Windows::Media::Import::IPhotoImportImportItemsResult*>,struct ABI::Windows::Media::Import::PhotoImportProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Import.PhotoImportImportItemsResult, Windows.Media.Import.PhotoImportProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Media::Import::PhotoImportImportItemsResult*,struct ABI::Windows::Media::Import::PhotoImportProgress> __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Import::IPhotoImportImportItemsResult*,ABI::Windows::Media::Import::PhotoImportProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Import::IPhotoImportImportItemsResult*,ABI::Windows::Media::Import::PhotoImportProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("72cde698-9247-5053-8cbd-d9076bfdfda5"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportSource>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSource*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSource*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3ef45f6e-39b9-5976-8643-6bafea4d1479"))
IAsyncOperation<__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Media.Import.PhotoImportSource>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource*> __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSource*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Import::IPhotoImportSource*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dc38b22a-872e-53f8-8e97-45ed85df0d23"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Import::PhotoImportSource*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSource*, ABI::Windows::Media::Import::IPhotoImportSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Import.PhotoImportSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Import::PhotoImportSource*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Import::IPhotoImportSource*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Import::IPhotoImportSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c8c5dc1e-eb47-50b8-b5d9-aafe1a82318a"))
IAsyncOperation<ABI::Windows::Media::Import::PhotoImportSource*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSource*, ABI::Windows::Media::Import::IPhotoImportSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Import.PhotoImportSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Import::PhotoImportSource*> __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_t;
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Import::IPhotoImportSource*>
//#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Import::IPhotoImportSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportItemImportedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a3cce94d-f26e-58d9-8138-599ad63c7069"))
ITypedEventHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,ABI::Windows::Media::Import::PhotoImportItemImportedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportFindItemsResult*, ABI::Windows::Media::Import::IPhotoImportFindItemsResult*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportItemImportedEventArgs*, ABI::Windows::Media::Import::IPhotoImportItemImportedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Import.PhotoImportFindItemsResult, Windows.Media.Import.PhotoImportItemImportedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,ABI::Windows::Media::Import::PhotoImportItemImportedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,ABI::Windows::Media::Import::IPhotoImportItemImportedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,ABI::Windows::Media::Import::IPhotoImportItemImportedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportSelectionChangedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e67279fe-692f-5602-820b-865098d9b43e"))
ITypedEventHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,ABI::Windows::Media::Import::PhotoImportSelectionChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportFindItemsResult*, ABI::Windows::Media::Import::IPhotoImportFindItemsResult*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Import::PhotoImportSelectionChangedEventArgs*, ABI::Windows::Media::Import::IPhotoImportSelectionChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Import.PhotoImportFindItemsResult, Windows.Media.Import.PhotoImportSelectionChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Import::PhotoImportFindItemsResult*,ABI::Windows::Media::Import::PhotoImportSelectionChangedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,ABI::Windows::Media::Import::IPhotoImportSelectionChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Import::IPhotoImportFindItemsResult*,ABI::Windows::Media::Import::IPhotoImportSelectionChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_USE */


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




#ifndef DEF___FIReference_1_boolean_USE
#define DEF___FIReference_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c00fd60-2950-5939-a21a-2d12c5a01b8a"))
IReference<bool> : IReference_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<bool> __FIReference_1_boolean_t;
#define __FIReference_1_boolean ABI::Windows::Foundation::__FIReference_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_boolean ABI::Windows::Foundation::IReference<boolean>
//#define __FIReference_1_boolean_t ABI::Windows::Foundation::IReference<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_boolean_USE */





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
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportAccessMode : int PhotoImportAccessMode;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportConnectionTransport : int PhotoImportConnectionTransport;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportContentType : int PhotoImportContentType;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportContentTypeFilter : int PhotoImportContentTypeFilter;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportImportMode : int PhotoImportImportMode;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportItemSelectionMode : int PhotoImportItemSelectionMode;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportPowerSource : int PhotoImportPowerSource;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportSourceType : int PhotoImportSourceType;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportStage : int PhotoImportStage;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportStorageMediumType : int PhotoImportStorageMediumType;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportSubfolderCreationMode : int PhotoImportSubfolderCreationMode;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef enum PhotoImportSubfolderDateFormat : int PhotoImportSubfolderDateFormat;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                
                typedef struct PhotoImportProgress PhotoImportProgress;
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

























namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                class PhotoImportSession;
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */














/*
 *
 * Struct Windows.Media.Import.PhotoImportAccessMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportAccessMode : int
                {
                    PhotoImportAccessMode_ReadWrite = 0,
                    PhotoImportAccessMode_ReadOnly = 1,
                    PhotoImportAccessMode_ReadAndDelete = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportConnectionTransport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportConnectionTransport : int
                {
                    PhotoImportConnectionTransport_Unknown = 0,
                    PhotoImportConnectionTransport_Usb = 1,
                    PhotoImportConnectionTransport_IP = 2,
                    PhotoImportConnectionTransport_Bluetooth = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportContentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportContentType : int
                {
                    PhotoImportContentType_Unknown = 0,
                    PhotoImportContentType_Image = 1,
                    PhotoImportContentType_Video = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportContentTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportContentTypeFilter : int
                {
                    PhotoImportContentTypeFilter_OnlyImages = 0,
                    PhotoImportContentTypeFilter_OnlyVideos = 1,
                    PhotoImportContentTypeFilter_ImagesAndVideos = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportImportMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportImportMode : int
                {
                    PhotoImportImportMode_ImportEverything = 0,
                    PhotoImportImportMode_IgnoreSidecars = 1,
                    PhotoImportImportMode_IgnoreSiblings = 2,
                    PhotoImportImportMode_IgnoreSidecarsAndSiblings = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportItemSelectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportItemSelectionMode : int
                {
                    PhotoImportItemSelectionMode_SelectAll = 0,
                    PhotoImportItemSelectionMode_SelectNone = 1,
                    PhotoImportItemSelectionMode_SelectNew = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportPowerSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportPowerSource : int
                {
                    PhotoImportPowerSource_Unknown = 0,
                    PhotoImportPowerSource_Battery = 1,
                    PhotoImportPowerSource_External = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportSourceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportSourceType : int
                {
                    PhotoImportSourceType_Generic = 0,
                    PhotoImportSourceType_Camera = 1,
                    PhotoImportSourceType_MediaPlayer = 2,
                    PhotoImportSourceType_Phone = 3,
                    PhotoImportSourceType_Video = 4,
                    PhotoImportSourceType_PersonalInfoManager = 5,
                    PhotoImportSourceType_AudioRecorder = 6,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportStage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportStage : int
                {
                    PhotoImportStage_NotStarted = 0,
                    PhotoImportStage_FindingItems = 1,
                    PhotoImportStage_ImportingItems = 2,
                    PhotoImportStage_DeletingImportedItemsFromSource = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportStorageMediumType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportStorageMediumType : int
                {
                    PhotoImportStorageMediumType_Undefined = 0,
                    PhotoImportStorageMediumType_Fixed = 1,
                    PhotoImportStorageMediumType_Removable = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportSubfolderCreationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportSubfolderCreationMode : int
                {
                    PhotoImportSubfolderCreationMode_DoNotCreateSubfolders = 0,
                    PhotoImportSubfolderCreationMode_CreateSubfoldersFromFileDate = 1,
                    PhotoImportSubfolderCreationMode_CreateSubfoldersFromExifDate = 2,
                    PhotoImportSubfolderCreationMode_KeepOriginalFolderStructure = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportSubfolderDateFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [v1_enum, contract] */
                enum PhotoImportSubfolderDateFormat : int
                {
                    PhotoImportSubfolderDateFormat_Year = 0,
                    PhotoImportSubfolderDateFormat_YearMonth = 1,
                    PhotoImportSubfolderDateFormat_YearMonthDay = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Import.PhotoImportProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [contract] */
                struct PhotoImportProgress
                {
                    UINT32 ItemsImported;
                    UINT32 TotalItemsToImport;
                    UINT64 BytesImported;
                    UINT64 TotalBytesToImport;
                    DOUBLE ImportProgress;
                };
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult[] = L"Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("F4E112F8-843D-428A-A1A6-81510292B0AE"), exclusiveto, contract] */
                MIDL_INTERFACE("F4E112F8-843D-428A-A1A6-81510292B0AE")
                IPhotoImportDeleteImportedItemsFromSourceResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSession * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasSucceeded(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeletedItems(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SidecarsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SidecarsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SiblingsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SiblingsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportDeleteImportedItemsFromSourceResult=_uuidof(IPhotoImportDeleteImportedItemsFromSourceResult);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportFindItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportFindItemsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportFindItemsResult[] = L"Windows.Media.Import.IPhotoImportFindItemsResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("3915E647-6C78-492B-844E-8FE5E8F6BFB9"), exclusiveto, contract] */
                MIDL_INTERFACE("3915E647-6C78-492B-844E-8FE5E8F6BFB9")
                IPhotoImportFindItemsResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSession * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasSucceeded(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FoundItems(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SidecarsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SidecarsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SiblingsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SiblingsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SelectAll(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SelectNone(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SelectNewAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetImportMode(
                        /* [in] */ABI::Windows::Media::Import::PhotoImportImportMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImportMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportImportMode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedPhotosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedPhotosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedVideosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedVideosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedSidecarsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedSidecarsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedSiblingsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedSiblingsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedTotalCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedTotalSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SelectionChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SelectionChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ImportItemsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ItemImported(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ItemImported(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportFindItemsResult=_uuidof(IPhotoImportFindItemsResult);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportFindItemsResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportFindItemsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportFindItemsResult2[] = L"Windows.Media.Import.IPhotoImportFindItemsResult2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("FBDD6A3B-ECF9-406A-815E-5015625B0A88"), exclusiveto, contract] */
                MIDL_INTERFACE("FBDD6A3B-ECF9-406A-815E-5015625B0A88")
                IPhotoImportFindItemsResult2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AddItemsInDateRangeToSelection(
                        /* [in] */ABI::Windows::Foundation::DateTime rangeStart,
                        /* [in] */ABI::Windows::Foundation::TimeSpan rangeLength
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportFindItemsResult2=_uuidof(IPhotoImportFindItemsResult2);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportImportItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportImportItemsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportImportItemsResult[] = L"Windows.Media.Import.IPhotoImportImportItemsResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("E4D4F478-D419-4443-A84E-F06A850C0B00"), exclusiveto, contract] */
                MIDL_INTERFACE("E4D4F478-D419-4443-A84E-F06A850C0B00")
                IPhotoImportImportItemsResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSession * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasSucceeded(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImportedItems(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideosCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideosSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SidecarsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SidecarsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SiblingsCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SiblingsSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteImportedItemsFromSourceAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportImportItemsResult=_uuidof(IPhotoImportImportItemsResult);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportItem[] = L"Windows.Media.Import.IPhotoImportItem";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("A9D07E76-9BFC-43B8-B356-633B6A988C9E"), exclusiveto, contract] */
                MIDL_INTERFACE("A9D07E76-9BFC-43B8-B356-633B6A988C9E")
                IPhotoImportItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemKey(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentType(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportContentType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Date(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sibling(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSidecar * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sidecars(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoSegments(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelected(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsSelected(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnail(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImportedFileNames(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeletedFileNames(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportItem=_uuidof(IPhotoImportItem);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportItemImportedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportItemImportedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportItemImportedEventArgs[] = L"Windows.Media.Import.IPhotoImportItemImportedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("42CB2FDD-7D68-47B5-BC7C-CEB73E0C77DC"), exclusiveto, contract] */
                MIDL_INTERFACE("42CB2FDD-7D68-47B5-BC7C-CEB73E0C77DC")
                IPhotoImportItemImportedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImportedItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportItem * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportItemImportedEventArgs=_uuidof(IPhotoImportItemImportedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportManagerStatics[] = L"Windows.Media.Import.IPhotoImportManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("2771903D-A046-4F06-9B9C-BFD662E83287"), exclusiveto, contract] */
                MIDL_INTERFACE("2771903D-A046-4F06-9B9C-BFD662E83287")
                IPhotoImportManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsSupportedAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindAllSourcesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPendingOperations(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportManagerStatics=_uuidof(IPhotoImportManagerStatics);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportOperation[] = L"Windows.Media.Import.IPhotoImportOperation";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("D9F797E4-A09A-4EE4-A4B1-20940277A5BE"), exclusiveto, contract] */
                MIDL_INTERFACE("D9F797E4-A09A-4EE4-A4B1-20940277A5BE")
                IPhotoImportOperation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Stage(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportStage * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSession * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContinueFindingItemsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContinueImportingItemsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContinueDeletingImportedItemsFromSourceAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportOperation=_uuidof(IPhotoImportOperation);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSelectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSelectionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSelectionChangedEventArgs[] = L"Windows.Media.Import.IPhotoImportSelectionChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("10461782-FA9D-4C30-8BC9-4D64911572D5"), exclusiveto, contract] */
                MIDL_INTERFACE("10461782-FA9D-4C30-8BC9-4D64911572D5")
                IPhotoImportSelectionChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelectionEmpty(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportSelectionChangedEventArgs=_uuidof(IPhotoImportSelectionChangedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSession[] = L"Windows.Media.Import.IPhotoImportSession";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("AA63916E-ECDB-4EFE-94C6-5F5CAFE34CFB"), exclusiveto, contract] */
                MIDL_INTERFACE("AA63916E-ECDB-4EFE-94C6-5F5CAFE34CFB")
                IPhotoImportSession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSource * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DestinationFolder(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DestinationFolder(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppendSessionDateToDestinationFolder(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppendSessionDateToDestinationFolder(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SubfolderCreationMode(
                        /* [in] */ABI::Windows::Media::Import::PhotoImportSubfolderCreationMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubfolderCreationMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportSubfolderCreationMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DestinationFileNamePrefix(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DestinationFileNamePrefix(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindItemsAsync(
                        /* [in] */ABI::Windows::Media::Import::PhotoImportContentTypeFilter contentTypeFilter,
                        /* [in] */ABI::Windows::Media::Import::PhotoImportItemSelectionMode itemSelectionMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportSession=_uuidof(IPhotoImportSession);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSession2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSession2[] = L"Windows.Media.Import.IPhotoImportSession2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("2A526710-3EC6-469D-A375-2B9F4785391E"), exclusiveto, contract] */
                MIDL_INTERFACE("2A526710-3EC6-469D-A375-2B9F4785391E")
                IPhotoImportSession2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SubfolderDateFormat(
                        /* [in] */ABI::Windows::Media::Import::PhotoImportSubfolderDateFormat value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubfolderDateFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportSubfolderDateFormat * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RememberDeselectedItems(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RememberDeselectedItems(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportSession2=_uuidof(IPhotoImportSession2);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSidecar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSidecar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSidecar[] = L"Windows.Media.Import.IPhotoImportSidecar";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("46D7D757-F802-44C7-9C98-7A71F4BC1486"), exclusiveto, contract] */
                MIDL_INTERFACE("46D7D757-F802-44C7-9C98-7A71F4BC1486")
                IPhotoImportSidecar : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Date(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportSidecar=_uuidof(IPhotoImportSidecar);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSource[] = L"Windows.Media.Import.IPhotoImportSource";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("1F8EA35E-145B-4CD6-87F1-54965A982FEF"), exclusiveto, contract] */
                MIDL_INTERFACE("1F8EA35E-145B-4CD6-87F1-54965A982FEF")
                IPhotoImportSource : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Manufacturer(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Model(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SerialNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionProtocol(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionTransport(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportConnectionTransport * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportSourceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowerSource(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportPowerSource * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BatteryLevelPercent(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DateTime(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StorageMedia(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLocked(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMassStorage(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnail(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateImportSession(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSession * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportSource=_uuidof(IPhotoImportSource);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSourceStatics[] = L"Windows.Media.Import.IPhotoImportSourceStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("0528E586-32D8-467C-8CEE-23A1B2F43E85"), exclusiveto, contract] */
                MIDL_INTERFACE("0528E586-32D8-467C-8CEE-23A1B2F43E85")
                IPhotoImportSourceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING sourceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromFolderAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * sourceRootFolder,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportSourceStatics=_uuidof(IPhotoImportSourceStatics);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportStorageMedium
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportStorageMedium
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportStorageMedium[] = L"Windows.Media.Import.IPhotoImportStorageMedium";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("F2B9B093-FC85-487F-87C2-58D675D05B07"), exclusiveto, contract] */
                MIDL_INTERFACE("F2B9B093-FC85-487F-87C2-58D675D05B07")
                IPhotoImportStorageMedium : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SerialNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StorageMediumType(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportStorageMediumType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedAccessMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Import::PhotoImportAccessMode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapacityInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AvailableSpaceInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Refresh(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportStorageMedium=_uuidof(IPhotoImportStorageMedium);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportVideoSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportVideoSegment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportVideoSegment[] = L"Windows.Media.Import.IPhotoImportVideoSegment";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Import {
                /* [object, uuid("623C0289-321A-41D8-9166-8C62A333276C"), exclusiveto, contract] */
                MIDL_INTERFACE("623C0289-321A-41D8-9166-8C62A333276C")
                IPhotoImportVideoSegment : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Date(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sibling(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Import::IPhotoImportSidecar * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sidecars(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoImportVideoSegment=_uuidof(IPhotoImportVideoSegment);
                
            } /* Windows */
        } /* Media */
    } /* Import */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportDeleteImportedItemsFromSourceResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportDeleteImportedItemsFromSourceResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportDeleteImportedItemsFromSourceResult[] = L"Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportFindItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportFindItemsResult ** Default Interface **
 *    Windows.Media.Import.IPhotoImportFindItemsResult2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportFindItemsResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportFindItemsResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportFindItemsResult[] = L"Windows.Media.Import.PhotoImportFindItemsResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportImportItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportImportItemsResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportImportItemsResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportImportItemsResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportImportItemsResult[] = L"Windows.Media.Import.PhotoImportImportItemsResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportItem_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportItem[] = L"Windows.Media.Import.PhotoImportItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportItemImportedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportItemImportedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportItemImportedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportItemImportedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportItemImportedEventArgs[] = L"Windows.Media.Import.PhotoImportItemImportedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Import.IPhotoImportManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportManager[] = L"Windows.Media.Import.PhotoImportManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportOperation_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportOperation[] = L"Windows.Media.Import.PhotoImportOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSelectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSelectionChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSelectionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSelectionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSelectionChangedEventArgs[] = L"Windows.Media.Import.PhotoImportSelectionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Import.IPhotoImportSession2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSession_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSession[] = L"Windows.Media.Import.PhotoImportSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSidecar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSidecar ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSidecar_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSidecar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSidecar[] = L"Windows.Media.Import.PhotoImportSidecar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Import.IPhotoImportSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSource[] = L"Windows.Media.Import.PhotoImportSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportStorageMedium
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportStorageMedium ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportStorageMedium_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportStorageMedium_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportStorageMedium[] = L"Windows.Media.Import.PhotoImportStorageMedium";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportVideoSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportVideoSegment ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportVideoSegment_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportVideoSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportVideoSegment[] = L"Windows.Media.Import.PhotoImportVideoSegment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment;

#endif // ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem;

typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItemVtbl;

interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem;

typedef  struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItemVtbl;

interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation;

typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl;

interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation;

typedef  struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl;

interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar;

typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl;

interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar;

typedef  struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl;

interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource;

typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;

interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource;

typedef  struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;

interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;

typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl;

interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;

typedef  struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl;

interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;

typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl;

interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;

typedef  struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl;

interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem;

typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItemVtbl;

interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation;

typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl;

interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar;

typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl;

interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;

typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;

interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;

typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl;

interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;

typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl;

interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


struct __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__

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


#if !defined(____FIReference_1_boolean_INTERFACE_DEFINED__)
#define ____FIReference_1_boolean_INTERFACE_DEFINED__

typedef interface __FIReference_1_boolean __FIReference_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_boolean;

typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, /* [retval][out] */ __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;

interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_boolean_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_boolean_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode;


typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat;


typedef struct __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress;






































/*
 *
 * Struct Windows.Media.Import.PhotoImportAccessMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode
{
    PhotoImportAccessMode_ReadWrite = 0,
    PhotoImportAccessMode_ReadOnly = 1,
    PhotoImportAccessMode_ReadAndDelete = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportConnectionTransport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport
{
    PhotoImportConnectionTransport_Unknown = 0,
    PhotoImportConnectionTransport_Usb = 1,
    PhotoImportConnectionTransport_IP = 2,
    PhotoImportConnectionTransport_Bluetooth = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportContentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType
{
    PhotoImportContentType_Unknown = 0,
    PhotoImportContentType_Image = 1,
    PhotoImportContentType_Video = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportContentTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter
{
    PhotoImportContentTypeFilter_OnlyImages = 0,
    PhotoImportContentTypeFilter_OnlyVideos = 1,
    PhotoImportContentTypeFilter_ImagesAndVideos = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportImportMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode
{
    PhotoImportImportMode_ImportEverything = 0,
    PhotoImportImportMode_IgnoreSidecars = 1,
    PhotoImportImportMode_IgnoreSiblings = 2,
    PhotoImportImportMode_IgnoreSidecarsAndSiblings = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportItemSelectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode
{
    PhotoImportItemSelectionMode_SelectAll = 0,
    PhotoImportItemSelectionMode_SelectNone = 1,
    PhotoImportItemSelectionMode_SelectNew = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportPowerSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource
{
    PhotoImportPowerSource_Unknown = 0,
    PhotoImportPowerSource_Battery = 1,
    PhotoImportPowerSource_External = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportSourceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType
{
    PhotoImportSourceType_Generic = 0,
    PhotoImportSourceType_Camera = 1,
    PhotoImportSourceType_MediaPlayer = 2,
    PhotoImportSourceType_Phone = 3,
    PhotoImportSourceType_Video = 4,
    PhotoImportSourceType_PersonalInfoManager = 5,
    PhotoImportSourceType_AudioRecorder = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportStage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage
{
    PhotoImportStage_NotStarted = 0,
    PhotoImportStage_FindingItems = 1,
    PhotoImportStage_ImportingItems = 2,
    PhotoImportStage_DeletingImportedItemsFromSource = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportStorageMediumType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType
{
    PhotoImportStorageMediumType_Undefined = 0,
    PhotoImportStorageMediumType_Fixed = 1,
    PhotoImportStorageMediumType_Removable = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportSubfolderCreationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode
{
    PhotoImportSubfolderCreationMode_DoNotCreateSubfolders = 0,
    PhotoImportSubfolderCreationMode_CreateSubfoldersFromFileDate = 1,
    PhotoImportSubfolderCreationMode_CreateSubfoldersFromExifDate = 2,
    PhotoImportSubfolderCreationMode_KeepOriginalFolderStructure = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Import.PhotoImportSubfolderDateFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat
{
    PhotoImportSubfolderDateFormat_Year = 0,
    PhotoImportSubfolderDateFormat_YearMonth = 1,
    PhotoImportSubfolderDateFormat_YearMonthDay = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Import.PhotoImportProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress
{
    UINT32 ItemsImported;
    UINT32 TotalItemsToImport;
    UINT64 BytesImported;
    UINT64 TotalBytesToImport;
    DOUBLE ImportProgress;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult[] = L"Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult";
/* [object, uuid("F4E112F8-843D-428A-A1A6-81510292B0AE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasSucceeded )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeletedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResultVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_HasSucceeded(This,value) \
    ( (This)->lpVtbl->get_HasSucceeded(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_DeletedItems(This,value) \
    ( (This)->lpVtbl->get_DeletedItems(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_PhotosCount(This,value) \
    ( (This)->lpVtbl->get_PhotosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_PhotosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PhotosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_VideosCount(This,value) \
    ( (This)->lpVtbl->get_VideosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_VideosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_VideosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_SidecarsCount(This,value) \
    ( (This)->lpVtbl->get_SidecarsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_SidecarsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SidecarsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_SiblingsCount(This,value) \
    ( (This)->lpVtbl->get_SiblingsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_SiblingsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SiblingsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_TotalCount(This,value) \
    ( (This)->lpVtbl->get_TotalCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_get_TotalSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_TotalSizeInBytes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportFindItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportFindItemsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportFindItemsResult[] = L"Windows.Media.Import.IPhotoImportFindItemsResult";
/* [object, uuid("3915E647-6C78-492B-844E-8FE5E8F6BFB9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasSucceeded )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FoundItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SelectAll )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNone )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNewAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *SetImportMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [in] */__x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImportMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedPhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedPhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedVideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedVideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedSidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedSidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedSiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedSiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedTotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedTotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SelectionChanged )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SelectionChanged )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ImportItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ItemImported )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ItemImported )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResultVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_HasSucceeded(This,value) \
    ( (This)->lpVtbl->get_HasSucceeded(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_FoundItems(This,value) \
    ( (This)->lpVtbl->get_FoundItems(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_PhotosCount(This,value) \
    ( (This)->lpVtbl->get_PhotosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_PhotosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PhotosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_VideosCount(This,value) \
    ( (This)->lpVtbl->get_VideosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_VideosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_VideosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SidecarsCount(This,value) \
    ( (This)->lpVtbl->get_SidecarsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SidecarsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SidecarsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SiblingsCount(This,value) \
    ( (This)->lpVtbl->get_SiblingsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SiblingsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SiblingsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_TotalCount(This,value) \
    ( (This)->lpVtbl->get_TotalCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_TotalSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_TotalSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_SelectAll(This) \
    ( (This)->lpVtbl->SelectAll(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_SelectNone(This) \
    ( (This)->lpVtbl->SelectNone(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_SelectNewAsync(This,action) \
    ( (This)->lpVtbl->SelectNewAsync(This,action) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_SetImportMode(This,value) \
    ( (This)->lpVtbl->SetImportMode(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_ImportMode(This,value) \
    ( (This)->lpVtbl->get_ImportMode(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedPhotosCount(This,value) \
    ( (This)->lpVtbl->get_SelectedPhotosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedPhotosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SelectedPhotosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedVideosCount(This,value) \
    ( (This)->lpVtbl->get_SelectedVideosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedVideosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SelectedVideosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedSidecarsCount(This,value) \
    ( (This)->lpVtbl->get_SelectedSidecarsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedSidecarsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SelectedSidecarsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedSiblingsCount(This,value) \
    ( (This)->lpVtbl->get_SelectedSiblingsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedSiblingsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SelectedSiblingsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedTotalCount(This,value) \
    ( (This)->lpVtbl->get_SelectedTotalCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_get_SelectedTotalSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SelectedTotalSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_add_SelectionChanged(This,value,token) \
    ( (This)->lpVtbl->add_SelectionChanged(This,value,token) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_remove_SelectionChanged(This,token) \
    ( (This)->lpVtbl->remove_SelectionChanged(This,token) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_ImportItemsAsync(This,operation) \
    ( (This)->lpVtbl->ImportItemsAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_add_ItemImported(This,value,token) \
    ( (This)->lpVtbl->add_ItemImported(This,value,token) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_remove_ItemImported(This,token) \
    ( (This)->lpVtbl->remove_ItemImported(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportFindItemsResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportFindItemsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportFindItemsResult2[] = L"Windows.Media.Import.IPhotoImportFindItemsResult2";
/* [object, uuid("FBDD6A3B-ECF9-406A-815E-5015625B0A88"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddItemsInDateRangeToSelection )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime rangeStart,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan rangeLength
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2Vtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_AddItemsInDateRangeToSelection(This,rangeStart,rangeLength) \
    ( (This)->lpVtbl->AddItemsInDateRangeToSelection(This,rangeStart,rangeLength) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportImportItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportImportItemsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportImportItemsResult[] = L"Windows.Media.Import.IPhotoImportImportItemsResult";
/* [object, uuid("E4D4F478-D419-4443-A84E-F06A850C0B00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasSucceeded )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImportedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteImportedItemsFromSourceAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResultVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_HasSucceeded(This,value) \
    ( (This)->lpVtbl->get_HasSucceeded(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_ImportedItems(This,value) \
    ( (This)->lpVtbl->get_ImportedItems(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_PhotosCount(This,value) \
    ( (This)->lpVtbl->get_PhotosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_PhotosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PhotosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_VideosCount(This,value) \
    ( (This)->lpVtbl->get_VideosCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_VideosSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_VideosSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_SidecarsCount(This,value) \
    ( (This)->lpVtbl->get_SidecarsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_SidecarsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SidecarsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_SiblingsCount(This,value) \
    ( (This)->lpVtbl->get_SiblingsCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_SiblingsSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SiblingsSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_TotalCount(This,value) \
    ( (This)->lpVtbl->get_TotalCount(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_get_TotalSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_TotalSizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_DeleteImportedItemsFromSourceAsync(This,result) \
    ( (This)->lpVtbl->DeleteImportedItemsFromSourceAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportItem[] = L"Windows.Media.Import.IPhotoImportItem";
/* [object, uuid("A9D07E76-9BFC-43B8-B356-633B6A988C9E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemKey )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sibling )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sidecars )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoSegments )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsSelected )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImportedFileNames )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeletedFileNames )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_ItemKey(This,value) \
    ( (This)->lpVtbl->get_ItemKey(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_ContentType(This,value) \
    ( (This)->lpVtbl->get_ContentType(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_SizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_Date(This,value) \
    ( (This)->lpVtbl->get_Date(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_Sibling(This,value) \
    ( (This)->lpVtbl->get_Sibling(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_Sidecars(This,value) \
    ( (This)->lpVtbl->get_Sidecars(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_VideoSegments(This,value) \
    ( (This)->lpVtbl->get_VideoSegments(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_IsSelected(This,value) \
    ( (This)->lpVtbl->get_IsSelected(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_put_IsSelected(This,value) \
    ( (This)->lpVtbl->put_IsSelected(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_Thumbnail(This,value) \
    ( (This)->lpVtbl->get_Thumbnail(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_ImportedFileNames(This,value) \
    ( (This)->lpVtbl->get_ImportedFileNames(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_get_DeletedFileNames(This,value) \
    ( (This)->lpVtbl->get_DeletedFileNames(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportItemImportedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportItemImportedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportItemImportedEventArgs[] = L"Windows.Media.Import.IPhotoImportItemImportedEventArgs";
/* [object, uuid("42CB2FDD-7D68-47B5-BC7C-CEB73E0C77DC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImportedItem )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_get_ImportedItem(This,value) \
    ( (This)->lpVtbl->get_ImportedItem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportManagerStatics[] = L"Windows.Media.Import.IPhotoImportManagerStatics";
/* [object, uuid("2771903D-A046-4F06-9B9C-BFD662E83287"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupportedAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllSourcesAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPendingOperations )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_IsSupportedAsync(This,operation) \
    ( (This)->lpVtbl->IsSupportedAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_FindAllSourcesAsync(This,operation) \
    ( (This)->lpVtbl->FindAllSourcesAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_GetPendingOperations(This,result) \
    ( (This)->lpVtbl->GetPendingOperations(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportOperation[] = L"Windows.Media.Import.IPhotoImportOperation";
/* [object, uuid("D9F797E4-A09A-4EE4-A4B1-20940277A5BE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Stage )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContinueFindingItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContinueImportingItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContinueDeletingImportedItemsFromSourceAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperationVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_get_Stage(This,value) \
    ( (This)->lpVtbl->get_Stage(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_get_ContinueFindingItemsAsync(This,operation) \
    ( (This)->lpVtbl->get_ContinueFindingItemsAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_get_ContinueImportingItemsAsync(This,operation) \
    ( (This)->lpVtbl->get_ContinueImportingItemsAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_get_ContinueDeletingImportedItemsFromSourceAsync(This,operation) \
    ( (This)->lpVtbl->get_ContinueDeletingImportedItemsFromSourceAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSelectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSelectionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSelectionChangedEventArgs[] = L"Windows.Media.Import.IPhotoImportSelectionChangedEventArgs";
/* [object, uuid("10461782-FA9D-4C30-8BC9-4D64911572D5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelectionEmpty )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_get_IsSelectionEmpty(This,value) \
    ( (This)->lpVtbl->get_IsSelectionEmpty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSession[] = L"Windows.Media.Import.IPhotoImportSession";
/* [object, uuid("AA63916E-ECDB-4EFE-94C6-5F5CAFE34CFB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppendSessionDateToDestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppendSessionDateToDestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SubfolderCreationMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [in] */__x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubfolderCreationMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DestinationFileNamePrefix )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DestinationFileNamePrefix )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
        /* [in] */__x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter contentTypeFilter,
        /* [in] */__x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode itemSelectionMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSessionVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_get_SessionId(This,value) \
    ( (This)->lpVtbl->get_SessionId(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_put_DestinationFolder(This,value) \
    ( (This)->lpVtbl->put_DestinationFolder(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_get_DestinationFolder(This,value) \
    ( (This)->lpVtbl->get_DestinationFolder(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_put_AppendSessionDateToDestinationFolder(This,value) \
    ( (This)->lpVtbl->put_AppendSessionDateToDestinationFolder(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_get_AppendSessionDateToDestinationFolder(This,value) \
    ( (This)->lpVtbl->get_AppendSessionDateToDestinationFolder(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_put_SubfolderCreationMode(This,value) \
    ( (This)->lpVtbl->put_SubfolderCreationMode(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_get_SubfolderCreationMode(This,value) \
    ( (This)->lpVtbl->get_SubfolderCreationMode(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_put_DestinationFileNamePrefix(This,value) \
    ( (This)->lpVtbl->put_DestinationFileNamePrefix(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_get_DestinationFileNamePrefix(This,value) \
    ( (This)->lpVtbl->get_DestinationFileNamePrefix(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_FindItemsAsync(This,contentTypeFilter,itemSelectionMode,operation) \
    ( (This)->lpVtbl->FindItemsAsync(This,contentTypeFilter,itemSelectionMode,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSession2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSession2[] = L"Windows.Media.Import.IPhotoImportSession2";
/* [object, uuid("2A526710-3EC6-469D-A375-2B9F4785391E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SubfolderDateFormat )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubfolderDateFormat )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RememberDeselectedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RememberDeselectedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2Vtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_put_SubfolderDateFormat(This,value) \
    ( (This)->lpVtbl->put_SubfolderDateFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_get_SubfolderDateFormat(This,value) \
    ( (This)->lpVtbl->get_SubfolderDateFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_put_RememberDeselectedItems(This,value) \
    ( (This)->lpVtbl->put_RememberDeselectedItems(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_get_RememberDeselectedItems(This,value) \
    ( (This)->lpVtbl->get_RememberDeselectedItems(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSidecar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSidecar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSidecar[] = L"Windows.Media.Import.IPhotoImportSidecar";
/* [object, uuid("46D7D757-F802-44C7-9C98-7A71F4BC1486"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecarVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecarVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_get_SizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_get_Date(This,value) \
    ( (This)->lpVtbl->get_Date(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSource[] = L"Windows.Media.Import.IPhotoImportSource";
/* [object, uuid("1F8EA35E-145B-4CD6-87F1-54965A982FEF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Model )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionProtocol )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionTransport )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerSource )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BatteryLevelPercent )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DateTime )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StorageMedia )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLocked )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMassStorage )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateImportSession )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_Manufacturer(This,value) \
    ( (This)->lpVtbl->get_Manufacturer(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_Model(This,value) \
    ( (This)->lpVtbl->get_Model(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_SerialNumber(This,value) \
    ( (This)->lpVtbl->get_SerialNumber(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_ConnectionProtocol(This,value) \
    ( (This)->lpVtbl->get_ConnectionProtocol(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_ConnectionTransport(This,value) \
    ( (This)->lpVtbl->get_ConnectionTransport(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_PowerSource(This,value) \
    ( (This)->lpVtbl->get_PowerSource(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_BatteryLevelPercent(This,value) \
    ( (This)->lpVtbl->get_BatteryLevelPercent(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_DateTime(This,value) \
    ( (This)->lpVtbl->get_DateTime(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_StorageMedia(This,value) \
    ( (This)->lpVtbl->get_StorageMedia(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_IsLocked(This,value) \
    ( (This)->lpVtbl->get_IsLocked(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_IsMassStorage(This,value) \
    ( (This)->lpVtbl->get_IsMassStorage(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_get_Thumbnail(This,value) \
    ( (This)->lpVtbl->get_Thumbnail(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_CreateImportSession(This,result) \
    ( (This)->lpVtbl->CreateImportSession(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSourceStatics[] = L"Windows.Media.Import.IPhotoImportSourceStatics";
/* [object, uuid("0528E586-32D8-467C-8CEE-23A1B2F43E85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
        /* [in] */__RPC__in HSTRING sourceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromFolderAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * sourceRootFolder,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FromIdAsync(This,sourceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,sourceId,operation) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_FromFolderAsync(This,sourceRootFolder,operation) \
    ( (This)->lpVtbl->FromFolderAsync(This,sourceRootFolder,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportStorageMedium
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportStorageMedium
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportStorageMedium[] = L"Windows.Media.Import.IPhotoImportStorageMedium";
/* [object, uuid("F2B9B093-FC85-487F-87C2-58D675D05B07"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StorageMediumType )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedAccessMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapacityInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AvailableSpaceInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Refresh )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMediumVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMediumVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_get_SerialNumber(This,value) \
    ( (This)->lpVtbl->get_SerialNumber(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_get_StorageMediumType(This,value) \
    ( (This)->lpVtbl->get_StorageMediumType(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_get_SupportedAccessMode(This,value) \
    ( (This)->lpVtbl->get_SupportedAccessMode(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_get_CapacityInBytes(This,value) \
    ( (This)->lpVtbl->get_CapacityInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_get_AvailableSpaceInBytes(This,value) \
    ( (This)->lpVtbl->get_AvailableSpaceInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_Refresh(This) \
    ( (This)->lpVtbl->Refresh(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Import.IPhotoImportVideoSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Import.PhotoImportVideoSegment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportVideoSegment[] = L"Windows.Media.Import.IPhotoImportVideoSegment";
/* [object, uuid("623C0289-321A-41D8-9166-8C62A333276C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sibling )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sidecars )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegmentVtbl;

interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_get_SizeInBytes(This,value) \
    ( (This)->lpVtbl->get_SizeInBytes(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_get_Date(This,value) \
    ( (This)->lpVtbl->get_Date(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_get_Sibling(This,value) \
    ( (This)->lpVtbl->get_Sibling(This,value) )

#define __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_get_Sidecars(This,value) \
    ( (This)->lpVtbl->get_Sidecars(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment;
#endif /* !defined(____x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportDeleteImportedItemsFromSourceResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportDeleteImportedItemsFromSourceResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportDeleteImportedItemsFromSourceResult[] = L"Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportFindItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportFindItemsResult ** Default Interface **
 *    Windows.Media.Import.IPhotoImportFindItemsResult2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportFindItemsResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportFindItemsResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportFindItemsResult[] = L"Windows.Media.Import.PhotoImportFindItemsResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportImportItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportImportItemsResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportImportItemsResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportImportItemsResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportImportItemsResult[] = L"Windows.Media.Import.PhotoImportImportItemsResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportItem_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportItem[] = L"Windows.Media.Import.PhotoImportItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportItemImportedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportItemImportedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportItemImportedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportItemImportedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportItemImportedEventArgs[] = L"Windows.Media.Import.PhotoImportItemImportedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Import.IPhotoImportManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportManager[] = L"Windows.Media.Import.PhotoImportManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportOperation_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportOperation[] = L"Windows.Media.Import.PhotoImportOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSelectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSelectionChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSelectionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSelectionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSelectionChangedEventArgs[] = L"Windows.Media.Import.PhotoImportSelectionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Import.IPhotoImportSession2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSession_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSession[] = L"Windows.Media.Import.PhotoImportSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSidecar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSidecar ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSidecar_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSidecar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSidecar[] = L"Windows.Media.Import.PhotoImportSidecar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Import.IPhotoImportSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSource[] = L"Windows.Media.Import.PhotoImportSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportStorageMedium
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportStorageMedium ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportStorageMedium_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportStorageMedium_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportStorageMedium[] = L"Windows.Media.Import.PhotoImportStorageMedium";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Import.PhotoImportVideoSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Import.IPhotoImportVideoSegment ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Import_PhotoImportVideoSegment_DEFINED
#define RUNTIMECLASS_Windows_Media_Import_PhotoImportVideoSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportVideoSegment[] = L"Windows.Media.Import.PhotoImportVideoSegment";
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
#endif // __windows2Emedia2Eimport_p_h__

#endif // __windows2Emedia2Eimport_h__
