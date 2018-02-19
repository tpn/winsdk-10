/* Header file automatically generated from windows.storage.pickers.provider.idl */
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
#ifndef __windows2Estorage2Epickers2Eprovider_h__
#define __windows2Estorage2Epickers2Eprovider_h__
#ifndef __windows2Estorage2Epickers2Eprovider_p_h__
#define __windows2Estorage2Epickers2Eprovider_p_h__


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
#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IFileOpenPickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IFileRemovedEventArgs;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs ABI::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IFileSavePickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IPickerClosingDeferral;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral ABI::Windows::Storage::Pickers::Provider::IPickerClosingDeferral

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IPickerClosingEventArgs;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs ABI::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IPickerClosingOperation;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation ABI::Windows::Storage::Pickers::Provider::IPickerClosingOperation

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface ITargetFileRequest;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest ABI::Windows::Storage::Pickers::Provider::ITargetFileRequest

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface ITargetFileRequestDeferral;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface ITargetFileRequestedEventArgs;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class FileOpenPickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class FileRemovedEventArgs;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1fb2939-695b-5f56-841a-a52a7d148572"))
ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::FileRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Pickers::Provider::FileOpenPickerUI*, ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Pickers::Provider::FileRemovedEventArgs*, ABI::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Pickers.Provider.FileOpenPickerUI, Windows.Storage.Pickers.Provider.FileRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::FileRemovedEventArgs*> __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class PickerClosingEventArgs;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2b06bdac-983b-5552-b5c9-b0990a2db3a1"))
ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::PickerClosingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Pickers::Provider::FileOpenPickerUI*, ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Pickers::Provider::PickerClosingEventArgs*, ABI::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Pickers.Provider.FileOpenPickerUI, Windows.Storage.Pickers.Provider.PickerClosingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::PickerClosingEventArgs*> __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI*,ABI::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class FileSavePickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1e6a632-f97f-54d9-9e1b-a714edc3ff06"))
ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileSavePickerUI*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Pickers::Provider::FileSavePickerUI*, ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Pickers.Provider.FileSavePickerUI, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileSavePickerUI*,IInspectable*> __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class TargetFileRequestedEventArgs;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d3e1f8c7-45c5-5249-b336-a111bfaa985b"))
ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileSavePickerUI*,ABI::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Pickers::Provider::FileSavePickerUI*, ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs*, ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Pickers.Provider.FileSavePickerUI, Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::FileSavePickerUI*,ABI::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs*> __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI*,ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI*,ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_USE */


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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    
                    typedef enum AddFileResult : int AddFileResult;
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    
                    typedef enum FileSelectionMode : int FileSelectionMode;
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    
                    typedef enum SetFileNameResult : int SetFileNameResult;
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */













namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class PickerClosingDeferral;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class PickerClosingOperation;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class TargetFileRequest;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class TargetFileRequestDeferral;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */













