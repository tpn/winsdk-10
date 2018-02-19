/* Header file automatically generated from windows.gaming.ui.idl */
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
#ifndef __windows2Egaming2Eui_h__
#define __windows2Egaming2Eui_h__
#ifndef __windows2Egaming2Eui_p_h__
#define __windows2Egaming2Eui_p_h__


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

#if !defined(WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION)
#define WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION)
#define WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION)

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
#include "Windows.ApplicationModel.Activation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameBarStatics;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics ABI::Windows::Gaming::UI::IGameBarStatics

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameChatMessageReceivedEventArgs;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs ABI::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameChatOverlay;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay ABI::Windows::Gaming::UI::IGameChatOverlay

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameChatOverlayMessageSource;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource ABI::Windows::Gaming::UI::IGameChatOverlayMessageSource

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameChatOverlayStatics;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics ABI::Windows::Gaming::UI::IGameChatOverlayStatics

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameMonitor;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor ABI::Windows::Gaming::UI::IGameMonitor

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameMonitorStatics;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics ABI::Windows::Gaming::UI::IGameMonitorStatics

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameUIProviderActivatedEventArgs;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs ABI::Windows::Gaming::UI::IGameUIProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                enum GameMonitoringPermission : int;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b30d8404-94e7-5267-9c7a-bd79727b815a"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Gaming::UI::GameMonitoringPermission> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Gaming::UI::GameMonitoringPermission> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.UI.GameMonitoringPermission>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Gaming::UI::GameMonitoringPermission> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::UI::GameMonitoringPermission>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::UI::GameMonitoringPermission>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5a3bf49f-d58f-58c3-a7e1-1ed05470baa6"))
IAsyncOperation<enum ABI::Windows::Gaming::UI::GameMonitoringPermission> : IAsyncOperation_impl<enum ABI::Windows::Gaming::UI::GameMonitoringPermission> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.UI.GameMonitoringPermission>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Gaming::UI::GameMonitoringPermission> __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_t;
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::UI::GameMonitoringPermission>
//#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::UI::GameMonitoringPermission>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_USE */



namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                class GameChatOverlayMessageSource;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                class GameChatMessageReceivedEventArgs;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */


#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fe4f13bf-689c-5fe3-b7ad-55bc57f92466"))
ITypedEventHandler<ABI::Windows::Gaming::UI::GameChatOverlayMessageSource*,ABI::Windows::Gaming::UI::GameChatMessageReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::UI::GameChatOverlayMessageSource*, ABI::Windows::Gaming::UI::IGameChatOverlayMessageSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::UI::GameChatMessageReceivedEventArgs*, ABI::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Gaming.UI.GameChatOverlayMessageSource, Windows.Gaming.UI.GameChatMessageReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Gaming::UI::GameChatOverlayMessageSource*,ABI::Windows::Gaming::UI::GameChatMessageReceivedEventArgs*> __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Gaming::UI::IGameChatOverlayMessageSource*,ABI::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Gaming::UI::IGameChatOverlayMessageSource*,ABI::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_USE */


#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000



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




