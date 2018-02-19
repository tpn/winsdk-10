/* Header file automatically generated from windows.gaming.xboxlive.storage.idl */
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
#ifndef __windows2Egaming2Exboxlive2Estorage_h__
#define __windows2Egaming2Exboxlive2Estorage_h__
#ifndef __windows2Egaming2Exboxlive2Estorage_p_h__
#define __windows2Egaming2Exboxlive2Estorage_p_h__


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

#if !defined(WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION)
#define WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION)

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
#include "Windows.Gaming.XboxLive.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveBlobGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveBlobInfo;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveBlobInfoGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveBlobInfoQuery;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveContainer;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainer

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveContainerInfo;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveContainerInfoGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveContainerInfoQuery;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveOperationResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveProvider;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProvider

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveProviderGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    interface IGameSaveProviderStatics;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveBlobInfo;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE
#define DEF___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("aaaf545b-f5e9-5da6-af70-9d904c7a4d37"))
IIterator<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*> __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t;
#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>
//#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE
#define DEF___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a7c456d7-fa9f-536f-8ed2-459545811ed4"))
IIterable<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*> __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t;
#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>
//#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveContainerInfo;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE
#define DEF___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0ecd9756-3e0d-523f-a549-2b6504db5202"))
IIterator<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*> __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t;
#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>
//#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE
#define DEF___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("55e4d98f-0889-5c06-a857-7dd168c2d852"))
IIterable<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*> __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t;
#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>
//#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE
#define DEF___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b9c466a0-2a3f-5f28-a1c1-9cb192f6c786"))
IVectorView<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo*> __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t;
#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>
//#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE
#define DEF___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9c490594-0846-50f5-b2ef-c6f03ee6868a"))
IVectorView<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo*> __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t;
#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>
//#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveBlobGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9d96282c-b6ab-5cd3-991b-a358c531bcb6"))
IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult*> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7023b023-7aed-526c-b3bc-be12e35ce1cf"))
IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult*> __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_t;
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult*>
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveBlobInfoGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9331e53a-a414-51e7-bfbc-7784df83dc8e"))
IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult*> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d7b7f3b4-6028-522f-849d-a69495e4dcd0"))
IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult*> __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_t;
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult*>
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveContainerInfoGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("05f86a80-be5b-5e7e-b977-8257c5e48acc"))
IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult*> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cff8afeb-5a18-5f51-b61b-943887f729ee"))
IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult*> __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_t;
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult*>
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveOperationResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ee53e64f-5319-56fd-a28a-2c474fc42e48"))
IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.XboxLive.Storage.GameSaveOperationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1c27fb97-1e1a-516f-abb2-12c18e18218d"))
IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.XboxLive.Storage.GameSaveOperationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult*> __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_t;
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult*>
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveProviderGetResult;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7617548d-8e60-50cb-a11e-120fa2082e5b"))
IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult*> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3dc36085-5fec-541b-96cf-627b2ad80d36"))
IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult*, ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult*> __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_t;
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult*>
//#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_USE */


#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9114f794-2ceb-5b03-9b22-36884e1f58b3"))
IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("790acb62-c4b3-57ea-a152-9e219371c6dc"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3c9ffa92-5123-5ac4-b111-03c215f0c51c"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2cfeec4f-e261-5f4c-aee1-c78518e9d5b9"))
IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> : IMapView_impl<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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




#ifndef DEF___FIAsyncOperationCompletedHandler_1___z__zint64_USE
#define DEF___FIAsyncOperationCompletedHandler_1___z__zint64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d3ef5872-7d4e-59bb-95ed-79fe0f0dbe89"))
IAsyncOperationCompletedHandler<__int64> : IAsyncOperationCompletedHandler_impl<__int64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Int64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__int64> __FIAsyncOperationCompletedHandler_1___z__zint64_t;
#define __FIAsyncOperationCompletedHandler_1___z__zint64 ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___z__zint64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___z__zint64 ABI::Windows::Foundation::IAsyncOperationCompletedHandler<INT64>
//#define __FIAsyncOperationCompletedHandler_1___z__zint64_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<INT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___z__zint64_USE */




#ifndef DEF___FIAsyncOperation_1___z__zint64_USE
#define DEF___FIAsyncOperation_1___z__zint64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cc468085-4bef-5584-907c-9223d2679019"))
IAsyncOperation<__int64> : IAsyncOperation_impl<__int64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Int64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__int64> __FIAsyncOperation_1___z__zint64_t;
#define __FIAsyncOperation_1___z__zint64 ABI::Windows::Foundation::__FIAsyncOperation_1___z__zint64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___z__zint64 ABI::Windows::Foundation::IAsyncOperation<INT64>
//#define __FIAsyncOperation_1___z__zint64_t ABI::Windows::Foundation::IAsyncOperation<INT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___z__zint64_USE */




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





