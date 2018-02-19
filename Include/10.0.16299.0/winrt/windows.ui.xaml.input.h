/* Header file automatically generated from windows.ui.xaml.input.idl */
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
#ifndef __windows2Eui2Examl2Einput_h__
#define __windows2Eui2Examl2Einput_h__
#ifndef __windows2Eui2Examl2Einput_p_h__
#define __windows2Eui2Examl2Einput_p_h__


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
#include "Windows.Devices.Input.h"
#include "Windows.System.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Documents.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IDoubleTappedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler ABI::Windows::UI::Xaml::Input::IDoubleTappedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IHoldingEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler ABI::Windows::UI::Xaml::Input::IHoldingEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler ABI::Windows::UI::Xaml::Input::IKeyEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationCompletedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler ABI::Windows::UI::Xaml::Input::IManipulationCompletedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationDeltaEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler ABI::Windows::UI::Xaml::Input::IManipulationDeltaEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationInertiaStartingEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler ABI::Windows::UI::Xaml::Input::IManipulationInertiaStartingEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationStartedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler ABI::Windows::UI::Xaml::Input::IManipulationStartedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationStartingEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler ABI::Windows::UI::Xaml::Input::IManipulationStartingEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IPointerEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler ABI::Windows::UI::Xaml::Input::IPointerEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IRightTappedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler ABI::Windows::UI::Xaml::Input::IRightTappedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface ITappedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler ABI::Windows::UI::Xaml::Input::ITappedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyDisplayDismissedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyDisplayRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyInvokedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager ABI::Windows::UI::Xaml::Input::IAccessKeyManager

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyManagerStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics ABI::Windows::UI::Xaml::Input::IAccessKeyManagerStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyManagerStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 ABI::Windows::UI::Xaml::Input::IAccessKeyManagerStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface ICharacterReceivedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs ABI::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface ICommand;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand ABI::Windows::UI::Xaml::Input::ICommand

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IContextRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs ABI::Windows::UI::Xaml::Input::IContextRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IDoubleTappedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs ABI::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IFindNextElementOptions;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions ABI::Windows::UI::Xaml::Input::IFindNextElementOptions

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IFocusManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager ABI::Windows::UI::Xaml::Input::IFocusManager

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IFocusManagerStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics ABI::Windows::UI::Xaml::Input::IFocusManagerStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IFocusManagerStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 ABI::Windows::UI::Xaml::Input::IFocusManagerStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IFocusManagerStatics3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 ABI::Windows::UI::Xaml::Input::IFocusManagerStatics3

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IFocusManagerStatics4;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 ABI::Windows::UI::Xaml::Input::IFocusManagerStatics4

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IGettingFocusEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs ABI::Windows::UI::Xaml::Input::IGettingFocusEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IHoldingRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs ABI::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IInertiaExpansionBehavior;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior ABI::Windows::UI::Xaml::Input::IInertiaExpansionBehavior

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IInertiaRotationBehavior;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior ABI::Windows::UI::Xaml::Input::IInertiaRotationBehavior

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IInertiaTranslationBehavior;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior ABI::Windows::UI::Xaml::Input::IInertiaTranslationBehavior

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IInputScope;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope ABI::Windows::UI::Xaml::Input::IInputScope

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IInputScopeName;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName ABI::Windows::UI::Xaml::Input::IInputScopeName

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IInputScopeNameFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory ABI::Windows::UI::Xaml::Input::IInputScopeNameFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs ABI::Windows::UI::Xaml::Input::IKeyRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyRoutedEventArgs2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 ABI::Windows::UI::Xaml::Input::IKeyRoutedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyRoutedEventArgs3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 ABI::Windows::UI::Xaml::Input::IKeyRoutedEventArgs3

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyboardAccelerator;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyboardAcceleratorFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory ABI::Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyboardAcceleratorInvokedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs ABI::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IKeyboardAcceleratorStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics ABI::Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface ILosingFocusEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs ABI::Windows::UI::Xaml::Input::ILosingFocusEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationCompletedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs ABI::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationDeltaRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs ABI::Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationInertiaStartingRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs ABI::Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationPivot;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot ABI::Windows::UI::Xaml::Input::IManipulationPivot

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationPivotFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory ABI::Windows::UI::Xaml::Input::IManipulationPivotFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationStartedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs ABI::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationStartedRoutedEventArgsFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory ABI::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IManipulationStartingRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs ABI::Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface INoFocusCandidateFoundEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs ABI::Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IPointer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer ABI::Windows::UI::Xaml::Input::IPointer

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IPointerRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs ABI::Windows::UI::Xaml::Input::IPointerRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IPointerRoutedEventArgs2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 ABI::Windows::UI::Xaml::Input::IPointerRoutedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IProcessKeyboardAcceleratorEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs ABI::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IRightTappedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs ABI::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface ITappedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs ABI::Windows::UI::Xaml::Input::ITappedRoutedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class InputScopeName;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7ac16ff4-5857-5001-b87f-327093f68392"))
IIterator<ABI::Windows::UI::Xaml::Input::InputScopeName*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::InputScopeName*, ABI::Windows::UI::Xaml::Input::IInputScopeName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Input.InputScopeName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Input::InputScopeName*> __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_t;
#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
//#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("81416296-95d0-5100-b59b-bea1c27d2002"))
IIterable<ABI::Windows::UI::Xaml::Input::InputScopeName*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::InputScopeName*, ABI::Windows::UI::Xaml::Input::IInputScopeName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Input.InputScopeName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Input::InputScopeName*> __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_t;
#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
//#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class KeyboardAccelerator;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8b6ac198-eaa0-50e6-9a35-32dfdf1f59e1"))
IIterator<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*, ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Input.KeyboardAccelerator>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t;
#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
//#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("af1e5ff1-d518-5521-b40e-6f524d04c129"))
IIterable<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*, ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Input.KeyboardAccelerator>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t;
#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
//#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class Pointer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8cb1347d-8888-5fb3-bffd-e6caf61b4f03"))
IIterator<ABI::Windows::UI::Xaml::Input::Pointer*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::Pointer*, ABI::Windows::UI::Xaml::Input::IPointer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Input.Pointer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Input::Pointer*> __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_t;
#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Input::IPointer*>
//#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Input::IPointer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6cf9f859-2234-510d-860a-db328030cbcc"))
IIterable<ABI::Windows::UI::Xaml::Input::Pointer*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::Pointer*, ABI::Windows::UI::Xaml::Input::IPointer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Input.Pointer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Input::Pointer*> __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_t;
#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Input::IPointer*>
//#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Input::IPointer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fcd65a82-5328-53bc-a884-c209aafabf78"))
IVectorView<ABI::Windows::UI::Xaml::Input::InputScopeName*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::InputScopeName*, ABI::Windows::UI::Xaml::Input::IInputScopeName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Input.InputScopeName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Input::InputScopeName*> __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4d5e3d08-e27c-5d05-a1dc-9885a51c3721"))
IVectorView<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*, ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Input.KeyboardAccelerator>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6250f79f-7668-51e9-86a3-3821217a6631"))
IVectorView<ABI::Windows::UI::Xaml::Input::Pointer*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::Pointer*, ABI::Windows::UI::Xaml::Input::IPointer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Input.Pointer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Input::Pointer*> __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Input::IPointer*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Input::IPointer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("703fe123-d766-562f-b210-1980bb2a0d33"))
IVector<ABI::Windows::UI::Xaml::Input::InputScopeName*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::InputScopeName*, ABI::Windows::UI::Xaml::Input::IInputScopeName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.Input.InputScopeName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::Input::InputScopeName*> __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_t;
#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
//#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Input::IInputScopeName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e4927feb-1e4a-5be3-bda3-62cf4e520258"))
IVector<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*, ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.Input.KeyboardAccelerator>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*> __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t;
#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
//#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class TextElement;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElement;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement ABI::Windows::UI::Xaml::Documents::ITextElement

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class AccessKeyDisplayDismissedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a8c9544b-7078-5316-beb6-d9ec916ab88a"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextElement*, ABI::Windows::UI::Xaml::Documents::ITextElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Documents.TextElement, Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class AccessKeyDisplayRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("39ad7708-254e-560a-9e2e-73b1db31f935"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextElement*, ABI::Windows::UI::Xaml::Documents::ITextElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Documents.TextElement, Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class AccessKeyInvokedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a72c6b01-2e3c-57b5-9ec4-948f6c6d930a"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextElement*, ABI::Windows::UI::Xaml::Documents::ITextElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Documents.TextElement, Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class KeyboardAcceleratorInvokedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f763f3ae-b1eb-5592-a091-d508f32b0b2c"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*,ABI::Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*, ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs*, ABI::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Input.KeyboardAccelerator, Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Input::KeyboardAccelerator*,ABI::Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*,ABI::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator*,ABI::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

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



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2831903f-655e-5464-828c-56a8b4c65f1e"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5871821a-2491-5cec-a457-21996ca4efaf"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a5c9a137-f716-5d8d-92c4-02f171936fa1"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class CharacterReceivedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("24330117-55d4-5789-8aa2-6cab1d0662a0"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs*, ABI::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ContextRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("41d66b93-d17b-59b2-b916-8e813fecb9bd"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::ContextRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::ContextRequestedEventArgs*, ABI::Windows::UI::Xaml::Input::IContextRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.ContextRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::ContextRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IContextRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IContextRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class GettingFocusEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("34f34b77-ec52-5eb6-affc-220cb52ca093"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::GettingFocusEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::GettingFocusEventArgs*, ABI::Windows::UI::Xaml::Input::IGettingFocusEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.GettingFocusEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::GettingFocusEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IGettingFocusEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IGettingFocusEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class LosingFocusEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a0f49f5f-c366-569a-895a-3a82d8801fe4"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::LosingFocusEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::LosingFocusEventArgs*, ABI::Windows::UI::Xaml::Input::ILosingFocusEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.LosingFocusEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::LosingFocusEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::ILosingFocusEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::ILosingFocusEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class NoFocusCandidateFoundEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d5de4415-b53c-5312-9e1b-ac2a19f04e71"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs*, ABI::Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ProcessKeyboardAcceleratorEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c134d249-476a-5146-b5d4-6c98f4e81461"))
ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs*, ABI::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.UIElement, Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,ABI::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::IUIElement*,ABI::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000