#ifndef DEF___FIMapChangedEventArgs_1_HSTRING_USE
#define DEF___FIMapChangedEventArgs_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60141efb-f2f9-5377-96fd-f8c60d9558b5"))
IMapChangedEventArgs<HSTRING> : IMapChangedEventArgs_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapChangedEventArgs`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapChangedEventArgs<HSTRING> __FIMapChangedEventArgs_1_HSTRING_t;
#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapChangedEventArgs_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
//#define __FIMapChangedEventArgs_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapChangedEventArgs_1_HSTRING_USE */





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */





#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */

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
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                
                typedef enum GameChatMessageOrigin : int GameChatMessageOrigin;
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                
                typedef enum GameChatOverlayPosition : int GameChatOverlayPosition;
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                
                typedef enum GameMonitoringPermission : int GameMonitoringPermission;
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */











namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                class GameChatOverlay;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                class GameMonitor;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                class GameUIProviderActivatedEventArgs;
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */












/*
 *
 * Struct Windows.Gaming.UI.GameChatMessageOrigin
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [v1_enum, contract] */
                enum GameChatMessageOrigin : int
                {
                    GameChatMessageOrigin_Voice = 0,
                    GameChatMessageOrigin_Text = 1,
                };
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.UI.GameChatOverlayPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [v1_enum, contract] */
                enum GameChatOverlayPosition : int
                {
                    GameChatOverlayPosition_BottomCenter = 0,
                    GameChatOverlayPosition_BottomLeft = 1,
                    GameChatOverlayPosition_BottomRight = 2,
                    GameChatOverlayPosition_MiddleRight = 3,
                    GameChatOverlayPosition_MiddleLeft = 4,
                    GameChatOverlayPosition_TopCenter = 5,
                    GameChatOverlayPosition_TopLeft = 6,
                    GameChatOverlayPosition_TopRight = 7,
                };
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.UI.GameMonitoringPermission
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [v1_enum, contract] */
                enum GameMonitoringPermission : int
                {
                    GameMonitoringPermission_Allowed = 0,
                    GameMonitoringPermission_DeniedByUser = 1,
                    GameMonitoringPermission_DeniedBySystem = 2,
                };
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.UI.IGameBarStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameBar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameBarStatics[] = L"Windows.Gaming.UI.IGameBarStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("1DB9A292-CC78-4173-BE45-B61E67283EA7"), exclusiveto, contract] */
                MIDL_INTERFACE("1DB9A292-CC78-4173-BE45-B61E67283EA7")
                IGameBarStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_VisibilityChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_VisibilityChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IsInputRedirectedChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IsInputRedirectedChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Visible(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInputRedirected(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameBarStatics=_uuidof(IGameBarStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameBarStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatMessageReceivedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs[] = L"Windows.Gaming.UI.IGameChatMessageReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("A28201F1-3FB9-4E42-A403-7AFCE2023B1E"), exclusiveto, contract] */
                MIDL_INTERFACE("A28201F1-3FB9-4E42-A403-7AFCE2023B1E")
                IGameChatMessageReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppDisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SenderName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Origin(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::UI::GameChatMessageOrigin * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameChatMessageReceivedEventArgs=_uuidof(IGameChatMessageReceivedEventArgs);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlay[] = L"Windows.Gaming.UI.IGameChatOverlay";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("FBC64865-F6FC-4A48-AE07-03AC6ED43704"), exclusiveto, contract] */
                MIDL_INTERFACE("FBC64865-F6FC-4A48-AE07-03AC6ED43704")
                IGameChatOverlay : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredPosition(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::UI::GameChatOverlayPosition * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredPosition(
                        /* [in] */ABI::Windows::Gaming::UI::GameChatOverlayPosition value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddMessage(
                        /* [in] */__RPC__in HSTRING sender,
                        /* [in] */__RPC__in HSTRING message,
                        /* [in] */ABI::Windows::Gaming::UI::GameChatMessageOrigin origin
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameChatOverlay=_uuidof(IGameChatOverlay);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatOverlayMessageSource
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatOverlayMessageSource
 *
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlayMessageSource[] = L"Windows.Gaming.UI.IGameChatOverlayMessageSource";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("1E177397-59FB-4F4F-8E9A-80ACF817743C"), exclusiveto, contract] */
                MIDL_INTERFACE("1E177397-59FB-4F4F-8E9A-80ACF817743C")
                IGameChatOverlayMessageSource : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MessageReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MessageReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDelayBeforeClosingAfterMessageReceived(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameChatOverlayMessageSource=_uuidof(IGameChatOverlayMessageSource);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatOverlayStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlayStatics[] = L"Windows.Gaming.UI.IGameChatOverlayStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("89ACF614-7867-49F7-9687-25D9DBF444D1"), exclusiveto, contract] */
                MIDL_INTERFACE("89ACF614-7867-49F7-9687-25D9DBF444D1")
                IGameChatOverlayStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::UI::IGameChatOverlay * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameChatOverlayStatics=_uuidof(IGameChatOverlayStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.UI.IGameMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameMonitor[] = L"Windows.Gaming.UI.IGameMonitor";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("12234358-DD09-4511-ADCD-8D5975D81028"), exclusiveto, contract] */
                MIDL_INTERFACE("12234358-DD09-4511-ADCD-8D5975D81028")
                IGameMonitor : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestPermissionAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameMonitor=_uuidof(IGameMonitor);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameMonitor;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.UI.IGameMonitorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameMonitorStatics[] = L"Windows.Gaming.UI.IGameMonitorStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("11674B34-5AE0-4BB4-B91F-8ACB48159A71"), exclusiveto, contract] */
                MIDL_INTERFACE("11674B34-5AE0-4BB4-B91F-8ACB48159A71")
                IGameMonitorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::UI::IGameMonitor * * gameMonitor
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameMonitorStatics=_uuidof(IGameMonitorStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.UI.IGameUIProviderActivatedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GamingUIProviderContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameUIProviderActivatedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameUIProviderActivatedEventArgs[] = L"Windows.Gaming.UI.IGameUIProviderActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                /* [object, uuid("A7B3203E-CAF7-4DED-BBD2-47DE43BB6DD5"), exclusiveto, contract] */
                MIDL_INTERFACE("A7B3203E-CAF7-4DED-BBD2-47DE43BB6DD5")
                IGameUIProviderActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GameUIArgs(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportCompleted(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * results
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameUIProviderActivatedEventArgs=_uuidof(IGameUIProviderActivatedEventArgs);
                
            } /* Windows */
        } /* Gaming */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.UI.GameBar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.UI.IGameBarStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameBar_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameBar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameBar[] = L"Windows.Gaming.UI.GameBar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Gaming.UI.GameChatMessageReceivedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameChatMessageReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameChatMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameChatMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatMessageReceivedEventArgs[] = L"Windows.Gaming.UI.GameChatMessageReceivedEventArgs";
#endif
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.UI.GameChatOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.UI.IGameChatOverlayStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameChatOverlay ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlay_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlay_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatOverlay[] = L"Windows.Gaming.UI.GameChatOverlay";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.UI.GameChatOverlayMessageSource
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Gaming.UI.GameChatOverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameChatOverlayMessageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlayMessageSource_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlayMessageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatOverlayMessageSource[] = L"Windows.Gaming.UI.GameChatOverlayMessageSource";
#endif
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.UI.GameMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.UI.IGameMonitorStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameMonitor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameMonitor_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameMonitor[] = L"Windows.Gaming.UI.GameMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Gaming.UI.GameUIProviderActivatedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GamingUIProviderContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameUIProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameUIProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameUIProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameUIProviderActivatedEventArgs[] = L"Windows.Gaming.UI.GameUIProviderActivatedEventArgs";
#endif
#endif // WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameMonitor __x_ABI_CWindows_CGaming_CUI_CIGameMonitor;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CGaming_CUI_CGameMonitoringPermission;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermissionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermissionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermissionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermissionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CUI__CGameMonitoringPermission **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGaming_CUI_CGameMonitoringPermission *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermissionVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermissionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission_INTERFACE_DEFINED__




#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


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


#if !defined(____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;

typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;

interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapChangedEventArgs_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapChangedEventArgs_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapChangedEventArgs_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapChangedEventArgs_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapChangedEventArgs_1_HSTRING_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 
#define __FIMapChangedEventArgs_1_HSTRING_get_Key(This,value)	\
    ( (This)->lpVtbl -> get_Key(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;







typedef enum __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin;


typedef enum __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition;


typedef enum __x_ABI_CWindows_CGaming_CUI_CGameMonitoringPermission __x_ABI_CWindows_CGaming_CUI_CGameMonitoringPermission;

























/*
 *
 * Struct Windows.Gaming.UI.GameChatMessageOrigin
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin
{
    GameChatMessageOrigin_Voice = 0,
    GameChatMessageOrigin_Text = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.UI.GameChatOverlayPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition
{
    GameChatOverlayPosition_BottomCenter = 0,
    GameChatOverlayPosition_BottomLeft = 1,
    GameChatOverlayPosition_BottomRight = 2,
    GameChatOverlayPosition_MiddleRight = 3,
    GameChatOverlayPosition_MiddleLeft = 4,
    GameChatOverlayPosition_TopCenter = 5,
    GameChatOverlayPosition_TopLeft = 6,
    GameChatOverlayPosition_TopRight = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.UI.GameMonitoringPermission
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CUI_CGameMonitoringPermission
{
    GameMonitoringPermission_Allowed = 0,
    GameMonitoringPermission_DeniedByUser = 1,
    GameMonitoringPermission_DeniedBySystem = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.UI.IGameBarStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameBar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameBarStatics[] = L"Windows.Gaming.UI.IGameBarStatics";
/* [object, uuid("1DB9A292-CC78-4173-BE45-B61E67283EA7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_VisibilityChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_VisibilityChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IsInputRedirectedChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IsInputRedirectedChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInputRedirected )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_add_VisibilityChanged(This,handler,token) \
    ( (This)->lpVtbl->add_VisibilityChanged(This,handler,token) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_remove_VisibilityChanged(This,token) \
    ( (This)->lpVtbl->remove_VisibilityChanged(This,token) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_add_IsInputRedirectedChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IsInputRedirectedChanged(This,handler,token) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_remove_IsInputRedirectedChanged(This,token) \
    ( (This)->lpVtbl->remove_IsInputRedirectedChanged(This,token) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_get_Visible(This,value) \
    ( (This)->lpVtbl->get_Visible(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_get_IsInputRedirected(This,value) \
    ( (This)->lpVtbl->get_IsInputRedirected(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameBarStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatMessageReceivedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs[] = L"Windows.Gaming.UI.IGameChatMessageReceivedEventArgs";
/* [object, uuid("A28201F1-3FB9-4E42-A403-7AFCE2023B1E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppDisplayName )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SenderName )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Origin )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_get_AppId(This,value) \
    ( (This)->lpVtbl->get_AppId(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_get_AppDisplayName(This,value) \
    ( (This)->lpVtbl->get_AppDisplayName(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_get_SenderName(This,value) \
    ( (This)->lpVtbl->get_SenderName(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_get_Origin(This,value) \
    ( (This)->lpVtbl->get_Origin(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlay[] = L"Windows.Gaming.UI.IGameChatOverlay";
/* [object, uuid("FBC64865-F6FC-4A48-AE07-03AC6ED43704"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredPosition )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredPosition )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
        /* [in] */__x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition value
        );
    HRESULT ( STDMETHODCALLTYPE *AddMessage )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
        /* [in] */__RPC__in HSTRING sender,
        /* [in] */__RPC__in HSTRING message,
        /* [in] */__x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin origin
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_get_DesiredPosition(This,value) \
    ( (This)->lpVtbl->get_DesiredPosition(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_put_DesiredPosition(This,value) \
    ( (This)->lpVtbl->put_DesiredPosition(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_AddMessage(This,sender,message,origin) \
    ( (This)->lpVtbl->AddMessage(This,sender,message,origin) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatOverlayMessageSource
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatOverlayMessageSource
 *
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlayMessageSource[] = L"Windows.Gaming.UI.IGameChatOverlayMessageSource";
/* [object, uuid("1E177397-59FB-4F4F-8E9A-80ACF817743C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetDelayBeforeClosingAfterMessageReceived )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSourceVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_add_MessageReceived(This,handler,token) \
    ( (This)->lpVtbl->add_MessageReceived(This,handler,token) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_remove_MessageReceived(This,token) \
    ( (This)->lpVtbl->remove_MessageReceived(This,token) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_SetDelayBeforeClosingAfterMessageReceived(This,value) \
    ( (This)->lpVtbl->SetDelayBeforeClosingAfterMessageReceived(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.UI.IGameChatOverlayStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameChatOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlayStatics[] = L"Windows.Gaming.UI.IGameChatOverlayStatics";
/* [object, uuid("89ACF614-7867-49F7-9687-25D9DBF444D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_GetDefault(This,value) \
    ( (This)->lpVtbl->GetDefault(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.UI.IGameMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameMonitor[] = L"Windows.Gaming.UI.IGameMonitor";
/* [object, uuid("12234358-DD09-4511-ADCD-8D5975D81028"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestPermissionAsync )(
        __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CUI__CGameMonitoringPermission * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameMonitorVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameMonitorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitor_RequestPermissionAsync(This,operation) \
    ( (This)->lpVtbl->RequestPermissionAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameMonitor;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.UI.IGameMonitorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameMonitorStatics[] = L"Windows.Gaming.UI.IGameMonitorStatics";
/* [object, uuid("11674B34-5AE0-4BB4-B91F-8ACB48159A71"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CUI_CIGameMonitor * * gameMonitor
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_GetDefault(This,gameMonitor) \
    ( (This)->lpVtbl->GetDefault(This,gameMonitor) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameMonitorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.UI.IGameUIProviderActivatedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GamingUIProviderContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.UI.GameUIProviderActivatedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameUIProviderActivatedEventArgs[] = L"Windows.Gaming.UI.IGameUIProviderActivatedEventArgs";
/* [object, uuid("A7B3203E-CAF7-4DED-BBD2-47DE43BB6DD5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GameUIArgs )(
        __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * results
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_get_GameUIArgs(This,value) \
    ( (This)->lpVtbl->get_GameUIArgs(This,value) )

#define __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_ReportCompleted(This,results) \
    ( (This)->lpVtbl->ReportCompleted(This,results) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.UI.GameBar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.UI.IGameBarStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameBar_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameBar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameBar[] = L"Windows.Gaming.UI.GameBar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Gaming.UI.GameChatMessageReceivedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameChatMessageReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameChatMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameChatMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatMessageReceivedEventArgs[] = L"Windows.Gaming.UI.GameChatMessageReceivedEventArgs";
#endif
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.UI.GameChatOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.UI.IGameChatOverlayStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameChatOverlay ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlay_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlay_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatOverlay[] = L"Windows.Gaming.UI.GameChatOverlay";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.UI.GameChatOverlayMessageSource
 *
 * Introduced to Windows.Gaming.UI.GameChatOverlayContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Gaming.UI.GameChatOverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameChatOverlayMessageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlayMessageSource_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameChatOverlayMessageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatOverlayMessageSource[] = L"Windows.Gaming.UI.GameChatOverlayMessageSource";
#endif
#endif // WINDOWS_GAMING_UI_GAMECHATOVERLAYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.UI.GameMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.UI.IGameMonitorStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameMonitor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameMonitor_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameMonitor[] = L"Windows.Gaming.UI.GameMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Gaming.UI.GameUIProviderActivatedEventArgs
 *
 * Introduced to Windows.Gaming.UI.GamingUIProviderContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.UI.IGameUIProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameUIProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameUIProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameUIProviderActivatedEventArgs[] = L"Windows.Gaming.UI.GameUIProviderActivatedEventArgs";
#endif
#endif // WINDOWS_GAMING_UI_GAMINGUIPROVIDERCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egaming2Eui_p_h__

#endif // __windows2Egaming2Eui_h__