#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */











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
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    
                    typedef enum GameSaveErrorStatus : int GameSaveErrorStatus;
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
















namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveBlobInfoQuery;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveContainer;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveContainerInfoQuery;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    class GameSaveProvider;
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */













/*
 *
 * Struct Windows.Gaming.XboxLive.Storage.GameSaveErrorStatus
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 */

#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [v1_enum, contract] */
                    enum GameSaveErrorStatus : int
                    {
                        GameSaveErrorStatus_Ok = 0,
                        GameSaveErrorStatus_Abort = -2147467260,
                        GameSaveErrorStatus_InvalidContainerName = -2138898431,
                        GameSaveErrorStatus_NoAccess = -2138898430,
                        GameSaveErrorStatus_OutOfLocalStorage = -2138898429,
                        GameSaveErrorStatus_UserCanceled = -2138898428,
                        GameSaveErrorStatus_UpdateTooBig = -2138898427,
                        GameSaveErrorStatus_QuotaExceeded = -2138898426,
                        GameSaveErrorStatus_ProvidedBufferTooSmall = -2138898425,
                        GameSaveErrorStatus_BlobNotFound = -2138898424,
                        GameSaveErrorStatus_NoXboxLiveInfo = -2138898423,
                        GameSaveErrorStatus_ContainerNotInSync = -2138898422,
                        GameSaveErrorStatus_ContainerSyncFailed = -2138898421,
                        GameSaveErrorStatus_UserHasNoXboxLiveInfo = -2138898420,
                        GameSaveErrorStatus_ObjectExpired = -2138898419,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("917281E0-7201-4953-AA2C-4008F03AEF45"), exclusiveto, contract] */
                    MIDL_INTERFACE("917281E0-7201-4953-AA2C-4008F03AEF45")
                    IGameSaveBlobGetResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveBlobGetResult=_uuidof(IGameSaveBlobGetResult);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfo[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("ADD38034-BAF0-4645-B6D0-46EDAFFB3C2B"), exclusiveto, contract] */
                    MIDL_INTERFACE("ADD38034-BAF0-4645-B6D0-46EDAFFB3C2B")
                    IGameSaveBlobInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveBlobInfo=_uuidof(IGameSaveBlobInfo);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("C7578582-3697-42BF-989C-665D923B5231"), exclusiveto, contract] */
                    MIDL_INTERFACE("C7578582-3697-42BF-989C-665D923B5231")
                    IGameSaveBlobInfoGetResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveBlobInfoGetResult=_uuidof(IGameSaveBlobInfoGetResult);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("9FDD74B2-EEEE-447B-A9D2-7F96C0F83208"), exclusiveto, contract] */
                    MIDL_INTERFACE("9FDD74B2-EEEE-447B-A9D2-7F96C0F83208")
                    IGameSaveBlobInfoQuery : IInspectable
                    {
                        /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE GetBlobInfoAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * * operation
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetBlobInfoWithIndexAndMaxAsync(
                            /* [in] */UINT32 startIndex,
                            /* [in] */UINT32 maxNumberOfItems,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetItemCountAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveBlobInfoQuery=_uuidof(IGameSaveBlobInfoQuery);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainer
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainer
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainer[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainer";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("C3C08F89-563F-4ECD-9C6F-33FD0E323D10"), exclusiveto, contract] */
                    MIDL_INTERFACE("C3C08F89-563F-4ECD-9C6F-33FD0E323D10")
                    IGameSaveContainer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Provider(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProvider * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SubmitUpdatesAsync(
                            /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * blobsToWrite,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * blobsToDelete,
                            /* [in] */__RPC__in HSTRING displayName,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReadAsync(
                            /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * blobsToRead,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * action
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * blobsToRead,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SubmitPropertySetUpdatesAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * blobsToWrite,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * blobsToDelete,
                            /* [in] */__RPC__in HSTRING displayName,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateBlobInfoQuery(
                            /* [in] */__RPC__in HSTRING blobNamePrefix,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery * * query
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveContainer=_uuidof(IGameSaveContainer);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("B7E27300-155D-4BB4-B2BA-930306F391B5"), exclusiveto, contract] */
                    MIDL_INTERFACE("B7E27300-155D-4BB4-B2BA-930306F391B5")
                    IGameSaveContainerInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalSize(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastModifiedTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NeedsSync(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveContainerInfo=_uuidof(IGameSaveContainerInfo);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("FFC50D74-C581-4F9D-9E39-30A10C1E4C50"), exclusiveto, contract] */
                    MIDL_INTERFACE("FFC50D74-C581-4F9D-9E39-30A10C1E4C50")
                    IGameSaveContainerInfoGetResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveContainerInfoGetResult=_uuidof(IGameSaveContainerInfoGetResult);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("3C94E863-6F80-4327-9327-FFC11AFD42B3"), exclusiveto, contract] */
                    MIDL_INTERFACE("3C94E863-6F80-4327-9327-FFC11AFD42B3")
                    IGameSaveContainerInfoQuery : IInspectable
                    {
                        /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE GetContainerInfoAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * * operation
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetContainerInfoWithIndexAndMaxAsync(
                            /* [in] */UINT32 startIndex,
                            /* [in] */UINT32 maxNumberOfItems,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetItemCountAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveContainerInfoQuery=_uuidof(IGameSaveContainerInfoQuery);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveOperationResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveOperationResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("CF0F1A05-24A0-4582-9A55-B1BBBB9388D8"), exclusiveto, contract] */
                    MIDL_INTERFACE("CF0F1A05-24A0-4582-9A55-B1BBBB9388D8")
                    IGameSaveOperationResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveOperationResult=_uuidof(IGameSaveOperationResult);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveProvider
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveProvider
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProvider[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProvider";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("90A60394-80FE-4211-97F8-A5DE14DD95D2"), exclusiveto, contract] */
                    MIDL_INTERFACE("90A60394-80FE-4211-97F8-A5DE14DD95D2")
                    IGameSaveProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateContainer(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainer * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteContainerAsync(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * action
                            ) = 0;
                        /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE CreateContainerInfoQuery(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery * * query
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateContainerInfoQueryWithName(
                            /* [in] */__RPC__in HSTRING containerNamePrefix,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery * * query
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRemainingBytesInQuotaAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___z__zint64 * * operation
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainersChangedSinceLastSync(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveProvider=_uuidof(IGameSaveProvider);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProviderGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("3AB90816-D393-4D65-AC16-41C3E67AB945"), exclusiveto, contract] */
                    MIDL_INTERFACE("3AB90816-D393-4D65-AC16-41C3E67AB945")
                    IGameSaveProviderGetResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProvider * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveProviderGetResult=_uuidof(IGameSaveProviderGetResult);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveProvider
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProviderStatics[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace XboxLive {
                namespace Storage {
                    /* [object, uuid("D01D3ED0-7B03-449D-8CBD-3402842A1048"), exclusiveto, contract] */
                    MIDL_INTERFACE("D01D3ED0-7B03-449D-8CBD-3402842A1048")
                    IGameSaveProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetForUserAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [in] */__RPC__in HSTRING serviceConfigId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSyncOnDemandForUserAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [in] */__RPC__in HSTRING serviceConfigId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameSaveProviderStatics=_uuidof(IGameSaveProviderStatics);
                    
                } /* Windows */
            } /* Gaming */
        } /* XboxLive */
    } /* Storage */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfo_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfo[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoQuery_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainer
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainer ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainer_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainer[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainer";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfo_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfo[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoQuery_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveOperationResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveOperationResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveOperationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveOperationResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveOperationResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveProvider
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics interface starting with version 1.0 of the Windows.Gaming.XboxLive.StorageApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveProvider ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveProvider[] = L"Windows.Gaming.XboxLive.Storage.GameSaveProvider";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProviderGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProviderGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveProviderGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics;

#endif // ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;

typedef struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl;

interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;

typedef  struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl;

interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;

typedef struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl;

interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;

typedef  struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl;

interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;

typedef struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl;

interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;

typedef struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl;

interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if !defined(____FIAsyncOperationCompletedHandler_1___z__zint64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___z__zint64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___z__zint64 __FIAsyncOperationCompletedHandler_1___z__zint64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___z__zint64;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___z__zint64 __FIAsyncOperation_1___z__zint64;

typedef struct __FIAsyncOperationCompletedHandler_1___z__zint64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___z__zint64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___z__zint64Vtbl;

interface __FIAsyncOperationCompletedHandler_1___z__zint64
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___z__zint64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___z__zint64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___z__zint64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___z__zint64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___z__zint64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___z__zint64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1___z__zint64_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___z__zint64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___z__zint64 __FIAsyncOperation_1___z__zint64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___z__zint64;

typedef struct __FIAsyncOperation_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___z__zint64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___z__zint64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___z__zint64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___z__zint64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___z__zint64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___z__zint64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, /* [retval][out] */ __RPC__out __int64 *results);
    END_INTERFACE
} __FIAsyncOperation_1___z__zint64Vtbl;

interface __FIAsyncOperation_1___z__zint64
{
    CONST_VTBL struct __FIAsyncOperation_1___z__zint64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___z__zint64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___z__zint64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___z__zint64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___z__zint64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___z__zint64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___z__zint64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___z__zint64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___z__zint64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___z__zint64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___z__zint64_INTERFACE_DEFINED__


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



#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;











#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus;


































/*
 *
 * Struct Windows.Gaming.XboxLive.Storage.GameSaveErrorStatus
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 */

#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus
{
    GameSaveErrorStatus_Ok = 0,
    GameSaveErrorStatus_Abort = -2147467260,
    GameSaveErrorStatus_InvalidContainerName = -2138898431,
    GameSaveErrorStatus_NoAccess = -2138898430,
    GameSaveErrorStatus_OutOfLocalStorage = -2138898429,
    GameSaveErrorStatus_UserCanceled = -2138898428,
    GameSaveErrorStatus_UpdateTooBig = -2138898427,
    GameSaveErrorStatus_QuotaExceeded = -2138898426,
    GameSaveErrorStatus_ProvidedBufferTooSmall = -2138898425,
    GameSaveErrorStatus_BlobNotFound = -2138898424,
    GameSaveErrorStatus_NoXboxLiveInfo = -2138898423,
    GameSaveErrorStatus_ContainerNotInSync = -2138898422,
    GameSaveErrorStatus_ContainerSyncFailed = -2138898421,
    GameSaveErrorStatus_UserHasNoXboxLiveInfo = -2138898420,
    GameSaveErrorStatus_ObjectExpired = -2138898419,
};
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult";
/* [object, uuid("917281E0-7201-4953-AA2C-4008F03AEF45"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResultVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfo[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo";
/* [object, uuid("ADD38034-BAF0-4645-B6D0-46EDAFFB3C2B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult";
/* [object, uuid("C7578582-3697-42BF-989C-665D923B5231"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResultVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery";
/* [object, uuid("9FDD74B2-EEEE-447B-A9D2-7F96C0F83208"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *GetBlobInfoAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetBlobInfoWithIndexAndMaxAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxNumberOfItems,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemCountAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQueryVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQueryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_GetBlobInfoAsync(This,operation) \
    ( (This)->lpVtbl->GetBlobInfoAsync(This,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_GetBlobInfoWithIndexAndMaxAsync(This,startIndex,maxNumberOfItems,operation) \
    ( (This)->lpVtbl->GetBlobInfoWithIndexAndMaxAsync(This,startIndex,maxNumberOfItems,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_GetItemCountAsync(This,operation) \
    ( (This)->lpVtbl->GetItemCountAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainer
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainer
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainer[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainer";
/* [object, uuid("C3C08F89-563F-4ECD-9C6F-33FD0E323D10"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Provider )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SubmitUpdatesAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * blobsToWrite,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * blobsToDelete,
        /* [in] */__RPC__in HSTRING displayName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReadAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * blobsToRead,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * action
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * blobsToRead,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SubmitPropertySetUpdatesAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * blobsToWrite,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * blobsToDelete,
        /* [in] */__RPC__in HSTRING displayName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBlobInfoQuery )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
        /* [in] */__RPC__in HSTRING blobNamePrefix,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * * query
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_get_Provider(This,value) \
    ( (This)->lpVtbl->get_Provider(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_SubmitUpdatesAsync(This,blobsToWrite,blobsToDelete,displayName,operation) \
    ( (This)->lpVtbl->SubmitUpdatesAsync(This,blobsToWrite,blobsToDelete,displayName,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_ReadAsync(This,blobsToRead,action) \
    ( (This)->lpVtbl->ReadAsync(This,blobsToRead,action) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_GetAsync(This,blobsToRead,operation) \
    ( (This)->lpVtbl->GetAsync(This,blobsToRead,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_SubmitPropertySetUpdatesAsync(This,blobsToWrite,blobsToDelete,displayName,operation) \
    ( (This)->lpVtbl->SubmitPropertySetUpdatesAsync(This,blobsToWrite,blobsToDelete,displayName,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_CreateBlobInfoQuery(This,blobNamePrefix,query) \
    ( (This)->lpVtbl->CreateBlobInfoQuery(This,blobNamePrefix,query) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo";
/* [object, uuid("B7E27300-155D-4BB4-B2BA-930306F391B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalSize )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastModifiedTime )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NeedsSync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_get_TotalSize(This,value) \
    ( (This)->lpVtbl->get_TotalSize(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_get_LastModifiedTime(This,value) \
    ( (This)->lpVtbl->get_LastModifiedTime(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_get_NeedsSync(This,value) \
    ( (This)->lpVtbl->get_NeedsSync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult";
/* [object, uuid("FFC50D74-C581-4F9D-9E39-30A10C1E4C50"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResultVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery";
/* [object, uuid("3C94E863-6F80-4327-9327-FFC11AFD42B3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *GetContainerInfoAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetContainerInfoWithIndexAndMaxAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxNumberOfItems,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemCountAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQueryVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQueryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_GetContainerInfoAsync(This,operation) \
    ( (This)->lpVtbl->GetContainerInfoAsync(This,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_GetContainerInfoWithIndexAndMaxAsync(This,startIndex,maxNumberOfItems,operation) \
    ( (This)->lpVtbl->GetContainerInfoWithIndexAndMaxAsync(This,startIndex,maxNumberOfItems,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_GetItemCountAsync(This,operation) \
    ( (This)->lpVtbl->GetItemCountAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveOperationResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveOperationResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult";
/* [object, uuid("CF0F1A05-24A0-4582-9A55-B1BBBB9388D8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResultVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveProvider
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveProvider
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProvider[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProvider";
/* [object, uuid("90A60394-80FE-4211-97F8-A5DE14DD95D2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateContainer )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteContainerAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * action
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *CreateContainerInfoQuery )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * * query
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateContainerInfoQueryWithName )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
        /* [in] */__RPC__in HSTRING containerNamePrefix,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * * query
        );
    HRESULT ( STDMETHODCALLTYPE *GetRemainingBytesInQuotaAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___z__zint64 * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainersChangedSinceLastSync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_CreateContainer(This,name,result) \
    ( (This)->lpVtbl->CreateContainer(This,name,result) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_DeleteContainerAsync(This,name,action) \
    ( (This)->lpVtbl->DeleteContainerAsync(This,name,action) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_CreateContainerInfoQuery(This,query) \
    ( (This)->lpVtbl->CreateContainerInfoQuery(This,query) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_CreateContainerInfoQueryWithName(This,containerNamePrefix,query) \
    ( (This)->lpVtbl->CreateContainerInfoQueryWithName(This,containerNamePrefix,query) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_GetRemainingBytesInQuotaAsync(This,operation) \
    ( (This)->lpVtbl->GetRemainingBytesInQuotaAsync(This,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_get_ContainersChangedSinceLastSync(This,value) \
    ( (This)->lpVtbl->get_ContainersChangedSinceLastSync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProviderGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult";
/* [object, uuid("3AB90816-D393-4D65-AC16-41C3E67AB945"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResultVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.XboxLive.Storage.GameSaveProvider
 *
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProviderStatics[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics";
/* [object, uuid("D01D3ED0-7B03-449D-8CBD-3402842A1048"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUserAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING serviceConfigId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSyncOnDemandForUserAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING serviceConfigId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_GetForUserAsync(This,user,serviceConfigId,operation) \
    ( (This)->lpVtbl->GetForUserAsync(This,user,serviceConfigId,operation) )

#define __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_GetSyncOnDemandForUserAsync(This,user,serviceConfigId,operation) \
    ( (This)->lpVtbl->GetSyncOnDemandForUserAsync(This,user,serviceConfigId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfo_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfo[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoQuery_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainer
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainer ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainer_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainer[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainer";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfo_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfo[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoQuery_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveOperationResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveOperationResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveOperationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveOperationResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveOperationResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveProvider
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics interface starting with version 1.0 of the Windows.Gaming.XboxLive.StorageApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveProvider ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveProvider[] = L"Windows.Gaming.XboxLive.Storage.GameSaveProvider";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult
 *
 * Introduced to Windows.Gaming.XboxLive.StorageApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProviderGetResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_XboxLive_Storage_GameSaveProviderGetResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveProviderGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult";
#endif
#endif // WINDOWS_GAMING_XBOXLIVE_STORAGEAPICONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egaming2Exboxlive2Estorage_p_h__

#endif // __windows2Egaming2Exboxlive2Estorage_h__
