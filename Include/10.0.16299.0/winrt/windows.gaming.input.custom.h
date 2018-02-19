/* Header file automatically generated from windows.gaming.input.custom.idl */
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
#ifndef __windows2Egaming2Einput2Ecustom_h__
#define __windows2Egaming2Einput2Ecustom_h__
#ifndef __windows2Egaming2Einput2Ecustom_p_h__
#define __windows2Egaming2Einput2Ecustom_p_h__


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
#include "Windows.Gaming.Input.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface ICustomGameControllerFactory;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory ABI::Windows::Gaming::Input::Custom::ICustomGameControllerFactory

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGameControllerFactoryManagerStatics;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics ABI::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGameControllerFactoryManagerStatics2;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 ABI::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGameControllerInputSink;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink ABI::Windows::Gaming::Input::Custom::IGameControllerInputSink

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider ABI::Windows::Gaming::Input::Custom::IGameControllerProvider

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGipFirmwareUpdateResult;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGipGameControllerInputSink;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink ABI::Windows::Gaming::Input::Custom::IGipGameControllerInputSink

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGipGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider ABI::Windows::Gaming::Input::Custom::IGipGameControllerProvider

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IHidGameControllerInputSink;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink ABI::Windows::Gaming::Input::Custom::IHidGameControllerInputSink

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IHidGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider ABI::Windows::Gaming::Input::Custom::IHidGameControllerProvider

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IXusbGameControllerInputSink;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink ABI::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IXusbGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider ABI::Windows::Gaming::Input::Custom::IXusbGameControllerProvider

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    class GipFirmwareUpdateResult;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    struct GipFirmwareUpdateProgress;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("065c16af-49dc-5c94-afe2-9385937facc9"))
IAsyncOperationProgressHandler<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*, ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*>,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Gaming.Input.Custom.GipFirmwareUpdateResult, Windows.Gaming.Input.Custom.GipFirmwareUpdateProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*,ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*,ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("61b95949-a027-51d8-9f33-37927451502b"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*, ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*>,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Gaming.Input.Custom.GipFirmwareUpdateResult, Windows.Gaming.Input.Custom.GipFirmwareUpdateProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*,ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*,ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bfaa48bd-155f-5112-bd86-e01d6f7cd405"))
IAsyncOperationWithProgress<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*, ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*>,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Gaming.Input.Custom.GipFirmwareUpdateResult, Windows.Gaming.Input.Custom.GipFirmwareUpdateProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult*,struct ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*,ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult*,ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGameController;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIGameController ABI::Windows::Gaming::Input::IGameController

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__





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





namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    
                    typedef enum GipFirmwareUpdateStatus : int GipFirmwareUpdateStatus;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    
                    typedef enum GipMessageClass : int GipMessageClass;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    
                    typedef enum XusbDeviceSubtype : int XusbDeviceSubtype;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    
                    typedef enum XusbDeviceType : int XusbDeviceType;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    
                    typedef struct GameControllerVersionInfo GameControllerVersionInfo;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    
                    typedef struct GipFirmwareUpdateProgress GipFirmwareUpdateProgress;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */















namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    class GipGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    class HidGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    class XusbGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */












/*
 *
 * Struct Windows.Gaming.Input.Custom.GipFirmwareUpdateStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [v1_enum, contract] */
                    enum GipFirmwareUpdateStatus : int
                    {
                        GipFirmwareUpdateStatus_Completed = 0,
                        GipFirmwareUpdateStatus_UpToDate = 1,
                        GipFirmwareUpdateStatus_Failed = 2,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.GipMessageClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [v1_enum, contract] */
                    enum GipMessageClass : int
                    {
                        GipMessageClass_Command = 0,
                        GipMessageClass_LowLatency = 1,
                        GipMessageClass_StandardLatency = 2,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.XusbDeviceSubtype
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [v1_enum, contract] */
                    enum XusbDeviceSubtype : int
                    {
                        XusbDeviceSubtype_Unknown = 0,
                        XusbDeviceSubtype_Gamepad = 1,
                        XusbDeviceSubtype_ArcadePad = 2,
                        XusbDeviceSubtype_ArcadeStick = 3,
                        XusbDeviceSubtype_FlightStick = 4,
                        XusbDeviceSubtype_Wheel = 5,
                        XusbDeviceSubtype_Guitar = 6,
                        XusbDeviceSubtype_GuitarAlternate = 7,
                        XusbDeviceSubtype_GuitarBass = 8,
                        XusbDeviceSubtype_DrumKit = 9,
                        XusbDeviceSubtype_DancePad = 10,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.XusbDeviceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [v1_enum, contract] */
                    enum XusbDeviceType : int
                    {
                        XusbDeviceType_Unknown = 0,
                        XusbDeviceType_Gamepad = 1,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.GameControllerVersionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [contract] */
                    struct GameControllerVersionInfo
                    {
                        UINT16 Major;
                        UINT16 Minor;
                        UINT16 Build;
                        UINT16 Revision;
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.GipFirmwareUpdateProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [contract] */
                    struct GipFirmwareUpdateProgress
                    {
                        DOUBLE PercentCompleted;
                        UINT32 CurrentComponentId;
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.ICustomGameControllerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_ICustomGameControllerFactory[] = L"Windows.Gaming.Input.Custom.ICustomGameControllerFactory";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("69A0AE5E-758E-4CBE-ACE6-62155FE9126F"), contract] */
                    MIDL_INTERFACE("69A0AE5E-758E-4CBE-ACE6-62155FE9126F")
                    ICustomGameControllerFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateGameController(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::Custom::IGameControllerProvider * provider,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnGameControllerAdded(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnGameControllerRemoved(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomGameControllerFactory=_uuidof(ICustomGameControllerFactory);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GameControllerFactoryManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics[] = L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("36CB66E3-D0A1-4986-A24C-40B137DEBA9E"), exclusiveto, contract] */
                    MIDL_INTERFACE("36CB66E3-D0A1-4986-A24C-40B137DEBA9E")
                    IGameControllerFactoryManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RegisterCustomFactoryForGipInterface(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::Custom::ICustomGameControllerFactory * factory,
                            /* [in] */GUID interfaceId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RegisterCustomFactoryForHardwareId(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::Custom::ICustomGameControllerFactory * factory,
                            /* [in] */UINT16 hardwareVendorId,
                            /* [in] */UINT16 hardwareProductId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RegisterCustomFactoryForXusbType(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::Custom::ICustomGameControllerFactory * factory,
                            /* [in] */ABI::Windows::Gaming::Input::Custom::XusbDeviceType xusbType,
                            /* [in] */ABI::Windows::Gaming::Input::Custom::XusbDeviceSubtype xusbSubtype
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameControllerFactoryManagerStatics=_uuidof(IGameControllerFactoryManagerStatics);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GameControllerFactoryManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics2[] = L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("EACE5644-19DF-4115-B32A-2793E2AEA3BB"), exclusiveto, contract] */
                    MIDL_INTERFACE("EACE5644-19DF-4115-B32A-2793E2AEA3BB")
                    IGameControllerFactoryManagerStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TryGetFactoryControllerFromGameController(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::Custom::ICustomGameControllerFactory * factory,
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * gameController,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IGameController * * factoryController
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameControllerFactoryManagerStatics2=_uuidof(IGameControllerFactoryManagerStatics2);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IGameControllerInputSink";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("1FF6F922-C640-4C78-A820-9A715C558BCB"), contract] */
                    MIDL_INTERFACE("1FF6F922-C640-4C78-A820-9A715C558BCB")
                    IGameControllerInputSink : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OnInputResumed(
                            /* [in] */UINT64 timestamp
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnInputSuspended(
                            /* [in] */UINT64 timestamp
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameControllerInputSink=_uuidof(IGameControllerInputSink);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IGameControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("E6D73982-2996-4559-B16C-3E57D46E58D6"), contract] */
                    MIDL_INTERFACE("E6D73982-2996-4559-B16C-3E57D46E58D6")
                    IGameControllerProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FirmwareVersionInfo(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::Custom::GameControllerVersionInfo * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareProductId(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareVendorId(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareVersionInfo(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::Custom::GameControllerVersionInfo * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsConnected(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameControllerProvider=_uuidof(IGameControllerProvider);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GipFirmwareUpdateResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult[] = L"Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("6B794D32-8553-4292-8E03-E16651A2F8BC"), exclusiveto, contract] */
                    MIDL_INTERFACE("6B794D32-8553-4292-8E03-E16651A2F8BC")
                    IGipFirmwareUpdateResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedErrorCode(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FinalComponentId(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGipFirmwareUpdateResult=_uuidof(IGipFirmwareUpdateResult);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGipGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IGipGameControllerInputSink";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("A2108ABF-09F1-43BC-A140-80F899EC36FB"), contract] */
                    MIDL_INTERFACE("A2108ABF-09F1-43BC-A140-80F899EC36FB")
                    IGipGameControllerInputSink : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OnKeyReceived(
                            /* [in] */UINT64 timestamp,
                            /* [in] */BYTE keyCode,
                            /* [in] */boolean isPressed
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnMessageReceived(
                            /* [in] */UINT64 timestamp,
                            /* [in] */ABI::Windows::Gaming::Input::Custom::GipMessageClass messageClass,
                            /* [in] */BYTE messageId,
                            /* [in] */BYTE sequenceId,
                            /* [in] */UINT32 __messageBufferSize,
                            /* [size_is(__messageBufferSize), in] */__RPC__in_ecount_full(__messageBufferSize) BYTE * messageBuffer
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGipGameControllerInputSink=_uuidof(IGipGameControllerInputSink);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGipGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GipGameControllerProvider
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IGipGameControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("DBCF1E19-1AF5-45A8-BF02-A0EE50C823FC"), exclusiveto, contract] */
                    MIDL_INTERFACE("DBCF1E19-1AF5-45A8-BF02-A0EE50C823FC")
                    IGipGameControllerProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SendMessage(
                            /* [in] */ABI::Windows::Gaming::Input::Custom::GipMessageClass messageClass,
                            /* [in] */BYTE messageId,
                            /* [in] */UINT32 __messageBufferSize,
                            /* [size_is(__messageBufferSize), in] */__RPC__in_ecount_full(__messageBufferSize) BYTE * messageBuffer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SendReceiveMessage(
                            /* [in] */ABI::Windows::Gaming::Input::Custom::GipMessageClass messageClass,
                            /* [in] */BYTE messageId,
                            /* [in] */UINT32 __requestMessageBufferSize,
                            /* [size_is(__requestMessageBufferSize), in] */__RPC__in_ecount_full(__requestMessageBufferSize) BYTE * requestMessageBuffer,
                            /* [in] */UINT32 __responseMessageBufferSize,
                            /* [size_is(__responseMessageBufferSize), out] */__RPC__out_ecount_full(__responseMessageBufferSize) BYTE * responseMessageBuffer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UpdateFirmwareAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * firmwareImage,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGipGameControllerProvider=_uuidof(IGipGameControllerProvider);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IHidGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IHidGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IHidGameControllerInputSink";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("F754C322-182D-40E4-A126-FCEE4FFA1E31"), contract] */
                    MIDL_INTERFACE("F754C322-182D-40E4-A126-FCEE4FFA1E31")
                    IHidGameControllerInputSink : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OnInputReportReceived(
                            /* [in] */UINT64 timestamp,
                            /* [in] */BYTE reportId,
                            /* [in] */UINT32 __reportBufferSize,
                            /* [size_is(__reportBufferSize), in] */__RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHidGameControllerInputSink=_uuidof(IHidGameControllerInputSink);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IHidGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.HidGameControllerProvider
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IHidGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IHidGameControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("95CE3AF4-ABF0-4B68-A081-3B7DE73FF0E7"), exclusiveto, contract] */
                    MIDL_INTERFACE("95CE3AF4-ABF0-4B68-A081-3B7DE73FF0E7")
                    IHidGameControllerProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsageId(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsagePage(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFeatureReport(
                            /* [in] */BYTE reportId,
                            /* [in] */UINT32 __reportBufferSize,
                            /* [size_is(__reportBufferSize), out] */__RPC__out_ecount_full(__reportBufferSize) BYTE * reportBuffer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SendFeatureReport(
                            /* [in] */BYTE reportId,
                            /* [in] */UINT32 __reportBufferSize,
                            /* [size_is(__reportBufferSize), in] */__RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SendOutputReport(
                            /* [in] */BYTE reportId,
                            /* [in] */UINT32 __reportBufferSize,
                            /* [size_is(__reportBufferSize), in] */__RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHidGameControllerProvider=_uuidof(IHidGameControllerProvider);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IXusbGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IXusbGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IXusbGameControllerInputSink";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("B2AC1D95-6ECB-42B3-8AAB-025401CA4712"), contract] */
                    MIDL_INTERFACE("B2AC1D95-6ECB-42B3-8AAB-025401CA4712")
                    IXusbGameControllerInputSink : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OnInputReceived(
                            /* [in] */UINT64 timestamp,
                            /* [in] */BYTE reportId,
                            /* [in] */UINT32 __inputBufferSize,
                            /* [size_is(__inputBufferSize), in] */__RPC__in_ecount_full(__inputBufferSize) BYTE * inputBuffer
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXusbGameControllerInputSink=_uuidof(IXusbGameControllerInputSink);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IXusbGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.XusbGameControllerProvider
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IXusbGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IXusbGameControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    /* [object, uuid("6E2971EB-0EFB-48B4-808B-837643B2F216"), exclusiveto, contract] */
                    MIDL_INTERFACE("6E2971EB-0EFB-48B4-808B-837643B2F216")
                    IXusbGameControllerProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SetVibration(
                            /* [in] */DOUBLE lowFrequencyMotorSpeed,
                            /* [in] */DOUBLE highFrequencyMotorSpeed
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXusbGameControllerProvider=_uuidof(IXusbGameControllerProvider);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.GameControllerFactoryManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_GameControllerFactoryManager_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_GameControllerFactoryManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GameControllerFactoryManager[] = L"Windows.Gaming.Input.Custom.GameControllerFactoryManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.GipFirmwareUpdateResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_GipFirmwareUpdateResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_GipFirmwareUpdateResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GipFirmwareUpdateResult[] = L"Windows.Gaming.Input.Custom.GipFirmwareUpdateResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.GipGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IGipGameControllerProvider ** Default Interface **
 *    Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_GipGameControllerProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_GipGameControllerProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GipGameControllerProvider[] = L"Windows.Gaming.Input.Custom.GipGameControllerProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.HidGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IHidGameControllerProvider ** Default Interface **
 *    Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_HidGameControllerProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_HidGameControllerProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_HidGameControllerProvider[] = L"Windows.Gaming.Input.Custom.HidGameControllerProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.Custom.XusbGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IXusbGameControllerProvider ** Default Interface **
 *    Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_XusbGameControllerProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_XusbGameControllerProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_XusbGameControllerProvider[] = L"Windows.Gaming.Input.Custom.XusbGameControllerProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameController __x_ABI_CWindows_CGaming_CInput_CIGameController;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus;


typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass;


typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype;


typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType;


typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo;


typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress;




























/*
 *
 * Struct Windows.Gaming.Input.Custom.GipFirmwareUpdateStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus
{
    GipFirmwareUpdateStatus_Completed = 0,
    GipFirmwareUpdateStatus_UpToDate = 1,
    GipFirmwareUpdateStatus_Failed = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.GipMessageClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass
{
    GipMessageClass_Command = 0,
    GipMessageClass_LowLatency = 1,
    GipMessageClass_StandardLatency = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.XusbDeviceSubtype
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype
{
    XusbDeviceSubtype_Unknown = 0,
    XusbDeviceSubtype_Gamepad = 1,
    XusbDeviceSubtype_ArcadePad = 2,
    XusbDeviceSubtype_ArcadeStick = 3,
    XusbDeviceSubtype_FlightStick = 4,
    XusbDeviceSubtype_Wheel = 5,
    XusbDeviceSubtype_Guitar = 6,
    XusbDeviceSubtype_GuitarAlternate = 7,
    XusbDeviceSubtype_GuitarBass = 8,
    XusbDeviceSubtype_DrumKit = 9,
    XusbDeviceSubtype_DancePad = 10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.XusbDeviceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType
{
    XusbDeviceType_Unknown = 0,
    XusbDeviceType_Gamepad = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.GameControllerVersionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo
{
    UINT16 Major;
    UINT16 Minor;
    UINT16 Build;
    UINT16 Revision;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.Custom.GipFirmwareUpdateProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress
{
    DOUBLE PercentCompleted;
    UINT32 CurrentComponentId;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.ICustomGameControllerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_ICustomGameControllerFactory[] = L"Windows.Gaming.Input.Custom.ICustomGameControllerFactory";
/* [object, uuid("69A0AE5E-758E-4CBE-ACE6-62155FE9126F"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateGameController )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OnGameControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * value
        );
    HRESULT ( STDMETHODCALLTYPE *OnGameControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactoryVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_CreateGameController(This,provider,value) \
    ( (This)->lpVtbl->CreateGameController(This,provider,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_OnGameControllerAdded(This,value) \
    ( (This)->lpVtbl->OnGameControllerAdded(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_OnGameControllerRemoved(This,value) \
    ( (This)->lpVtbl->OnGameControllerRemoved(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GameControllerFactoryManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics[] = L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics";
/* [object, uuid("36CB66E3-D0A1-4986-A24C-40B137DEBA9E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterCustomFactoryForGipInterface )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
        /* [in] */GUID interfaceId
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterCustomFactoryForHardwareId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
        /* [in] */UINT16 hardwareVendorId,
        /* [in] */UINT16 hardwareProductId
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterCustomFactoryForXusbType )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType xusbType,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype xusbSubtype
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_RegisterCustomFactoryForGipInterface(This,factory,interfaceId) \
    ( (This)->lpVtbl->RegisterCustomFactoryForGipInterface(This,factory,interfaceId) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_RegisterCustomFactoryForHardwareId(This,factory,hardwareVendorId,hardwareProductId) \
    ( (This)->lpVtbl->RegisterCustomFactoryForHardwareId(This,factory,hardwareVendorId,hardwareProductId) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_RegisterCustomFactoryForXusbType(This,factory,xusbType,xusbSubtype) \
    ( (This)->lpVtbl->RegisterCustomFactoryForXusbType(This,factory,xusbType,xusbSubtype) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GameControllerFactoryManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics2[] = L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2";
/* [object, uuid("EACE5644-19DF-4115-B32A-2793E2AEA3BB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetFactoryControllerFromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * * factoryController
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2Vtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_TryGetFactoryControllerFromGameController(This,factory,gameController,factoryController) \
    ( (This)->lpVtbl->TryGetFactoryControllerFromGameController(This,factory,gameController,factoryController) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IGameControllerInputSink";
/* [object, uuid("1FF6F922-C640-4C78-A820-9A715C558BCB"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnInputResumed )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
        /* [in] */UINT64 timestamp
        );
    HRESULT ( STDMETHODCALLTYPE *OnInputSuspended )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
        /* [in] */UINT64 timestamp
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSinkVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSinkVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_OnInputResumed(This,timestamp) \
    ( (This)->lpVtbl->OnInputResumed(This,timestamp) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_OnInputSuspended(This,timestamp) \
    ( (This)->lpVtbl->OnInputSuspended(This,timestamp) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IGameControllerProvider";
/* [object, uuid("E6D73982-2996-4559-B16C-3E57D46E58D6"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FirmwareVersionInfo )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareProductId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareVendorId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareVersionInfo )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProviderVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_get_FirmwareVersionInfo(This,value) \
    ( (This)->lpVtbl->get_FirmwareVersionInfo(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_get_HardwareProductId(This,value) \
    ( (This)->lpVtbl->get_HardwareProductId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_get_HardwareVendorId(This,value) \
    ( (This)->lpVtbl->get_HardwareVendorId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_get_HardwareVersionInfo(This,value) \
    ( (This)->lpVtbl->get_HardwareVersionInfo(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_get_IsConnected(This,value) \
    ( (This)->lpVtbl->get_IsConnected(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GipFirmwareUpdateResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult[] = L"Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult";
/* [object, uuid("6B794D32-8553-4292-8E03-E16651A2F8BC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedErrorCode )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FinalComponentId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResultVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_get_ExtendedErrorCode(This,value) \
    ( (This)->lpVtbl->get_ExtendedErrorCode(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_get_FinalComponentId(This,value) \
    ( (This)->lpVtbl->get_FinalComponentId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGipGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IGipGameControllerInputSink";
/* [object, uuid("A2108ABF-09F1-43BC-A140-80F899EC36FB"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnKeyReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
        /* [in] */UINT64 timestamp,
        /* [in] */BYTE keyCode,
        /* [in] */boolean isPressed
        );
    HRESULT ( STDMETHODCALLTYPE *OnMessageReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
        /* [in] */UINT64 timestamp,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass messageClass,
        /* [in] */BYTE messageId,
        /* [in] */BYTE sequenceId,
        /* [in] */UINT32 __messageBufferSize,
        /* [size_is(__messageBufferSize), in] */__RPC__in_ecount_full(__messageBufferSize) BYTE * messageBuffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSinkVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSinkVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_OnKeyReceived(This,timestamp,keyCode,isPressed) \
    ( (This)->lpVtbl->OnKeyReceived(This,timestamp,keyCode,isPressed) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_OnMessageReceived(This,timestamp,messageClass,messageId,sequenceId,__messageBufferSize,messageBuffer) \
    ( (This)->lpVtbl->OnMessageReceived(This,timestamp,messageClass,messageId,sequenceId,__messageBufferSize,messageBuffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IGipGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.GipGameControllerProvider
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IGipGameControllerProvider";
/* [object, uuid("DBCF1E19-1AF5-45A8-BF02-A0EE50C823FC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendMessage )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass messageClass,
        /* [in] */BYTE messageId,
        /* [in] */UINT32 __messageBufferSize,
        /* [size_is(__messageBufferSize), in] */__RPC__in_ecount_full(__messageBufferSize) BYTE * messageBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *SendReceiveMessage )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass messageClass,
        /* [in] */BYTE messageId,
        /* [in] */UINT32 __requestMessageBufferSize,
        /* [size_is(__requestMessageBufferSize), in] */__RPC__in_ecount_full(__requestMessageBufferSize) BYTE * requestMessageBuffer,
        /* [in] */UINT32 __responseMessageBufferSize,
        /* [size_is(__responseMessageBufferSize), out] */__RPC__out_ecount_full(__responseMessageBufferSize) BYTE * responseMessageBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateFirmwareAsync )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * firmwareImage,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProviderVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_SendMessage(This,messageClass,messageId,__messageBufferSize,messageBuffer) \
    ( (This)->lpVtbl->SendMessage(This,messageClass,messageId,__messageBufferSize,messageBuffer) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_SendReceiveMessage(This,messageClass,messageId,__requestMessageBufferSize,requestMessageBuffer,__responseMessageBufferSize,responseMessageBuffer) \
    ( (This)->lpVtbl->SendReceiveMessage(This,messageClass,messageId,__requestMessageBufferSize,requestMessageBuffer,__responseMessageBufferSize,responseMessageBuffer) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_UpdateFirmwareAsync(This,firmwareImage,result) \
    ( (This)->lpVtbl->UpdateFirmwareAsync(This,firmwareImage,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IHidGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IHidGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IHidGameControllerInputSink";
/* [object, uuid("F754C322-182D-40E4-A126-FCEE4FFA1E31"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnInputReportReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
        /* [in] */UINT64 timestamp,
        /* [in] */BYTE reportId,
        /* [in] */UINT32 __reportBufferSize,
        /* [size_is(__reportBufferSize), in] */__RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSinkVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSinkVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_OnInputReportReceived(This,timestamp,reportId,__reportBufferSize,reportBuffer) \
    ( (This)->lpVtbl->OnInputReportReceived(This,timestamp,reportId,__reportBufferSize,reportBuffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IHidGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.HidGameControllerProvider
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IHidGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IHidGameControllerProvider";
/* [object, uuid("95CE3AF4-ABF0-4B68-A081-3B7DE73FF0E7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFeatureReport )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
        /* [in] */BYTE reportId,
        /* [in] */UINT32 __reportBufferSize,
        /* [size_is(__reportBufferSize), out] */__RPC__out_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *SendFeatureReport )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
        /* [in] */BYTE reportId,
        /* [in] */UINT32 __reportBufferSize,
        /* [size_is(__reportBufferSize), in] */__RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *SendOutputReport )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
        /* [in] */BYTE reportId,
        /* [in] */UINT32 __reportBufferSize,
        /* [size_is(__reportBufferSize), in] */__RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProviderVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_get_UsageId(This,value) \
    ( (This)->lpVtbl->get_UsageId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_get_UsagePage(This,value) \
    ( (This)->lpVtbl->get_UsagePage(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_GetFeatureReport(This,reportId,__reportBufferSize,reportBuffer) \
    ( (This)->lpVtbl->GetFeatureReport(This,reportId,__reportBufferSize,reportBuffer) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_SendFeatureReport(This,reportId,__reportBufferSize,reportBuffer) \
    ( (This)->lpVtbl->SendFeatureReport(This,reportId,__reportBufferSize,reportBuffer) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_SendOutputReport(This,reportId,__reportBufferSize,reportBuffer) \
    ( (This)->lpVtbl->SendOutputReport(This,reportId,__reportBufferSize,reportBuffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IXusbGameControllerInputSink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerInputSink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IXusbGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IXusbGameControllerInputSink";
/* [object, uuid("B2AC1D95-6ECB-42B3-8AAB-025401CA4712"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnInputReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
        /* [in] */UINT64 timestamp,
        /* [in] */BYTE reportId,
        /* [in] */UINT32 __inputBufferSize,
        /* [size_is(__inputBufferSize), in] */__RPC__in_ecount_full(__inputBufferSize) BYTE * inputBuffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSinkVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSinkVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_OnInputReceived(This,timestamp,reportId,__inputBufferSize,inputBuffer) \
    ( (This)->lpVtbl->OnInputReceived(This,timestamp,reportId,__inputBufferSize,inputBuffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.Custom.IXusbGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Custom.XusbGameControllerProvider
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IXusbGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IXusbGameControllerProvider";
/* [object, uuid("6E2971EB-0EFB-48B4-808B-837643B2F216"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetVibration )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
        /* [in] */DOUBLE lowFrequencyMotorSpeed,
        /* [in] */DOUBLE highFrequencyMotorSpeed
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProviderVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_SetVibration(This,lowFrequencyMotorSpeed,highFrequencyMotorSpeed) \
    ( (This)->lpVtbl->SetVibration(This,lowFrequencyMotorSpeed,highFrequencyMotorSpeed) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.GameControllerFactoryManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_GameControllerFactoryManager_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_GameControllerFactoryManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GameControllerFactoryManager[] = L"Windows.Gaming.Input.Custom.GameControllerFactoryManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.GipFirmwareUpdateResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_GipFirmwareUpdateResult_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_GipFirmwareUpdateResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GipFirmwareUpdateResult[] = L"Windows.Gaming.Input.Custom.GipFirmwareUpdateResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.GipGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IGipGameControllerProvider ** Default Interface **
 *    Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_GipGameControllerProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_GipGameControllerProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GipGameControllerProvider[] = L"Windows.Gaming.Input.Custom.GipGameControllerProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.Custom.HidGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IHidGameControllerProvider ** Default Interface **
 *    Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_HidGameControllerProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_HidGameControllerProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_HidGameControllerProvider[] = L"Windows.Gaming.Input.Custom.HidGameControllerProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.Custom.XusbGameControllerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.Custom.IXusbGameControllerProvider ** Default Interface **
 *    Windows.Gaming.Input.Custom.IGameControllerProvider
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Custom_XusbGameControllerProvider_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Custom_XusbGameControllerProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_XusbGameControllerProvider[] = L"Windows.Gaming.Input.Custom.XusbGameControllerProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egaming2Einput2Ecustom_p_h__

#endif // __windows2Egaming2Einput2Ecustom_h__