/*
 *
 * Struct Windows.Storage.Pickers.Provider.AddFileResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum AddFileResult : int
                    {
                        AddFileResult_Added = 0,
                        AddFileResult_AlreadyAdded = 1,
                        AddFileResult_NotAllowed = 2,
                        AddFileResult_Unavailable = 3,
                    };
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Pickers.Provider.FileSelectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum FileSelectionMode : int
                    {
                        FileSelectionMode_Single = 0,
                        FileSelectionMode_Multiple = 1,
                    };
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Pickers.Provider.SetFileNameResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum SetFileNameResult : int
                    {
                        SetFileNameResult_Succeeded = 0,
                        SetFileNameResult_NotAllowed = 1,
                        SetFileNameResult_Unavailable = 2,
                    };
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IFileOpenPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.FileOpenPickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileOpenPickerUI[] = L"Windows.Storage.Pickers.Provider.IFileOpenPickerUI";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("DDA45A10-F9D4-40C4-8AF5-C5B6B5A61D1D"), exclusiveto, contract] */
                    MIDL_INTERFACE("DDA45A10-F9D4-40C4-8AF5-C5B6B5A61D1D")
                    IFileOpenPickerUI : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE AddFile(
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                            /* [retval, out] */__RPC__out ABI::Windows::Storage::Pickers::Provider::AddFileResult * addResult
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveFile(
                            /* [in] */__RPC__in HSTRING id
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ContainsFile(
                            /* [in] */__RPC__in HSTRING id,
                            /* [retval, out] */__RPC__out boolean * isContained
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CanAddFile(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                            /* [retval, out] */__RPC__out boolean * canAdd
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowedFileTypes(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Storage::Pickers::Provider::FileSelectionMode * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SettingsIdentifier(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_FileRemoved(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_FileRemoved(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Closing(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Closing(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFileOpenPickerUI=_uuidof(IFileOpenPickerUI);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IFileRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.FileRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileRemovedEventArgs[] = L"Windows.Storage.Pickers.Provider.IFileRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("13043DA7-7FCA-4C2B-9ECA-6890F9F00185"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("13043DA7-7FCA-4C2B-9ECA-6890F9F00185")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    IFileRemovedEventArgs : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFileRemovedEventArgs=_uuidof(IFileRemovedEventArgs);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IFileSavePickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.FileSavePickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileSavePickerUI[] = L"Windows.Storage.Pickers.Provider.IFileSavePickerUI";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("9656C1E7-3E56-43CC-8A39-33C73D9D542B"), exclusiveto, contract] */
                    MIDL_INTERFACE("9656C1E7-3E56-43CC-8A39-33C73D9D542B")
                    IFileSavePickerUI : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowedFileTypes(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SettingsIdentifier(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TrySetFileName(
                            /* [in] */__RPC__in HSTRING value,
                            /* [retval, out] */__RPC__out ABI::Windows::Storage::Pickers::Provider::SetFileNameResult * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FileNameChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FileNameChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TargetFileRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TargetFileRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFileSavePickerUI=_uuidof(IFileSavePickerUI);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IPickerClosingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.PickerClosingDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingDeferral[] = L"Windows.Storage.Pickers.Provider.IPickerClosingDeferral";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("7AF7F71E-1A67-4A31-AE80-E907708A619B"), exclusiveto, contract] */
                    MIDL_INTERFACE("7AF7F71E-1A67-4A31-AE80-E907708A619B")
                    IPickerClosingDeferral : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPickerClosingDeferral=_uuidof(IPickerClosingDeferral);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IPickerClosingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.PickerClosingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs[] = L"Windows.Storage.Pickers.Provider.IPickerClosingEventArgs";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("7E59F224-B332-4F12-8B9F-A8C2F06B32CD"), exclusiveto, contract] */
                    MIDL_INTERFACE("7E59F224-B332-4F12-8B9F-A8C2F06B32CD")
                    IPickerClosingEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClosingOperation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Pickers::Provider::IPickerClosingOperation * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPickerClosingEventArgs=_uuidof(IPickerClosingEventArgs);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IPickerClosingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.PickerClosingOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingOperation[] = L"Windows.Storage.Pickers.Provider.IPickerClosingOperation";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("4CE9FB84-BEEE-4E39-A773-FC5F0EAE328D"), exclusiveto, contract] */
                    MIDL_INTERFACE("4CE9FB84-BEEE-4E39-A773-FC5F0EAE328D")
                    IPickerClosingOperation : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Pickers::Provider::IPickerClosingDeferral * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPickerClosingOperation=_uuidof(IPickerClosingOperation);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.ITargetFileRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.TargetFileRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequest[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequest";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("42BD3355-7F88-478B-8E81-690B20340678"), exclusiveto, contract] */
                    MIDL_INTERFACE("42BD3355-7F88-478B-8E81-690B20340678")
                    ITargetFileRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetFile(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TargetFile(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITargetFileRequest=_uuidof(ITargetFileRequest);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.TargetFileRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequestDeferral[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("4AEE9D91-BF15-4DA9-95F6-F6B7D558225B"), exclusiveto, contract] */
                    MIDL_INTERFACE("4AEE9D91-BF15-4DA9-95F6-F6B7D558225B")
                    ITargetFileRequestDeferral : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITargetFileRequestDeferral=_uuidof(ITargetFileRequestDeferral);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequestedEventArgs[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    /* [object, uuid("B163DBC1-1B51-4C89-A591-0FD40B3C57C9"), exclusiveto, contract] */
                    MIDL_INTERFACE("B163DBC1-1B51-4C89-A591-0FD40B3C57C9")
                    ITargetFileRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Pickers::Provider::ITargetFileRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITargetFileRequestedEventArgs=_uuidof(ITargetFileRequestedEventArgs);
                    
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.FileOpenPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IFileOpenPickerUI ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileOpenPickerUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileOpenPickerUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileOpenPickerUI[] = L"Windows.Storage.Pickers.Provider.FileOpenPickerUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.FileRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IFileRemovedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileRemovedEventArgs_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileRemovedEventArgs[] = L"Windows.Storage.Pickers.Provider.FileRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.FileSavePickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IFileSavePickerUI ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileSavePickerUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileSavePickerUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileSavePickerUI[] = L"Windows.Storage.Pickers.Provider.FileSavePickerUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.PickerClosingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IPickerClosingDeferral ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingDeferral_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingDeferral[] = L"Windows.Storage.Pickers.Provider.PickerClosingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.PickerClosingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IPickerClosingEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingEventArgs[] = L"Windows.Storage.Pickers.Provider.PickerClosingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.PickerClosingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IPickerClosingOperation ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingOperation_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingOperation[] = L"Windows.Storage.Pickers.Provider.PickerClosingOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.TargetFileRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.ITargetFileRequest ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequest_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequest[] = L"Windows.Storage.Pickers.Provider.TargetFileRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.TargetFileRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequestDeferral[] = L"Windows.Storage.Pickers.Provider.TargetFileRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequestedEventArgs[] = L"Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs_INTERFACE_DEFINED__

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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult;


typedef enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode;


typedef enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult;





























/*
 *
 * Struct Windows.Storage.Pickers.Provider.AddFileResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult
{
    AddFileResult_Added = 0,
    AddFileResult_AlreadyAdded = 1,
    AddFileResult_NotAllowed = 2,
    AddFileResult_Unavailable = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Pickers.Provider.FileSelectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode
{
    FileSelectionMode_Single = 0,
    FileSelectionMode_Multiple = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Pickers.Provider.SetFileNameResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult
{
    SetFileNameResult_Succeeded = 0,
    SetFileNameResult_NotAllowed = 1,
    SetFileNameResult_Unavailable = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IFileOpenPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.FileOpenPickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileOpenPickerUI[] = L"Windows.Storage.Pickers.Provider.IFileOpenPickerUI";
/* [object, uuid("DDA45A10-F9D4-40C4-8AF5-C5B6B5A61D1D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult * addResult
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */__RPC__in HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *ContainsFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__out boolean * isContained
        );
    HRESULT ( STDMETHODCALLTYPE *CanAddFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__out boolean * canAdd
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowedFileTypes )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionMode )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SettingsIdentifier )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_FileRemoved )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_FileRemoved )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Closing )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Closing )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUIVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_AddFile(This,id,file,addResult) \
    ( (This)->lpVtbl->AddFile(This,id,file,addResult) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_RemoveFile(This,id) \
    ( (This)->lpVtbl->RemoveFile(This,id) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_ContainsFile(This,id,isContained) \
    ( (This)->lpVtbl->ContainsFile(This,id,isContained) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_CanAddFile(This,file,canAdd) \
    ( (This)->lpVtbl->CanAddFile(This,file,canAdd) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_get_AllowedFileTypes(This,value) \
    ( (This)->lpVtbl->get_AllowedFileTypes(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_get_SelectionMode(This,value) \
    ( (This)->lpVtbl->get_SelectionMode(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_get_SettingsIdentifier(This,value) \
    ( (This)->lpVtbl->get_SettingsIdentifier(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_add_FileRemoved(This,handler,token) \
    ( (This)->lpVtbl->add_FileRemoved(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_remove_FileRemoved(This,token) \
    ( (This)->lpVtbl->remove_FileRemoved(This,token) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_add_Closing(This,handler,token) \
    ( (This)->lpVtbl->add_Closing(This,handler,token) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_remove_Closing(This,token) \
    ( (This)->lpVtbl->remove_Closing(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IFileRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.FileRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileRemovedEventArgs[] = L"Windows.Storage.Pickers.Provider.IFileRemovedEventArgs";
/* [object, uuid("13043DA7-7FCA-4C2B-9ECA-6890F9F00185"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IFileSavePickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.FileSavePickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileSavePickerUI[] = L"Windows.Storage.Pickers.Provider.IFileSavePickerUI";
/* [object, uuid("9656C1E7-3E56-43CC-8A39-33C73D9D542B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowedFileTypes )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SettingsIdentifier )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileName )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetFileName )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FileNameChanged )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FileNameChanged )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TargetFileRequested )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TargetFileRequested )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUIVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_get_AllowedFileTypes(This,value) \
    ( (This)->lpVtbl->get_AllowedFileTypes(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_get_SettingsIdentifier(This,value) \
    ( (This)->lpVtbl->get_SettingsIdentifier(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_get_FileName(This,value) \
    ( (This)->lpVtbl->get_FileName(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_TrySetFileName(This,value,result) \
    ( (This)->lpVtbl->TrySetFileName(This,value,result) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_add_FileNameChanged(This,handler,token) \
    ( (This)->lpVtbl->add_FileNameChanged(This,handler,token) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_remove_FileNameChanged(This,token) \
    ( (This)->lpVtbl->remove_FileNameChanged(This,token) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_add_TargetFileRequested(This,handler,token) \
    ( (This)->lpVtbl->add_TargetFileRequested(This,handler,token) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_remove_TargetFileRequested(This,token) \
    ( (This)->lpVtbl->remove_TargetFileRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IPickerClosingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.PickerClosingDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingDeferral[] = L"Windows.Storage.Pickers.Provider.IPickerClosingDeferral";
/* [object, uuid("7AF7F71E-1A67-4A31-AE80-E907708A619B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferralVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IPickerClosingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.PickerClosingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs[] = L"Windows.Storage.Pickers.Provider.IPickerClosingEventArgs";
/* [object, uuid("7E59F224-B332-4F12-8B9F-A8C2F06B32CD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClosingOperation )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgsVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_get_ClosingOperation(This,value) \
    ( (This)->lpVtbl->get_ClosingOperation(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.IPickerClosingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.PickerClosingOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingOperation[] = L"Windows.Storage.Pickers.Provider.IPickerClosingOperation";
/* [object, uuid("4CE9FB84-BEEE-4E39-A773-FC5F0EAE328D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperationVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.ITargetFileRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.TargetFileRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequest[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequest";
/* [object, uuid("42BD3355-7F88-478B-8E81-690B20340678"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TargetFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_get_TargetFile(This,value) \
    ( (This)->lpVtbl->get_TargetFile(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_put_TargetFile(This,value) \
    ( (This)->lpVtbl->put_TargetFile(This,value) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.TargetFileRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequestDeferral[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral";
/* [object, uuid("4AEE9D91-BF15-4DA9-95F6-F6B7D558225B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferralVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequestedEventArgs[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs";
/* [object, uuid("B163DBC1-1B51-4C89-A591-0FD40B3C57C9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.FileOpenPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IFileOpenPickerUI ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileOpenPickerUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileOpenPickerUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileOpenPickerUI[] = L"Windows.Storage.Pickers.Provider.FileOpenPickerUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.FileRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IFileRemovedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileRemovedEventArgs_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileRemovedEventArgs[] = L"Windows.Storage.Pickers.Provider.FileRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.FileSavePickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IFileSavePickerUI ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileSavePickerUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_FileSavePickerUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileSavePickerUI[] = L"Windows.Storage.Pickers.Provider.FileSavePickerUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.PickerClosingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IPickerClosingDeferral ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingDeferral_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingDeferral[] = L"Windows.Storage.Pickers.Provider.PickerClosingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.PickerClosingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IPickerClosingEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingEventArgs[] = L"Windows.Storage.Pickers.Provider.PickerClosingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.PickerClosingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.IPickerClosingOperation ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingOperation_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_PickerClosingOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingOperation[] = L"Windows.Storage.Pickers.Provider.PickerClosingOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.TargetFileRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.ITargetFileRequest ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequest_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequest[] = L"Windows.Storage.Pickers.Provider.TargetFileRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.TargetFileRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequestDeferral[] = L"Windows.Storage.Pickers.Provider.TargetFileRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_Provider_TargetFileRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequestedEventArgs[] = L"Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs";
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
#endif // __windows2Estorage2Epickers2Eprovider_p_h__

#endif // __windows2Estorage2Epickers2Eprovider_h__