#ifndef DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE
#define DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c7e65ce2-fad5-5e3b-9c58-186ca8c1dd57"))
ITypedEventHandler<IInspectable*,IInspectable*> : ITypedEventHandler_impl<IInspectable*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,IInspectable*> __FITypedEventHandler_2_IInspectable_IInspectable_t;
#define __FITypedEventHandler_2_IInspectable_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_IInspectable ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,IInspectable*>
//#define __FITypedEventHandler_2_IInspectable_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE */





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



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class PointerPoint;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerPoint;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint ABI::Windows::UI::Input::IPointerPoint

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CPointerPoint_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("721fe01c-5ad4-5262-b078-3ab345105db8"))
IIterator<ABI::Windows::UI::Input::PointerPoint*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::PointerPoint*, ABI::Windows::UI::Input::IPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.PointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::PointerPoint*> __FIIterator_1_Windows__CUI__CInput__CPointerPoint_t;
#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CPointerPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::IPointerPoint*>
//#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::IPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CPointerPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CPointerPoint_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6f2cba6-7076-5b59-9631-f6ac32b57695"))
IIterable<ABI::Windows::UI::Input::PointerPoint*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::PointerPoint*, ABI::Windows::UI::Input::IPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.PointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::PointerPoint*> __FIIterable_1_Windows__CUI__CInput__CPointerPoint_t;
#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CPointerPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::IPointerPoint*>
//#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::IPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CPointerPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CPointerPoint_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f0f57411-7786-5174-8752-4c5e834b6da2"))
IVectorView<ABI::Windows::UI::Input::PointerPoint*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::PointerPoint*, ABI::Windows::UI::Input::IPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.PointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::PointerPoint*> __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_t;
#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CPointerPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::IPointerPoint*>
//#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::IPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CPointerPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CInput__CPointerPoint_USE
#define DEF___FIVector_1_Windows__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dfa655cf-fde7-5048-b4bf-c909231b7edb"))
IVector<ABI::Windows::UI::Input::PointerPoint*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::PointerPoint*, ABI::Windows::UI::Input::IPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Input.PointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Input::PointerPoint*> __FIVector_1_Windows__CUI__CInput__CPointerPoint_t;
#define __FIVector_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CInput__CPointerPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Input::IPointerPoint*>
//#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Input::IPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CInput__CPointerPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                
                typedef enum PointerDeviceType : int PointerDeviceType;
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace System {
            
            typedef enum VirtualKey : int VirtualKey;
            
        } /* Windows */
    } /* System */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            
            typedef enum VirtualKeyModifiers : unsigned int VirtualKeyModifiers;
            
        } /* Windows */
    } /* System */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef struct CorePhysicalKeyStatus CorePhysicalKeyStatus;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum HoldingState : int HoldingState;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef struct ManipulationDelta ManipulationDelta;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef struct ManipulationVelocities ManipulationVelocities;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class DependencyObject;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IDependencyObject;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIDependencyObject ABI::Windows::UI::Xaml::IDependencyObject

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class DependencyProperty;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IDependencyProperty;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty ABI::Windows::UI::Xaml::IDependencyProperty

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__










namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FocusState : int FocusState;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum FocusInputDeviceKind : int FocusInputDeviceKind;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum FocusNavigationDirection : int FocusNavigationDirection;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum InputScopeNameValue : int InputScopeNameValue;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum KeyTipPlacementMode : int KeyTipPlacementMode;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum KeyboardNavigationMode : int KeyboardNavigationMode;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum ManipulationModes : unsigned int ManipulationModes;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum XYFocusKeyboardNavigationMode : int XYFocusKeyboardNavigationMode;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum XYFocusNavigationStrategy : int XYFocusNavigationStrategy;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum XYFocusNavigationStrategyOverride : int XYFocusNavigationStrategyOverride;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */






























































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class AccessKeyManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class DoubleTappedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class FindNextElementOptions;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class FocusManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class HoldingRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class InertiaExpansionBehavior;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class InertiaRotationBehavior;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class InertiaTranslationBehavior;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class InputScope;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class KeyRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ManipulationCompletedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ManipulationDeltaRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ManipulationInertiaStartingRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ManipulationPivot;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ManipulationStartedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class ManipulationStartingRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class PointerRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class RightTappedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class TappedRoutedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */












/*
 *
 * Struct Windows.UI.Xaml.Input.FocusInputDeviceKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum FocusInputDeviceKind : int
                    {
                        FocusInputDeviceKind_None = 0,
                        FocusInputDeviceKind_Mouse = 1,
                        FocusInputDeviceKind_Touch = 2,
                        FocusInputDeviceKind_Pen = 3,
                        FocusInputDeviceKind_Keyboard = 4,
                        FocusInputDeviceKind_GameController = 5,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.FocusNavigationDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum FocusNavigationDirection : int
                    {
                        FocusNavigationDirection_Next = 0,
                        FocusNavigationDirection_Previous = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        FocusNavigationDirection_Up = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        FocusNavigationDirection_Down = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        FocusNavigationDirection_Left = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        FocusNavigationDirection_Right = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        FocusNavigationDirection_None = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.InputScopeNameValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum InputScopeNameValue : int
                    {
                        InputScopeNameValue_Default = 0,
                        InputScopeNameValue_Url = 1,
                        InputScopeNameValue_EmailSmtpAddress = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_PersonalFullName = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_CurrencyAmountAndSymbol = 20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_CurrencyAmount = 21,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_DateMonthNumber = 23,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_DateDayNumber = 24,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_DateYear = 25,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_Digits = 28,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_Number = 29,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_Password = 31,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_TelephoneNumber = 32,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_TelephoneCountryCode = 33,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_TelephoneAreaCode = 34,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_TelephoneLocalNumber = 35,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_TimeHour = 37,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_TimeMinutesOrSeconds = 38,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_NumberFullWidth = 39,
                        InputScopeNameValue_AlphanumericHalfWidth = 40,
                        InputScopeNameValue_AlphanumericFullWidth = 41,
                        InputScopeNameValue_Hiragana = 44,
                        InputScopeNameValue_KatakanaHalfWidth = 45,
                        InputScopeNameValue_KatakanaFullWidth = 46,
                        InputScopeNameValue_Hanja = 47,
                        InputScopeNameValue_HangulHalfWidth = 48,
                        InputScopeNameValue_HangulFullWidth = 49,
                        InputScopeNameValue_Search = 50,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_Formula = 51,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_SearchIncremental = 52,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_ChineseHalfWidth = 53,
                        InputScopeNameValue_ChineseFullWidth = 54,
                        InputScopeNameValue_NativeScript = 55,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_Text = 57,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_Chat = 58,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_NameOrPhoneNumber = 59,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_EmailNameOrAddress = 60,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_Maps = 62,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_NumericPassword = 63,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_NumericPin = 64,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_AlphanumericPin = 65,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        InputScopeNameValue_FormulaNumber = 67,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        InputScopeNameValue_ChatWithoutEmoji = 68,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.KeyTipPlacementMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum KeyTipPlacementMode : int
                    {
                        KeyTipPlacementMode_Auto = 0,
                        KeyTipPlacementMode_Bottom = 1,
                        KeyTipPlacementMode_Top = 2,
                        KeyTipPlacementMode_Left = 3,
                        KeyTipPlacementMode_Right = 4,
                        KeyTipPlacementMode_Center = 5,
                        KeyTipPlacementMode_Hidden = 6,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.KeyboardNavigationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum KeyboardNavigationMode : int
                    {
                        KeyboardNavigationMode_Local = 0,
                        KeyboardNavigationMode_Cycle = 1,
                        KeyboardNavigationMode_Once = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.ManipulationModes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, flags, contract] */
                    enum ManipulationModes : unsigned int
                    {
                        ManipulationModes_None = 0,
                        ManipulationModes_TranslateX = 0x1,
                        ManipulationModes_TranslateY = 0x2,
                        ManipulationModes_TranslateRailsX = 0x4,
                        ManipulationModes_TranslateRailsY = 0x8,
                        ManipulationModes_Rotate = 0x10,
                        ManipulationModes_Scale = 0x20,
                        ManipulationModes_TranslateInertia = 0x40,
                        ManipulationModes_RotateInertia = 0x80,
                        ManipulationModes_ScaleInertia = 0x100,
                        ManipulationModes_All = 0xffff,
                        ManipulationModes_System = 0x10000,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(ManipulationModes)
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.XYFocusKeyboardNavigationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum XYFocusKeyboardNavigationMode : int
                    {
                        XYFocusKeyboardNavigationMode_Auto = 0,
                        XYFocusKeyboardNavigationMode_Enabled = 1,
                        XYFocusKeyboardNavigationMode_Disabled = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.XYFocusNavigationStrategy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum XYFocusNavigationStrategy : int
                    {
                        XYFocusNavigationStrategy_Auto = 0,
                        XYFocusNavigationStrategy_Projection = 1,
                        XYFocusNavigationStrategy_NavigationDirectionDistance = 2,
                        XYFocusNavigationStrategy_RectilinearDistance = 3,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.XYFocusNavigationStrategyOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [v1_enum, contract] */
                    enum XYFocusNavigationStrategyOverride : int
                    {
                        XYFocusNavigationStrategyOverride_None = 0,
                        XYFocusNavigationStrategyOverride_Auto = 1,
                        XYFocusNavigationStrategyOverride_Projection = 2,
                        XYFocusNavigationStrategyOverride_NavigationDirectionDistance = 3,
                        XYFocusNavigationStrategyOverride_RectilinearDistance = 4,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Delegate Windows.UI.Xaml.Input.DoubleTappedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("3124D025-04A7-4D45-825E-8204A624DBF4"), contract] */
                    MIDL_INTERFACE("3124D025-04A7-4D45-825E-8204A624DBF4")
                    IDoubleTappedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDoubleTappedEventHandler=_uuidof(IDoubleTappedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.HoldingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("ECAE8CCD-8E5E-4FBE-9846-30A6370AFCDF"), contract] */
                    MIDL_INTERFACE("ECAE8CCD-8E5E-4FBE-9846-30A6370AFCDF")
                    IHoldingEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHoldingEventHandler=_uuidof(IHoldingEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.KeyEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("7C63D2E5-7A0E-4E12-B96A-7715AA6FF1C8"), contract] */
                    MIDL_INTERFACE("7C63D2E5-7A0E-4E12-B96A-7715AA6FF1C8")
                    IKeyEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IKeyRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyEventHandler=_uuidof(IKeyEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationCompletedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("38EF4B0F-14F8-42DF-9A1E-A4BCC4AF77F4"), contract] */
                    MIDL_INTERFACE("38EF4B0F-14F8-42DF-9A1E-A4BCC4AF77F4")
                    IManipulationCompletedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationCompletedEventHandler=_uuidof(IManipulationCompletedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationDeltaEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("AA1160CB-DFB9-4C56-ABDC-711B63C8EB94"), contract] */
                    MIDL_INTERFACE("AA1160CB-DFB9-4C56-ABDC-711B63C8EB94")
                    IManipulationDeltaEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationDeltaEventHandler=_uuidof(IManipulationDeltaEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationInertiaStartingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("D39D6322-7C9C-481B-827B-C8B2D9BB6FC7"), contract] */
                    MIDL_INTERFACE("D39D6322-7C9C-481B-827B-C8B2D9BB6FC7")
                    IManipulationInertiaStartingEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationInertiaStartingEventHandler=_uuidof(IManipulationInertiaStartingEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationStartedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("F88345F8-E0A3-4BE2-B90C-DC20E6D8BEB0"), contract] */
                    MIDL_INTERFACE("F88345F8-E0A3-4BE2-B90C-DC20E6D8BEB0")
                    IManipulationStartedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationStartedEventHandler=_uuidof(IManipulationStartedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationStartingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("10D0B04E-BFE4-42CB-823C-3FECD8770EF8"), contract] */
                    MIDL_INTERFACE("10D0B04E-BFE4-42CB-823C-3FECD8770EF8")
                    IManipulationStartingEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationStartingEventHandler=_uuidof(IManipulationStartingEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.PointerEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("E4385929-C004-4BCF-8970-359486E39F88"), contract] */
                    MIDL_INTERFACE("E4385929-C004-4BCF-8970-359486E39F88")
                    IPointerEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IPointerRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPointerEventHandler=_uuidof(IPointerEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.RightTappedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("2532A062-F447-4950-9C46-F1E34A2C2238"), contract] */
                    MIDL_INTERFACE("2532A062-F447-4950-9C46-F1E34A2C2238")
                    IRightTappedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRightTappedEventHandler=_uuidof(IRightTappedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.TappedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("68D940CC-9FF0-49CE-B141-3F07EC477B97"), contract] */
                    MIDL_INTERFACE("68D940CC-9FF0-49CE-B141-3F07EC477B97")
                    ITappedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::ITappedRoutedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITappedEventHandler=_uuidof(ITappedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyDisplayDismissedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("8A610DC6-D72D-4CA8-9F66-556F35B513DA"), exclusiveto, contract] */
                    MIDL_INTERFACE("8A610DC6-D72D-4CA8-9F66-556F35B513DA")
                    IAccessKeyDisplayDismissedEventArgs : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAccessKeyDisplayDismissedEventArgs=_uuidof(IAccessKeyDisplayDismissedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("0C079E55-13FE-4D03-A61D-E12F06567286"), exclusiveto, contract] */
                    MIDL_INTERFACE("0C079E55-13FE-4D03-A61D-E12F06567286")
                    IAccessKeyDisplayRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PressedKeys(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAccessKeyDisplayRequestedEventArgs=_uuidof(IAccessKeyDisplayRequestedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("CFE9CD97-C718-4091-B7DD-ADF1C072B1E1"), exclusiveto, contract] */
                    MIDL_INTERFACE("CFE9CD97-C718-4091-B7DD-ADF1C072B1E1")
                    IAccessKeyInvokedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAccessKeyInvokedEventArgs=_uuidof(IAccessKeyInvokedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManager[] = L"Windows.UI.Xaml.Input.IAccessKeyManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("ECC973B0-2EE9-4B1C-98D7-6E0E816D334B"), exclusiveto, contract] */
                    MIDL_INTERFACE("ECC973B0-2EE9-4B1C-98D7-6E0E816D334B")
                    IAccessKeyManager : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAccessKeyManager=_uuidof(IAccessKeyManager);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManagerStatics[] = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("4CA0EFE6-D9C8-4EBC-B4C7-30D1838A81F1"), exclusiveto, contract] */
                    MIDL_INTERFACE("4CA0EFE6-D9C8-4EBC-B4C7-30D1838A81F1")
                    IAccessKeyManagerStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDisplayModeEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IsDisplayModeEnabledChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_IInspectable * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IsDisplayModeEnabledChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ExitDisplayMode(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAccessKeyManagerStatics=_uuidof(IAccessKeyManagerStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2[] = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("962BB594-2AB3-47C5-954B-7092F355F797"), exclusiveto, contract] */
                    MIDL_INTERFACE("962BB594-2AB3-47C5-954B-7092F355F797")
                    IAccessKeyManagerStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreKeyTipsEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreKeyTipsEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAccessKeyManagerStatics2=_uuidof(IAccessKeyManagerStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("7849FD82-48E4-444D-9419-93AB8892C107"), exclusiveto, contract] */
                    MIDL_INTERFACE("7849FD82-48E4-444D-9419-93AB8892C107")
                    ICharacterReceivedRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Character(
                            /* [retval, out] */__RPC__out WCHAR * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStatus(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CorePhysicalKeyStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICharacterReceivedRoutedEventArgs=_uuidof(ICharacterReceivedRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.ICommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ICommand[] = L"Windows.UI.Xaml.Input.ICommand";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("E5AF3542-CA67-4081-995B-709DD13792DF"), contract] */
                    MIDL_INTERFACE("E5AF3542-CA67-4081-995B-709DD13792DF")
                    ICommand : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CanExecuteChanged(
                            /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CanExecuteChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CanExecute(
                            /* [in] */__RPC__in_opt IInspectable * parameter,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Execute(
                            /* [in] */__RPC__in_opt IInspectable * parameter
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICommand=_uuidof(ICommand);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CICommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IContextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ContextRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IContextRequestedEventArgs[] = L"Windows.UI.Xaml.Input.IContextRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("42618E0A-1CB6-46FB-8374-0AEC68AA5E51"), exclusiveto, contract] */
                    MIDL_INTERFACE("42618E0A-1CB6-46FB-8374-0AEC68AA5E51")
                    IContextRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPosition(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * relativeTo,
                            /* [out] */__RPC__out ABI::Windows::Foundation::Point * point,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContextRequestedEventArgs=_uuidof(IContextRequestedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("AF404424-26DF-44F4-8714-9359249B62D3"), exclusiveto, contract] */
                    MIDL_INTERFACE("AF404424-26DF-44F4-8714-9359249B62D3")
                    IDoubleTappedRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPosition(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * relativeTo,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDoubleTappedRoutedEventArgs=_uuidof(IDoubleTappedRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFindNextElementOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FindNextElementOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFindNextElementOptions[] = L"Windows.UI.Xaml.Input.IFindNextElementOptions";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("D88AE22B-46C2-41FC-897E-B5961977B89D"), exclusiveto, contract] */
                    MIDL_INTERFACE("D88AE22B-46C2-41FC-897E-B5961977B89D")
                    IFindNextElementOptions : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SearchRoot(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SearchRoot(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExclusionRect(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExclusionRect(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HintRect(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HintRect(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusNavigationStrategyOverride(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusNavigationStrategyOverride(
                            /* [in] */ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFindNextElementOptions=_uuidof(IFindNextElementOptions);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManager[] = L"Windows.UI.Xaml.Input.IFocusManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("C843F50B-3B83-4DA1-9D6F-557C1169F341"), exclusiveto, contract] */
                    MIDL_INTERFACE("C843F50B-3B83-4DA1-9D6F-557C1169F341")
                    IFocusManager : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFocusManager=_uuidof(IFocusManager);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("1ECCD326-8182-4482-826A-0918E9ED9AF7"), exclusiveto, contract] */
                    MIDL_INTERFACE("1ECCD326-8182-4482-826A-0918E9ED9AF7")
                    IFocusManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetFocusedElement(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFocusManagerStatics=_uuidof(IFocusManagerStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics2[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("A920D761-DD87-4F31-BEDA-EF417FE7C04A"), exclusiveto, contract] */
                    MIDL_INTERFACE("A920D761-DD87-4F31-BEDA-EF417FE7C04A")
                    IFocusManagerStatics2 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryMoveFocus(
                            /* [in] */ABI::Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFocusManagerStatics2=_uuidof(IFocusManagerStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics3[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("60805EBF-B149-417D-83F1-BAEB560E2A47"), exclusiveto, contract] */
                    MIDL_INTERFACE("60805EBF-B149-417D-83F1-BAEB560E2A47")
                    IFocusManagerStatics3 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindNextFocusableElement(
                            /* [in] */ABI::Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindNextFocusableElementWithHint(
                            /* [in] */ABI::Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection,
                            /* [in] */ABI::Windows::Foundation::Rect hintRect,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFocusManagerStatics3=_uuidof(IFocusManagerStatics3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics4[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("29276E9C-1C6C-414A-BA1C-96EFD5962BCD"), exclusiveto, contract] */
                    MIDL_INTERFACE("29276E9C-1C6C-414A-BA1C-96EFD5962BCD")
                    IFocusManagerStatics4 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryMoveFocusWithOptions(
                            /* [in] */ABI::Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IFindNextElementOptions * focusNavigationOptions,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindNextElement(
                            /* [in] */ABI::Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FindFirstFocusableElement(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * searchScope,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FindLastFocusableElement(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * searchScope,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * returnValue
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindNextElementWithOptions(
                            /* [in] */ABI::Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IFindNextElementOptions * focusNavigationOptions,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFocusManagerStatics4=_uuidof(IFocusManagerStatics4);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IGettingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.GettingFocusEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IGettingFocusEventArgs[] = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("FA05B9CE-C67C-4BE8-8FD4-C44D67877E0D"), exclusiveto, contract] */
                    MIDL_INTERFACE("FA05B9CE-C67C-4BE8-8FD4-C44D67877E0D")
                    IGettingFocusEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldFocusedElement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewFocusedElement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NewFocusedElement(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusState(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FocusState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::FocusNavigationDirection * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputDevice(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::FocusInputDeviceKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cancel(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Cancel(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGettingFocusEventArgs=_uuidof(IGettingFocusEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IHoldingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.HoldingRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IHoldingRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("C246FF23-D80D-44DE-8DB9-0D815E269AC0"), exclusiveto, contract] */
                    MIDL_INTERFACE("C246FF23-D80D-44DE-8DB9-0D815E269AC0")
                    IHoldingRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HoldingState(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::HoldingState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPosition(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * relativeTo,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHoldingRoutedEventArgs=_uuidof(IHoldingRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInertiaExpansionBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InertiaExpansionBehavior
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaExpansionBehavior[] = L"Windows.UI.Xaml.Input.IInertiaExpansionBehavior";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("751D87E5-8D42-44C5-965E-3CD30CC9D6F7"), exclusiveto, contract] */
                    MIDL_INTERFACE("751D87E5-8D42-44C5-965E-3CD30CC9D6F7")
                    IInertiaExpansionBehavior : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredDeceleration(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredDeceleration(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredExpansion(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredExpansion(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInertiaExpansionBehavior=_uuidof(IInertiaExpansionBehavior);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInertiaRotationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InertiaRotationBehavior
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaRotationBehavior[] = L"Windows.UI.Xaml.Input.IInertiaRotationBehavior";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("424CFB2E-BBFD-4625-AE78-20C65BF1EFAF"), exclusiveto, contract] */
                    MIDL_INTERFACE("424CFB2E-BBFD-4625-AE78-20C65BF1EFAF")
                    IInertiaRotationBehavior : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredDeceleration(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredDeceleration(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredRotation(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredRotation(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInertiaRotationBehavior=_uuidof(IInertiaRotationBehavior);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInertiaTranslationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InertiaTranslationBehavior
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaTranslationBehavior[] = L"Windows.UI.Xaml.Input.IInertiaTranslationBehavior";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("45D3A512-3B32-4882-A4C2-ECFA2D4B6DF0"), exclusiveto, contract] */
                    MIDL_INTERFACE("45D3A512-3B32-4882-A4C2-ECFA2D4B6DF0")
                    IInertiaTranslationBehavior : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredDeceleration(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredDeceleration(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredDisplacement(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredDisplacement(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInertiaTranslationBehavior=_uuidof(IInertiaTranslationBehavior);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInputScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InputScope
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScope[] = L"Windows.UI.Xaml.Input.IInputScope";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("5C0F85F3-F9D8-4220-B666-045D074D9BFA"), exclusiveto, contract] */
                    MIDL_INTERFACE("5C0F85F3-F9D8-4220-B666-045D074D9BFA")
                    IInputScope : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Names(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInputScope=_uuidof(IInputScope);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInputScopeName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InputScopeName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScopeName[] = L"Windows.UI.Xaml.Input.IInputScopeName";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("FD3E6997-08FB-4CBA-A021-792D7589FD5A"), exclusiveto, contract] */
                    MIDL_INTERFACE("FD3E6997-08FB-4CBA-A021-792D7589FD5A")
                    IInputScopeName : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NameValue(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::InputScopeNameValue * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NameValue(
                            /* [in] */ABI::Windows::UI::Xaml::Input::InputScopeNameValue value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInputScopeName=_uuidof(IInputScopeName);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInputScopeNameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InputScopeName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScopeNameFactory[] = L"Windows.UI.Xaml.Input.IInputScopeNameFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("4A40BB52-4BD7-4E54-8617-1CDA8A1EDA7F"), exclusiveto, contract] */
                    MIDL_INTERFACE("4A40BB52-4BD7-4E54-8617-1CDA8A1EDA7F")
                    IInputScopeNameFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Windows::UI::Xaml::Input::InputScopeNameValue nameValue,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IInputScopeName * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInputScopeNameFactory=_uuidof(IInputScopeNameFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("D4CD3DFE-4079-42E9-A39A-3095D3F049C6"), exclusiveto, contract] */
                    MIDL_INTERFACE("D4CD3DFE-4079-42E9-A39A-3095D3F049C6")
                    IKeyRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Key(
                            /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKey * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStatus(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CorePhysicalKeyStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyRoutedEventArgs=_uuidof(IKeyRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyRoutedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("1B02D57A-9634-4F14-91B2-133E42FDB3CD"), exclusiveto, contract] */
                    MIDL_INTERFACE("1B02D57A-9634-4F14-91B2-133E42FDB3CD")
                    IKeyRoutedEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginalKey(
                            /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKey * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyRoutedEventArgs2=_uuidof(IKeyRoutedEventArgs2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyRoutedEventArgs3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("2779F5B4-CA41-411B-A8EF-F4FC78E78057"), exclusiveto, contract] */
                    MIDL_INTERFACE("2779F5B4-CA41-411B-A8EF-F4FC78E78057")
                    IKeyRoutedEventArgs3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyRoutedEventArgs3=_uuidof(IKeyRoutedEventArgs3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAccelerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAccelerator[] = L"Windows.UI.Xaml.Input.IKeyboardAccelerator";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("92E6181E-19AE-465A-9B3C-A71EE9EA7420"), exclusiveto, contract] */
                    MIDL_INTERFACE("92E6181E-19AE-465A-9B3C-A71EE9EA7420")
                    IKeyboardAccelerator : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Key(
                            /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKey * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Key(
                            /* [in] */ABI::Windows::System::VirtualKey value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Modifiers(
                            /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKeyModifiers * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Modifiers(
                            /* [in] */ABI::Windows::System::VirtualKeyModifiers value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScopeOwner(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScopeOwner(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Invoked(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Invoked(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyboardAccelerator=_uuidof(IKeyboardAccelerator);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAcceleratorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorFactory[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("44D88A99-4BFD-4A47-A893-515F388623F6"), exclusiveto, contract] */
                    MIDL_INTERFACE("44D88A99-4BFD-4A47-A893-515F388623F6")
                    IKeyboardAcceleratorFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IKeyboardAccelerator * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyboardAcceleratorFactory=_uuidof(IKeyboardAcceleratorFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("C00B03F2-04E7-4415-B17D-D76B9490DE2B"), exclusiveto, contract] */
                    MIDL_INTERFACE("C00B03F2-04E7-4415-B17D-D76B9490DE2B")
                    IKeyboardAcceleratorInvokedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Element(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyboardAcceleratorInvokedEventArgs=_uuidof(IKeyboardAcceleratorInvokedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("3BD43D51-9BB3-456D-BF15-804ADFB86261"), exclusiveto, contract] */
                    MIDL_INTERFACE("3BD43D51-9BB3-456D-BF15-804ADFB86261")
                    IKeyboardAcceleratorStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ModifiersProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabledProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScopeOwnerProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyboardAcceleratorStatics=_uuidof(IKeyboardAcceleratorStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.ILosingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.LosingFocusEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ILosingFocusEventArgs[] = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("F9F683C7-D789-472B-AA93-6D4105E6DABE"), exclusiveto, contract] */
                    MIDL_INTERFACE("F9F683C7-D789-472B-AA93-6D4105E6DABE")
                    ILosingFocusEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldFocusedElement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewFocusedElement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NewFocusedElement(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusState(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FocusState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::FocusNavigationDirection * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputDevice(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::FocusInputDeviceKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cancel(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Cancel(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILosingFocusEventArgs=_uuidof(ILosingFocusEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("B5AD9B23-2F41-498E-8319-015EE8A75346"), exclusiveto, contract] */
                    MIDL_INTERFACE("B5AD9B23-2F41-498E-8319-015EE8A75346")
                    IManipulationCompletedRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Container(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInertial(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationVelocities * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationCompletedRoutedEventArgs=_uuidof(IManipulationCompletedRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("400D5794-4C6F-491D-82D6-3517109399C6"), exclusiveto, contract] */
                    MIDL_INTERFACE("400D5794-4C6F-491D-82D6-3517109399C6")
                    IManipulationDeltaRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Container(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInertial(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delta(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationVelocities * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationDeltaRoutedEventArgs=_uuidof(IManipulationDeltaRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("246A91A9-CA43-4C0B-ACEF-81E8B8147520"), exclusiveto, contract] */
                    MIDL_INTERFACE("246A91A9-CA43-4C0B-ACEF-81E8B8147520")
                    IManipulationInertiaStartingRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Container(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpansionBehavior(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IInertiaExpansionBehavior * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExpansionBehavior(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IInertiaExpansionBehavior * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RotationBehavior(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IInertiaRotationBehavior * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RotationBehavior(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IInertiaRotationBehavior * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TranslationBehavior(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IInertiaTranslationBehavior * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TranslationBehavior(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IInertiaTranslationBehavior * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delta(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationVelocities * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationInertiaStartingRoutedEventArgs=_uuidof(IManipulationInertiaStartingRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationPivot
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationPivot
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationPivot[] = L"Windows.UI.Xaml.Input.IManipulationPivot";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("2E3838A5-E6C2-4998-82AC-18748B141666"), exclusiveto, contract] */
                    MIDL_INTERFACE("2E3838A5-E6C2-4998-82AC-18748B141666")
                    IManipulationPivot : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Center(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Center(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Radius(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Radius(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationPivot=_uuidof(IManipulationPivot);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationPivotFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationPivot
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationPivotFactory[] = L"Windows.UI.Xaml.Input.IManipulationPivotFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("6D05B039-3702-4396-AD9B-A825EFA63A3B"), exclusiveto, contract] */
                    MIDL_INTERFACE("6D05B039-3702-4396-AD9B-A825EFA63A3B")
                    IManipulationPivotFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithCenterAndRadius(
                            /* [in] */ABI::Windows::Foundation::Point center,
                            /* [in] */DOUBLE radius,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IManipulationPivot * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationPivotFactory=_uuidof(IManipulationPivotFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("5DB1AA05-9F80-48B6-AE6C-4F119DE8FF13"), exclusiveto, contract] */
                    MIDL_INTERFACE("5DB1AA05-9F80-48B6-AE6C-4F119DE8FF13")
                    IManipulationStartedRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Container(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationStartedRoutedEventArgs=_uuidof(IManipulationStartedRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory[] = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("84C1DAA7-7272-4463-B6C3-A40B9BA151FC"), exclusiveto, contract] */
                    MIDL_INTERFACE("84C1DAA7-7272-4463-B6C3-A40B9BA151FC")
                    IManipulationStartedRoutedEventArgsFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationStartedRoutedEventArgsFactory=_uuidof(IManipulationStartedRoutedEventArgsFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("18D636B7-53A4-4C15-A498-F3A9CA212A42"), exclusiveto, contract] */
                    MIDL_INTERFACE("18D636B7-53A4-4C15-A498-F3A9CA212A42")
                    IManipulationStartingRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::ManipulationModes * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                            /* [in] */ABI::Windows::UI::Xaml::Input::ManipulationModes value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Container(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Container(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pivot(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IManipulationPivot * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Pivot(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Input::IManipulationPivot * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IManipulationStartingRoutedEventArgs=_uuidof(IManipulationStartingRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs[] = L"Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("EC3601A7-1007-48F9-B6B3-ED0BEA53937D"), exclusiveto, contract] */
                    MIDL_INTERFACE("EC3601A7-1007-48F9-B6B3-ED0BEA53937D")
                    INoFocusCandidateFoundEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::FocusNavigationDirection * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputDevice(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::FocusInputDeviceKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INoFocusCandidateFoundEventArgs=_uuidof(INoFocusCandidateFoundEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IPointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.Pointer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointer[] = L"Windows.UI.Xaml.Input.IPointer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("5EE8F39F-747D-4171-90E6-CD37A9DFFB11"), exclusiveto, contract] */
                    MIDL_INTERFACE("5EE8F39F-747D-4171-90E6-CD37A9DFFB11")
                    IPointer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerId(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInContact(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInRange(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPointer=_uuidof(IPointer);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointer;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IPointerRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.PointerRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointerRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("DA628F0A-9752-49E2-BDE2-49ECCAB9194D"), exclusiveto, contract] */
                    MIDL_INTERFACE("DA628F0A-9752-49E2-BDE2-49ECCAB9194D")
                    IPointerRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pointer(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Input::IPointer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyModifiers(
                            /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKeyModifiers * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCurrentPoint(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * relativeTo,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerPoint * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIntermediatePoints(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * relativeTo,
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPointerRoutedEventArgs=_uuidof(IPointerRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IPointerRoutedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.PointerRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointerRoutedEventArgs2[] = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("0821F294-1DE6-4711-BA7C-8D4B8B0911D0"), exclusiveto, contract] */
                    MIDL_INTERFACE("0821F294-1DE6-4711-BA7C-8D4B8B0911D0")
                    IPointerRoutedEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGenerated(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPointerRoutedEventArgs2=_uuidof(IPointerRoutedEventArgs2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs[] = L"Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("FB79C216-972B-440C-9B83-2B4198DCF09D"), exclusiveto, contract] */
                    MIDL_INTERFACE("FB79C216-972B-440C-9B83-2B4198DCF09D")
                    IProcessKeyboardAcceleratorEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Key(
                            /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKey * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Modifiers(
                            /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKeyModifiers * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IProcessKeyboardAcceleratorEventArgs=_uuidof(IProcessKeyboardAcceleratorEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.RightTappedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("6834869D-7BD5-4033-B237-172F79ABE393"), exclusiveto, contract] */
                    MIDL_INTERFACE("6834869D-7BD5-4033-B237-172F79ABE393")
                    IRightTappedRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPosition(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * relativeTo,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRightTappedRoutedEventArgs=_uuidof(IRightTappedRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.ITappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.TappedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ITappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ITappedRoutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    /* [object, uuid("A099E6BE-E624-459A-BB1D-E05C73E2CC66"), exclusiveto, contract] */
                    MIDL_INTERFACE("A099E6BE-E624-459A-BB1D-E05C73E2CC66")
                    ITappedRoutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPosition(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * relativeTo,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITappedRoutedEventArgs=_uuidof(ITappedRoutedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Input.IAccessKeyManagerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IAccessKeyManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyManager[] = L"Windows.UI.Xaml.Input.AccessKeyManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_CharacterReceivedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_CharacterReceivedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_CharacterReceivedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.ContextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IContextRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ContextRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ContextRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ContextRequestedEventArgs[] = L"Windows.UI.Xaml.Input.ContextRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_DoubleTappedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_DoubleTappedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_DoubleTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.FindNextElementOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IFindNextElementOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_FindNextElementOptions_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_FindNextElementOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FindNextElementOptions[] = L"Windows.UI.Xaml.Input.FindNextElementOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.FocusManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IFocusManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_FocusManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_FocusManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FocusManager[] = L"Windows.UI.Xaml.Input.FocusManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.GettingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IGettingFocusEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_GettingFocusEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_GettingFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_GettingFocusEventArgs[] = L"Windows.UI.Xaml.Input.GettingFocusEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.HoldingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IHoldingRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_HoldingRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_HoldingRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_HoldingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.HoldingRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InertiaExpansionBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInertiaExpansionBehavior ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaExpansionBehavior_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaExpansionBehavior_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaExpansionBehavior[] = L"Windows.UI.Xaml.Input.InertiaExpansionBehavior";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InertiaRotationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInertiaRotationBehavior ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaRotationBehavior_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaRotationBehavior_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaRotationBehavior[] = L"Windows.UI.Xaml.Input.InertiaRotationBehavior";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InertiaTranslationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInertiaTranslationBehavior ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaTranslationBehavior_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaTranslationBehavior_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaTranslationBehavior[] = L"Windows.UI.Xaml.Input.InertiaTranslationBehavior";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InputScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInputScope ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InputScope_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InputScope_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InputScope[] = L"Windows.UI.Xaml.Input.InputScope";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InputScopeName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Input.IInputScopeNameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInputScopeName ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InputScopeName_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InputScopeName_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InputScopeName[] = L"Windows.UI.Xaml.Input.InputScopeName";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IKeyRoutedEventArgs ** Default Interface **
 *    Windows.UI.Xaml.Input.IKeyRoutedEventArgs2
 *    Windows.UI.Xaml.Input.IKeyRoutedEventArgs3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_KeyRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_KeyRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyRoutedEventArgs[] = L"Windows.UI.Xaml.Input.KeyRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IKeyboardAccelerator ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAccelerator_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAccelerator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyboardAccelerator[] = L"Windows.UI.Xaml.Input.KeyboardAccelerator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAcceleratorInvokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAcceleratorInvokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyboardAcceleratorInvokedEventArgs[] = L"Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.LosingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.ILosingFocusEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_LosingFocusEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_LosingFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_LosingFocusEventArgs[] = L"Windows.UI.Xaml.Input.LosingFocusEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationCompletedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationCompletedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationCompletedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationDeltaRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationDeltaRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationDeltaRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationInertiaStartingRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationInertiaStartingRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationInertiaStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationPivot
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Input.IManipulationPivotFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationPivot ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationPivot_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationPivot_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationPivot[] = L"Windows.UI.Xaml.Input.ManipulationPivot";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationStartedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartingRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartingRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_NoFocusCandidateFoundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_NoFocusCandidateFoundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_NoFocusCandidateFoundEventArgs[] = L"Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.Pointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IPointer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_Pointer_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_Pointer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_Pointer[] = L"Windows.UI.Xaml.Input.Pointer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.PointerRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IPointerRoutedEventArgs ** Default Interface **
 *    Windows.UI.Xaml.Input.IPointerRoutedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_PointerRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_PointerRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_PointerRoutedEventArgs[] = L"Windows.UI.Xaml.Input.PointerRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ProcessKeyboardAcceleratorEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ProcessKeyboardAcceleratorEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ProcessKeyboardAcceleratorEventArgs[] = L"Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.RightTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_RightTappedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_RightTappedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_RightTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.RightTappedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.TappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.ITappedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_TappedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_TappedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_TappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.TappedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CICommand __x_ABI_CWindows_CUI_CXaml_CInput_CICommand;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CPointer;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CPointer;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName;

typedef struct __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;

typedef struct __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if !defined(____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_IInspectable __FITypedEventHandler_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_IInspectable;

typedef struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_IInspectableVtbl;

interface __FITypedEventHandler_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__



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


#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CPointerPoint __FIIterator_1_Windows__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPointerPoint;

typedef struct __FIIterator_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPointerPointVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPointerPoint_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CPointerPoint __FIIterable_1_Windows__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPointerPoint;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPointerPoint **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPointerPointVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPointerPoint_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CPointerPoint __FIVectorView_1_Windows__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CPointerPoint;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CPointerPointVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CPointerPoint_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CInput__CPointerPoint __FIVector_1_Windows__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CInput__CPointerPoint;

typedef struct __FIVector_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CPointerPoint **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CInput__CPointerPointVtbl;

interface __FIVector_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CInput__CPointerPoint_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType;





typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;





typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;


typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;




typedef struct __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus;





typedef enum __x_ABI_CWindows_CUI_CInput_CHoldingState __x_ABI_CWindows_CUI_CInput_CHoldingState;


typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationDelta __x_ABI_CWindows_CUI_CInput_CManipulationDelta;


typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationVelocities __x_ABI_CWindows_CUI_CInput_CManipulationVelocities;





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__











typedef enum __x_ABI_CWindows_CUI_CXaml_CFocusState __x_ABI_CWindows_CUI_CXaml_CFocusState;






typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride;





































































































/*
 *
 * Struct Windows.UI.Xaml.Input.FocusInputDeviceKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind
{
    FocusInputDeviceKind_None = 0,
    FocusInputDeviceKind_Mouse = 1,
    FocusInputDeviceKind_Touch = 2,
    FocusInputDeviceKind_Pen = 3,
    FocusInputDeviceKind_Keyboard = 4,
    FocusInputDeviceKind_GameController = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.FocusNavigationDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection
{
    FocusNavigationDirection_Next = 0,
    FocusNavigationDirection_Previous = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    FocusNavigationDirection_Up = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    FocusNavigationDirection_Down = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    FocusNavigationDirection_Left = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    FocusNavigationDirection_Right = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    FocusNavigationDirection_None = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.InputScopeNameValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue
{
    InputScopeNameValue_Default = 0,
    InputScopeNameValue_Url = 1,
    InputScopeNameValue_EmailSmtpAddress = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_PersonalFullName = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_CurrencyAmountAndSymbol = 20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_CurrencyAmount = 21,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_DateMonthNumber = 23,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_DateDayNumber = 24,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_DateYear = 25,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_Digits = 28,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_Number = 29,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_Password = 31,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_TelephoneNumber = 32,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_TelephoneCountryCode = 33,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_TelephoneAreaCode = 34,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_TelephoneLocalNumber = 35,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_TimeHour = 37,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_TimeMinutesOrSeconds = 38,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_NumberFullWidth = 39,
    InputScopeNameValue_AlphanumericHalfWidth = 40,
    InputScopeNameValue_AlphanumericFullWidth = 41,
    InputScopeNameValue_Hiragana = 44,
    InputScopeNameValue_KatakanaHalfWidth = 45,
    InputScopeNameValue_KatakanaFullWidth = 46,
    InputScopeNameValue_Hanja = 47,
    InputScopeNameValue_HangulHalfWidth = 48,
    InputScopeNameValue_HangulFullWidth = 49,
    InputScopeNameValue_Search = 50,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_Formula = 51,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_SearchIncremental = 52,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_ChineseHalfWidth = 53,
    InputScopeNameValue_ChineseFullWidth = 54,
    InputScopeNameValue_NativeScript = 55,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_Text = 57,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_Chat = 58,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_NameOrPhoneNumber = 59,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_EmailNameOrAddress = 60,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_Maps = 62,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_NumericPassword = 63,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_NumericPin = 64,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_AlphanumericPin = 65,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    InputScopeNameValue_FormulaNumber = 67,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    InputScopeNameValue_ChatWithoutEmoji = 68,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.KeyTipPlacementMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode
{
    KeyTipPlacementMode_Auto = 0,
    KeyTipPlacementMode_Bottom = 1,
    KeyTipPlacementMode_Top = 2,
    KeyTipPlacementMode_Left = 3,
    KeyTipPlacementMode_Right = 4,
    KeyTipPlacementMode_Center = 5,
    KeyTipPlacementMode_Hidden = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.KeyboardNavigationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode
{
    KeyboardNavigationMode_Local = 0,
    KeyboardNavigationMode_Cycle = 1,
    KeyboardNavigationMode_Once = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.ManipulationModes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes
{
    ManipulationModes_None = 0,
    ManipulationModes_TranslateX = 0x1,
    ManipulationModes_TranslateY = 0x2,
    ManipulationModes_TranslateRailsX = 0x4,
    ManipulationModes_TranslateRailsY = 0x8,
    ManipulationModes_Rotate = 0x10,
    ManipulationModes_Scale = 0x20,
    ManipulationModes_TranslateInertia = 0x40,
    ManipulationModes_RotateInertia = 0x80,
    ManipulationModes_ScaleInertia = 0x100,
    ManipulationModes_All = 0xffff,
    ManipulationModes_System = 0x10000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Input.XYFocusKeyboardNavigationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode
{
    XYFocusKeyboardNavigationMode_Auto = 0,
    XYFocusKeyboardNavigationMode_Enabled = 1,
    XYFocusKeyboardNavigationMode_Disabled = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.XYFocusNavigationStrategy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy
{
    XYFocusNavigationStrategy_Auto = 0,
    XYFocusNavigationStrategy_Projection = 1,
    XYFocusNavigationStrategy_NavigationDirectionDistance = 2,
    XYFocusNavigationStrategy_RectilinearDistance = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Xaml.Input.XYFocusNavigationStrategyOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride
{
    XYFocusNavigationStrategyOverride_None = 0,
    XYFocusNavigationStrategyOverride_Auto = 1,
    XYFocusNavigationStrategyOverride_Projection = 2,
    XYFocusNavigationStrategyOverride_NavigationDirectionDistance = 3,
    XYFocusNavigationStrategyOverride_RectilinearDistance = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Delegate Windows.UI.Xaml.Input.DoubleTappedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("3124D025-04A7-4D45-825E-8204A624DBF4"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.HoldingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_INTERFACE_DEFINED__
/* [object, uuid("ECAE8CCD-8E5E-4FBE-9846-30A6370AFCDF"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.KeyEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_INTERFACE_DEFINED__
/* [object, uuid("7C63D2E5-7A0E-4E12-B96A-7715AA6FF1C8"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationCompletedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("38EF4B0F-14F8-42DF-9A1E-A4BCC4AF77F4"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationDeltaEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_INTERFACE_DEFINED__
/* [object, uuid("AA1160CB-DFB9-4C56-ABDC-711B63C8EB94"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationInertiaStartingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_INTERFACE_DEFINED__
/* [object, uuid("D39D6322-7C9C-481B-827B-C8B2D9BB6FC7"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationStartedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("F88345F8-E0A3-4BE2-B90C-DC20E6D8BEB0"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.ManipulationStartingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_INTERFACE_DEFINED__
/* [object, uuid("10D0B04E-BFE4-42CB-823C-3FECD8770EF8"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.PointerEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_INTERFACE_DEFINED__
/* [object, uuid("E4385929-C004-4BCF-8970-359486E39F88"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.RightTappedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("2532A062-F447-4950-9C46-F1E34A2C2238"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Input.TappedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("68D940CC-9FF0-49CE-B141-3F07EC477B97"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyDisplayDismissedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs";
/* [object, uuid("8A610DC6-D72D-4CA8-9F66-556F35B513DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs";
/* [object, uuid("0C079E55-13FE-4D03-A61D-E12F06567286"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PressedKeys )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_get_PressedKeys(This,value) \
    ( (This)->lpVtbl->get_PressedKeys(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs";
/* [object, uuid("CFE9CD97-C718-4091-B7DD-ADF1C072B1E1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManager[] = L"Windows.UI.Xaml.Input.IAccessKeyManager";
/* [object, uuid("ECC973B0-2EE9-4B1C-98D7-6E0E816D334B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManagerStatics[] = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics";
/* [object, uuid("4CA0EFE6-D9C8-4EBC-B4C7-30D1838A81F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDisplayModeEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IsDisplayModeEnabledChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_IInspectable * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IsDisplayModeEnabledChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ExitDisplayMode )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_get_IsDisplayModeEnabled(This,value) \
    ( (This)->lpVtbl->get_IsDisplayModeEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_add_IsDisplayModeEnabledChanged(This,value,token) \
    ( (This)->lpVtbl->add_IsDisplayModeEnabledChanged(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_remove_IsDisplayModeEnabledChanged(This,token) \
    ( (This)->lpVtbl->remove_IsDisplayModeEnabledChanged(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_ExitDisplayMode(This) \
    ( (This)->lpVtbl->ExitDisplayMode(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IAccessKeyManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.AccessKeyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2[] = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics2";
/* [object, uuid("962BB594-2AB3-47C5-954B-7092F355F797"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreKeyTipsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreKeyTipsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_get_AreKeyTipsEnabled(This,value) \
    ( (This)->lpVtbl->get_AreKeyTipsEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_put_AreKeyTipsEnabled(This,value) \
    ( (This)->lpVtbl->put_AreKeyTipsEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs";
/* [object, uuid("7849FD82-48E4-444D-9419-93AB8892C107"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Character )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out WCHAR * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_get_Character(This,value) \
    ( (This)->lpVtbl->get_Character(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_get_KeyStatus(This,value) \
    ( (This)->lpVtbl->get_KeyStatus(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.ICommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ICommand[] = L"Windows.UI.Xaml.Input.ICommand";
/* [object, uuid("E5AF3542-CA67-4081-995B-709DD13792DF"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CanExecuteChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CanExecuteChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CanExecute )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
        /* [in] */__RPC__in_opt IInspectable * parameter,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *Execute )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
        /* [in] */__RPC__in_opt IInspectable * parameter
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CICommandVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CICommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_add_CanExecuteChanged(This,value,token) \
    ( (This)->lpVtbl->add_CanExecuteChanged(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_remove_CanExecuteChanged(This,token) \
    ( (This)->lpVtbl->remove_CanExecuteChanged(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_CanExecute(This,parameter,returnValue) \
    ( (This)->lpVtbl->CanExecute(This,parameter,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CICommand_Execute(This,parameter) \
    ( (This)->lpVtbl->Execute(This,parameter) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CICommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CICommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IContextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ContextRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IContextRequestedEventArgs[] = L"Windows.UI.Xaml.Input.IContextRequestedEventArgs";
/* [object, uuid("42618E0A-1CB6-46FB-8374-0AEC68AA5E51"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
        /* [out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * point,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_TryGetPosition(This,relativeTo,point,returnValue) \
    ( (This)->lpVtbl->TryGetPosition(This,relativeTo,point,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs";
/* [object, uuid("AF404424-26DF-44F4-8714-9359249B62D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_GetPosition(This,relativeTo,returnValue) \
    ( (This)->lpVtbl->GetPosition(This,relativeTo,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFindNextElementOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FindNextElementOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFindNextElementOptions[] = L"Windows.UI.Xaml.Input.IFindNextElementOptions";
/* [object, uuid("D88AE22B-46C2-41FC-897E-B5961977B89D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SearchRoot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SearchRoot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExclusionRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExclusionRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HintRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HintRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusNavigationStrategyOverride )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusNavigationStrategyOverride )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptionsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_get_SearchRoot(This,value) \
    ( (This)->lpVtbl->get_SearchRoot(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_put_SearchRoot(This,value) \
    ( (This)->lpVtbl->put_SearchRoot(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_get_ExclusionRect(This,value) \
    ( (This)->lpVtbl->get_ExclusionRect(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_put_ExclusionRect(This,value) \
    ( (This)->lpVtbl->put_ExclusionRect(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_get_HintRect(This,value) \
    ( (This)->lpVtbl->get_HintRect(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_put_HintRect(This,value) \
    ( (This)->lpVtbl->put_HintRect(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_get_XYFocusNavigationStrategyOverride(This,value) \
    ( (This)->lpVtbl->get_XYFocusNavigationStrategyOverride(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_put_XYFocusNavigationStrategyOverride(This,value) \
    ( (This)->lpVtbl->put_XYFocusNavigationStrategyOverride(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManager[] = L"Windows.UI.Xaml.Input.IFocusManager";
/* [object, uuid("C843F50B-3B83-4DA1-9D6F-557C1169F341"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics";
/* [object, uuid("1ECCD326-8182-4482-826A-0918E9ED9AF7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_GetFocusedElement(This,returnValue) \
    ( (This)->lpVtbl->GetFocusedElement(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics2[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics2";
/* [object, uuid("A920D761-DD87-4F31-BEDA-EF417FE7C04A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *TryMoveFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_TryMoveFocus(This,focusNavigationDirection,returnValue) \
    ( (This)->lpVtbl->TryMoveFocus(This,focusNavigationDirection,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics3[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics3";
/* [object, uuid("60805EBF-B149-417D-83F1-BAEB560E2A47"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FindNextFocusableElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindNextFocusableElementWithHint )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect hintRect,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FindNextFocusableElement(This,focusNavigationDirection,result) \
    ( (This)->lpVtbl->FindNextFocusableElement(This,focusNavigationDirection,result) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_FindNextFocusableElementWithHint(This,focusNavigationDirection,hintRect,result) \
    ( (This)->lpVtbl->FindNextFocusableElementWithHint(This,focusNavigationDirection,hintRect,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IFocusManagerStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.FocusManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics4[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics4";
/* [object, uuid("29276E9C-1C6C-414A-BA1C-96EFD5962BCD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *TryMoveFocusWithOptions )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * focusNavigationOptions,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindNextElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *FindFirstFocusableElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * searchScope,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *FindLastFocusableElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * searchScope,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindNextElementWithOptions )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * focusNavigationOptions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_TryMoveFocusWithOptions(This,focusNavigationDirection,focusNavigationOptions,returnValue) \
    ( (This)->lpVtbl->TryMoveFocusWithOptions(This,focusNavigationDirection,focusNavigationOptions,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FindNextElement(This,focusNavigationDirection,returnValue) \
    ( (This)->lpVtbl->FindNextElement(This,focusNavigationDirection,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FindFirstFocusableElement(This,searchScope,returnValue) \
    ( (This)->lpVtbl->FindFirstFocusableElement(This,searchScope,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FindLastFocusableElement(This,searchScope,returnValue) \
    ( (This)->lpVtbl->FindLastFocusableElement(This,searchScope,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_FindNextElementWithOptions(This,focusNavigationDirection,focusNavigationOptions,returnValue) \
    ( (This)->lpVtbl->FindNextElementWithOptions(This,focusNavigationDirection,focusNavigationOptions,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IGettingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.GettingFocusEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IGettingFocusEventArgs[] = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs";
/* [object, uuid("FA05B9CE-C67C-4BE8-8FD4-C44D67877E0D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputDevice )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_get_OldFocusedElement(This,value) \
    ( (This)->lpVtbl->get_OldFocusedElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_get_NewFocusedElement(This,value) \
    ( (This)->lpVtbl->get_NewFocusedElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_put_NewFocusedElement(This,value) \
    ( (This)->lpVtbl->put_NewFocusedElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_get_FocusState(This,value) \
    ( (This)->lpVtbl->get_FocusState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_get_InputDevice(This,value) \
    ( (This)->lpVtbl->get_InputDevice(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_get_Cancel(This,value) \
    ( (This)->lpVtbl->get_Cancel(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_put_Cancel(This,value) \
    ( (This)->lpVtbl->put_Cancel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IHoldingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.HoldingRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IHoldingRoutedEventArgs";
/* [object, uuid("C246FF23-D80D-44DE-8DB9-0D815E269AC0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HoldingState )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CHoldingState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_get_HoldingState(This,value) \
    ( (This)->lpVtbl->get_HoldingState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_GetPosition(This,relativeTo,returnValue) \
    ( (This)->lpVtbl->GetPosition(This,relativeTo,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInertiaExpansionBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InertiaExpansionBehavior
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaExpansionBehavior[] = L"Windows.UI.Xaml.Input.IInertiaExpansionBehavior";
/* [object, uuid("751D87E5-8D42-44C5-965E-3CD30CC9D6F7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehaviorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredExpansion )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredExpansion )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehaviorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehaviorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_get_DesiredDeceleration(This,value) \
    ( (This)->lpVtbl->get_DesiredDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_put_DesiredDeceleration(This,value) \
    ( (This)->lpVtbl->put_DesiredDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_get_DesiredExpansion(This,value) \
    ( (This)->lpVtbl->get_DesiredExpansion(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_put_DesiredExpansion(This,value) \
    ( (This)->lpVtbl->put_DesiredExpansion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInertiaRotationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InertiaRotationBehavior
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaRotationBehavior[] = L"Windows.UI.Xaml.Input.IInertiaRotationBehavior";
/* [object, uuid("424CFB2E-BBFD-4625-AE78-20C65BF1EFAF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehaviorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredRotation )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredRotation )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehaviorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehaviorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_get_DesiredDeceleration(This,value) \
    ( (This)->lpVtbl->get_DesiredDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_put_DesiredDeceleration(This,value) \
    ( (This)->lpVtbl->put_DesiredDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_get_DesiredRotation(This,value) \
    ( (This)->lpVtbl->get_DesiredRotation(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_put_DesiredRotation(This,value) \
    ( (This)->lpVtbl->put_DesiredRotation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInertiaTranslationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InertiaTranslationBehavior
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaTranslationBehavior[] = L"Windows.UI.Xaml.Input.IInertiaTranslationBehavior";
/* [object, uuid("45D3A512-3B32-4882-A4C2-ECFA2D4B6DF0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehaviorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredDisplacement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredDisplacement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehaviorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehaviorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_get_DesiredDeceleration(This,value) \
    ( (This)->lpVtbl->get_DesiredDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_put_DesiredDeceleration(This,value) \
    ( (This)->lpVtbl->put_DesiredDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_get_DesiredDisplacement(This,value) \
    ( (This)->lpVtbl->get_DesiredDisplacement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_put_DesiredDisplacement(This,value) \
    ( (This)->lpVtbl->put_DesiredDisplacement(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInputScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InputScope
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScope[] = L"Windows.UI.Xaml.Input.IInputScope";
/* [object, uuid("5C0F85F3-F9D8-4220-B666-045D074D9BFA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Names )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_get_Names(This,value) \
    ( (This)->lpVtbl->get_Names(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInputScopeName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InputScopeName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScopeName[] = L"Windows.UI.Xaml.Input.IInputScopeName";
/* [object, uuid("FD3E6997-08FB-4CBA-A021-792D7589FD5A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NameValue )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NameValue )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_get_NameValue(This,value) \
    ( (This)->lpVtbl->get_NameValue(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_put_NameValue(This,value) \
    ( (This)->lpVtbl->put_NameValue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IInputScopeNameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.InputScopeName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScopeNameFactory[] = L"Windows.UI.Xaml.Input.IInputScopeNameFactory";
/* [object, uuid("4A40BB52-4BD7-4E54-8617-1CDA8A1EDA7F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue nameValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_CreateInstance(This,nameValue,instance) \
    ( (This)->lpVtbl->CreateInstance(This,nameValue,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs";
/* [object, uuid("D4CD3DFE-4079-42E9-A39A-3095D3F049C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_get_Key(This,value) \
    ( (This)->lpVtbl->get_Key(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_get_KeyStatus(This,value) \
    ( (This)->lpVtbl->get_KeyStatus(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyRoutedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs2";
/* [object, uuid("1B02D57A-9634-4F14-91B2-133E42FDB3CD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginalKey )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_get_OriginalKey(This,value) \
    ( (This)->lpVtbl->get_OriginalKey(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyRoutedEventArgs3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs3";
/* [object, uuid("2779F5B4-CA41-411B-A8EF-F4FC78E78057"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAccelerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAccelerator[] = L"Windows.UI.Xaml.Input.IKeyboardAccelerator";
/* [object, uuid("92E6181E-19AE-465A-9B3C-A71EE9EA7420"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Modifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Invoked )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Invoked )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_get_Key(This,value) \
    ( (This)->lpVtbl->get_Key(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_put_Key(This,value) \
    ( (This)->lpVtbl->put_Key(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_get_Modifiers(This,value) \
    ( (This)->lpVtbl->get_Modifiers(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_put_Modifiers(This,value) \
    ( (This)->lpVtbl->put_Modifiers(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_put_IsEnabled(This,value) \
    ( (This)->lpVtbl->put_IsEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_get_ScopeOwner(This,value) \
    ( (This)->lpVtbl->get_ScopeOwner(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_put_ScopeOwner(This,value) \
    ( (This)->lpVtbl->put_ScopeOwner(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_add_Invoked(This,value,token) \
    ( (This)->lpVtbl->add_Invoked(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_remove_Invoked(This,token) \
    ( (This)->lpVtbl->remove_Invoked(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAcceleratorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorFactory[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorFactory";
/* [object, uuid("44D88A99-4BFD-4A47-A893-515F388623F6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs";
/* [object, uuid("C00B03F2-04E7-4415-B17D-D76B9490DE2B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Element )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_get_Element(This,value) \
    ( (This)->lpVtbl->get_Element(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics";
/* [object, uuid("3BD43D51-9BB3-456D-BF15-804ADFB86261"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ModifiersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScopeOwnerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_get_KeyProperty(This,value) \
    ( (This)->lpVtbl->get_KeyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_get_ModifiersProperty(This,value) \
    ( (This)->lpVtbl->get_ModifiersProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_get_IsEnabledProperty(This,value) \
    ( (This)->lpVtbl->get_IsEnabledProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_get_ScopeOwnerProperty(This,value) \
    ( (This)->lpVtbl->get_ScopeOwnerProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.ILosingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.LosingFocusEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ILosingFocusEventArgs[] = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs";
/* [object, uuid("F9F683C7-D789-472B-AA93-6D4105E6DABE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputDevice )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_get_OldFocusedElement(This,value) \
    ( (This)->lpVtbl->get_OldFocusedElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_get_NewFocusedElement(This,value) \
    ( (This)->lpVtbl->get_NewFocusedElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_put_NewFocusedElement(This,value) \
    ( (This)->lpVtbl->put_NewFocusedElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_get_FocusState(This,value) \
    ( (This)->lpVtbl->get_FocusState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_get_InputDevice(This,value) \
    ( (This)->lpVtbl->get_InputDevice(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_get_Cancel(This,value) \
    ( (This)->lpVtbl->get_Cancel(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_put_Cancel(This,value) \
    ( (This)->lpVtbl->put_Cancel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs";
/* [object, uuid("B5AD9B23-2F41-498E-8319-015EE8A75346"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInertial )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_get_Container(This,value) \
    ( (This)->lpVtbl->get_Container(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_get_IsInertial(This,value) \
    ( (This)->lpVtbl->get_IsInertial(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs";
/* [object, uuid("400D5794-4C6F-491D-82D6-3517109399C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInertial )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_Container(This,value) \
    ( (This)->lpVtbl->get_Container(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_IsInertial(This,value) \
    ( (This)->lpVtbl->get_IsInertial(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_Delta(This,value) \
    ( (This)->lpVtbl->get_Delta(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs";
/* [object, uuid("246A91A9-CA43-4C0B-ACEF-81E8B8147520"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpansionBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExpansionBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RotationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RotationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TranslationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TranslationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_Container(This,value) \
    ( (This)->lpVtbl->get_Container(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_ExpansionBehavior(This,value) \
    ( (This)->lpVtbl->get_ExpansionBehavior(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_put_ExpansionBehavior(This,value) \
    ( (This)->lpVtbl->put_ExpansionBehavior(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_RotationBehavior(This,value) \
    ( (This)->lpVtbl->get_RotationBehavior(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_put_RotationBehavior(This,value) \
    ( (This)->lpVtbl->put_RotationBehavior(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_TranslationBehavior(This,value) \
    ( (This)->lpVtbl->get_TranslationBehavior(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_put_TranslationBehavior(This,value) \
    ( (This)->lpVtbl->put_TranslationBehavior(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_Delta(This,value) \
    ( (This)->lpVtbl->get_Delta(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationPivot
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationPivot
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationPivot[] = L"Windows.UI.Xaml.Input.IManipulationPivot";
/* [object, uuid("2E3838A5-E6C2-4998-82AC-18748B141666"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Center )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Radius )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Radius )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_get_Center(This,value) \
    ( (This)->lpVtbl->get_Center(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_put_Center(This,value) \
    ( (This)->lpVtbl->put_Center(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_get_Radius(This,value) \
    ( (This)->lpVtbl->get_Radius(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_put_Radius(This,value) \
    ( (This)->lpVtbl->put_Radius(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationPivotFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationPivot
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationPivotFactory[] = L"Windows.UI.Xaml.Input.IManipulationPivotFactory";
/* [object, uuid("6D05B039-3702-4396-AD9B-A825EFA63A3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithCenterAndRadius )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint center,
        /* [in] */DOUBLE radius,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_CreateInstanceWithCenterAndRadius(This,center,radius,instance) \
    ( (This)->lpVtbl->CreateInstanceWithCenterAndRadius(This,center,radius,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs";
/* [object, uuid("5DB1AA05-9F80-48B6-AE6C-4F119DE8FF13"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_get_Container(This,value) \
    ( (This)->lpVtbl->get_Container(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory[] = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgsFactory";
/* [object, uuid("84C1DAA7-7272-4463-B6C3-A40B9BA151FC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs";
/* [object, uuid("18D636B7-53A4-4C15-A498-F3A9CA212A42"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pivot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Pivot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_get_Container(This,value) \
    ( (This)->lpVtbl->get_Container(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_put_Container(This,value) \
    ( (This)->lpVtbl->put_Container(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_get_Pivot(This,value) \
    ( (This)->lpVtbl->get_Pivot(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_put_Pivot(This,value) \
    ( (This)->lpVtbl->put_Pivot(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs[] = L"Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs";
/* [object, uuid("EC3601A7-1007-48F9-B6B3-ED0BEA53937D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputDevice )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_get_InputDevice(This,value) \
    ( (This)->lpVtbl->get_InputDevice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Input.IPointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.Pointer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointer[] = L"Windows.UI.Xaml.Input.IPointer";
/* [object, uuid("5EE8F39F-747D-4171-90E6-CD37A9DFFB11"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInContact )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInRange )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_get_PointerId(This,value) \
    ( (This)->lpVtbl->get_PointerId(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_get_IsInContact(This,value) \
    ( (This)->lpVtbl->get_IsInContact(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_get_IsInRange(This,value) \
    ( (This)->lpVtbl->get_IsInRange(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointer;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IPointerRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.PointerRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointerRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs";
/* [object, uuid("DA628F0A-9752-49E2-BDE2-49ECCAB9194D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pointer )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyModifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentPoint )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_get_Pointer(This,value) \
    ( (This)->lpVtbl->get_Pointer(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_get_KeyModifiers(This,value) \
    ( (This)->lpVtbl->get_KeyModifiers(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_GetCurrentPoint(This,relativeTo,returnValue) \
    ( (This)->lpVtbl->GetCurrentPoint(This,relativeTo,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_GetIntermediatePoints(This,relativeTo,returnValue) \
    ( (This)->lpVtbl->GetIntermediatePoints(This,relativeTo,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.IPointerRoutedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.PointerRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointerRoutedEventArgs2[] = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs2";
/* [object, uuid("0821F294-1DE6-4711-BA7C-8D4B8B0911D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGenerated )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_get_IsGenerated(This,value) \
    ( (This)->lpVtbl->get_IsGenerated(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs[] = L"Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs";
/* [object, uuid("FB79C216-972B-440C-9B83-2B4198DCF09D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_get_Key(This,value) \
    ( (This)->lpVtbl->get_Key(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_get_Modifiers(This,value) \
    ( (This)->lpVtbl->get_Modifiers(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.RightTappedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs";
/* [object, uuid("6834869D-7BD5-4033-B237-172F79ABE393"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_GetPosition(This,relativeTo,returnValue) \
    ( (This)->lpVtbl->GetPosition(This,relativeTo,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Input.ITappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Input.TappedRoutedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ITappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ITappedRoutedEventArgs";
/* [object, uuid("A099E6BE-E624-459A-BB1D-E05C73E2CC66"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_GetPosition(This,relativeTo,returnValue) \
    ( (This)->lpVtbl->GetPosition(This,relativeTo,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.AccessKeyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Input.IAccessKeyManagerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IAccessKeyManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IAccessKeyManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_AccessKeyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyManager[] = L"Windows.UI.Xaml.Input.AccessKeyManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_CharacterReceivedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_CharacterReceivedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_CharacterReceivedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.ContextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IContextRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ContextRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ContextRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ContextRequestedEventArgs[] = L"Windows.UI.Xaml.Input.ContextRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_DoubleTappedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_DoubleTappedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_DoubleTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.FindNextElementOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IFindNextElementOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_FindNextElementOptions_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_FindNextElementOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FindNextElementOptions[] = L"Windows.UI.Xaml.Input.FindNextElementOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.FocusManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Input.IFocusManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IFocusManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_FocusManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_FocusManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FocusManager[] = L"Windows.UI.Xaml.Input.FocusManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.GettingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IGettingFocusEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_GettingFocusEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_GettingFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_GettingFocusEventArgs[] = L"Windows.UI.Xaml.Input.GettingFocusEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.HoldingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IHoldingRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_HoldingRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_HoldingRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_HoldingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.HoldingRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InertiaExpansionBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInertiaExpansionBehavior ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaExpansionBehavior_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaExpansionBehavior_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaExpansionBehavior[] = L"Windows.UI.Xaml.Input.InertiaExpansionBehavior";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InertiaRotationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInertiaRotationBehavior ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaRotationBehavior_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaRotationBehavior_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaRotationBehavior[] = L"Windows.UI.Xaml.Input.InertiaRotationBehavior";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InertiaTranslationBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInertiaTranslationBehavior ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaTranslationBehavior_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InertiaTranslationBehavior_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaTranslationBehavior[] = L"Windows.UI.Xaml.Input.InertiaTranslationBehavior";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InputScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInputScope ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InputScope_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InputScope_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InputScope[] = L"Windows.UI.Xaml.Input.InputScope";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.InputScopeName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Input.IInputScopeNameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IInputScopeName ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_InputScopeName_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_InputScopeName_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InputScopeName[] = L"Windows.UI.Xaml.Input.InputScopeName";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.KeyRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IKeyRoutedEventArgs ** Default Interface **
 *    Windows.UI.Xaml.Input.IKeyRoutedEventArgs2
 *    Windows.UI.Xaml.Input.IKeyRoutedEventArgs3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_KeyRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_KeyRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyRoutedEventArgs[] = L"Windows.UI.Xaml.Input.KeyRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.KeyboardAccelerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IKeyboardAccelerator ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAccelerator_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAccelerator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyboardAccelerator[] = L"Windows.UI.Xaml.Input.KeyboardAccelerator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAcceleratorInvokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_KeyboardAcceleratorInvokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyboardAcceleratorInvokedEventArgs[] = L"Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.LosingFocusEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.ILosingFocusEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_LosingFocusEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_LosingFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_LosingFocusEventArgs[] = L"Windows.UI.Xaml.Input.LosingFocusEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationCompletedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationCompletedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationCompletedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationDeltaRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationDeltaRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationDeltaRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationInertiaStartingRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationInertiaStartingRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationInertiaStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationPivot
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Input.IManipulationPivotFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationPivot ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationPivot_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationPivot_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationPivot[] = L"Windows.UI.Xaml.Input.ManipulationPivot";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationStartedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartingRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ManipulationStartingRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_NoFocusCandidateFoundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_NoFocusCandidateFoundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_NoFocusCandidateFoundEventArgs[] = L"Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Input.Pointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IPointer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_Pointer_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_Pointer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_Pointer[] = L"Windows.UI.Xaml.Input.Pointer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.PointerRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IPointerRoutedEventArgs ** Default Interface **
 *    Windows.UI.Xaml.Input.IPointerRoutedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_PointerRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_PointerRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_PointerRoutedEventArgs[] = L"Windows.UI.Xaml.Input.PointerRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_ProcessKeyboardAcceleratorEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_ProcessKeyboardAcceleratorEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ProcessKeyboardAcceleratorEventArgs[] = L"Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Input.RightTappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_RightTappedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_RightTappedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_RightTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.RightTappedRoutedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Input.TappedRoutedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Input.ITappedRoutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Input_TappedRoutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Input_TappedRoutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_TappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.TappedRoutedEventArgs";
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
#endif // __windows2Eui2Examl2Einput_p_h__

#endif // __windows2Eui2Examl2Einput_h__
