/* Header file automatically generated from windows.ui.input.idl */
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
#ifndef __windows2Eui2Einput_h__
#define __windows2Eui2Einput_h__
#ifndef __windows2Eui2Einput_p_h__
#define __windows2Eui2Einput_p_h__


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
#include "Windows.Devices.Haptics.h"
#include "Windows.Devices.Input.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Core.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface ICrossSlidingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs ABI::Windows::UI::Input::ICrossSlidingEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IDraggingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs ABI::Windows::UI::Input::IDraggingEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IEdgeGesture;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture ABI::Windows::UI::Input::IEdgeGesture

#endif // ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IEdgeGestureEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs ABI::Windows::UI::Input::IEdgeGestureEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IEdgeGestureStatics;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics ABI::Windows::UI::Input::IEdgeGestureStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IGestureRecognizer;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer ABI::Windows::UI::Input::IGestureRecognizer

#endif // ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IHoldingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs ABI::Windows::UI::Input::IHoldingEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IKeyboardDeliveryInterceptor;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor

#endif // ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IKeyboardDeliveryInterceptorStatics;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics ABI::Windows::UI::Input::IKeyboardDeliveryInterceptorStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IManipulationCompletedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs ABI::Windows::UI::Input::IManipulationCompletedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IManipulationInertiaStartingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs ABI::Windows::UI::Input::IManipulationInertiaStartingEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IManipulationStartedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs ABI::Windows::UI::Input::IManipulationStartedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IManipulationUpdatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs ABI::Windows::UI::Input::IManipulationUpdatedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IMouseWheelParameters;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters ABI::Windows::UI::Input::IMouseWheelParameters

#endif // ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerPointProperties;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties ABI::Windows::UI::Input::IPointerPointProperties

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerPointProperties2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 ABI::Windows::UI::Input::IPointerPointProperties2

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerPointStatics;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics ABI::Windows::UI::Input::IPointerPointStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerPointTransform;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform ABI::Windows::UI::Input::IPointerPointTransform

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerVisualizationSettings;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings ABI::Windows::UI::Input::IPointerVisualizationSettings

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerVisualizationSettingsStatics;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics ABI::Windows::UI::Input::IPointerVisualizationSettingsStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialController;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialController ABI::Windows::UI::Input::IRadialController

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialController2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialController2 ABI::Windows::UI::Input::IRadialController2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerButtonClickedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs ABI::Windows::UI::Input::IRadialControllerButtonClickedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerButtonClickedEventArgs2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 ABI::Windows::UI::Input::IRadialControllerButtonClickedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerButtonHoldingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs ABI::Windows::UI::Input::IRadialControllerButtonHoldingEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerButtonPressedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs ABI::Windows::UI::Input::IRadialControllerButtonPressedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerButtonReleasedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs ABI::Windows::UI::Input::IRadialControllerButtonReleasedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerConfiguration;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration ABI::Windows::UI::Input::IRadialControllerConfiguration

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerConfiguration2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 ABI::Windows::UI::Input::IRadialControllerConfiguration2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerConfigurationStatics;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics ABI::Windows::UI::Input::IRadialControllerConfigurationStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerConfigurationStatics2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 ABI::Windows::UI::Input::IRadialControllerConfigurationStatics2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerControlAcquiredEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs ABI::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerControlAcquiredEventArgs2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 ABI::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerMenu;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu ABI::Windows::UI::Input::IRadialControllerMenu

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerMenuItem;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem ABI::Windows::UI::Input::IRadialControllerMenuItem

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerMenuItemStatics;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics ABI::Windows::UI::Input::IRadialControllerMenuItemStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerMenuItemStatics2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 ABI::Windows::UI::Input::IRadialControllerMenuItemStatics2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerRotationChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs ABI::Windows::UI::Input::IRadialControllerRotationChangedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerRotationChangedEventArgs2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 ABI::Windows::UI::Input::IRadialControllerRotationChangedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerScreenContact;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact ABI::Windows::UI::Input::IRadialControllerScreenContact

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerScreenContactContinuedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs ABI::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerScreenContactContinuedEventArgs2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 ABI::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerScreenContactEndedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs ABI::Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerScreenContactStartedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs ABI::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerScreenContactStartedEventArgs2;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 ABI::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialControllerStatics;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics ABI::Windows::UI::Input::IRadialControllerStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRightTappedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs ABI::Windows::UI::Input::IRightTappedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface ITappedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs ABI::Windows::UI::Input::ITappedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class PointerPoint;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


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

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerMenuItem;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5a773e24-d968-535e-969a-76ce3602a637"))
IIterator<ABI::Windows::UI::Input::RadialControllerMenuItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerMenuItem*, ABI::Windows::UI::Input::IRadialControllerMenuItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.RadialControllerMenuItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::RadialControllerMenuItem*> __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_t;
#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
//#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1aa752b3-dc11-5bce-b2b9-cd1bf8f235be"))
IIterable<ABI::Windows::UI::Input::RadialControllerMenuItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerMenuItem*, ABI::Windows::UI::Input::IRadialControllerMenuItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.RadialControllerMenuItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::RadialControllerMenuItem*> __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_t;
#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
//#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                enum RadialControllerSystemMenuItemKind : int;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3fbc1858-a43e-54dc-b0e2-8b098bddacf6"))
IIterator<enum ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind> : IIterator_impl<enum ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.RadialControllerSystemMenuItemKind>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind> __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_t;
#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind>
//#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_USE */





#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4516010f-fd98-5e1d-bf3f-aeaf79f1f3da"))
IIterable<enum ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind> : IIterable_impl<enum ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.RadialControllerSystemMenuItemKind>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind> __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_t;
#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind>
//#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_USE */




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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b91a7342-3fcb-512b-aef1-fda4712e5817"))
IVectorView<ABI::Windows::UI::Input::RadialControllerMenuItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerMenuItem*, ABI::Windows::UI::Input::IRadialControllerMenuItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.RadialControllerMenuItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::RadialControllerMenuItem*> __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_t;
#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
//#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#define DEF___FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bfde94e7-70f8-5cc0-98e2-8c0f8ce524ab"))
IVector<ABI::Windows::UI::Input::RadialControllerMenuItem*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerMenuItem*, ABI::Windows::UI::Input::IRadialControllerMenuItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Input.RadialControllerMenuItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Input::RadialControllerMenuItem*> __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_t;
#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
//#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Input::IRadialControllerMenuItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class EdgeGesture;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class EdgeGestureEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b62d7f11-c7b1-5bf0-a347-3366252db4ce"))
ITypedEventHandler<ABI::Windows::UI::Input::EdgeGesture*,ABI::Windows::UI::Input::EdgeGestureEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::EdgeGesture*, ABI::Windows::UI::Input::IEdgeGesture*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::EdgeGestureEventArgs*, ABI::Windows::UI::Input::IEdgeGestureEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.EdgeGesture, Windows.UI.Input.EdgeGestureEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::EdgeGesture*,ABI::Windows::UI::Input::EdgeGestureEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IEdgeGesture*,ABI::Windows::UI::Input::IEdgeGestureEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IEdgeGesture*,ABI::Windows::UI::Input::IEdgeGestureEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class GestureRecognizer;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class CrossSlidingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1fc1eb70-0c26-5cf0-9e50-843a34083613"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::CrossSlidingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::CrossSlidingEventArgs*, ABI::Windows::UI::Input::ICrossSlidingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.CrossSlidingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::CrossSlidingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::ICrossSlidingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::ICrossSlidingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class DraggingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("be7cca42-98dd-5d72-9e91-976113d7985e"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::DraggingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::DraggingEventArgs*, ABI::Windows::UI::Input::IDraggingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.DraggingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::DraggingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IDraggingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IDraggingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class HoldingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0027bdf5-6948-53f7-afbe-d4d8fe500feb"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::HoldingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::HoldingEventArgs*, ABI::Windows::UI::Input::IHoldingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.HoldingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::HoldingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IHoldingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IHoldingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class ManipulationCompletedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c24f5605-3059-52cc-bdf3-7098146d34d7"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::ManipulationCompletedEventArgs*, ABI::Windows::UI::Input::IManipulationCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.ManipulationCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationCompletedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class ManipulationInertiaStartingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("350a72ab-34a5-5193-913d-3d4c5983842c"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationInertiaStartingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::ManipulationInertiaStartingEventArgs*, ABI::Windows::UI::Input::IManipulationInertiaStartingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.ManipulationInertiaStartingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationInertiaStartingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationInertiaStartingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationInertiaStartingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class ManipulationStartedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("110d75c8-ba5e-5462-8b2d-4a1582574b61"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::ManipulationStartedEventArgs*, ABI::Windows::UI::Input::IManipulationStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.ManipulationStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationStartedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class ManipulationUpdatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eb5216f5-020a-5e40-9c4b-48912c690e2d"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::ManipulationUpdatedEventArgs*, ABI::Windows::UI::Input::IManipulationUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.ManipulationUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::ManipulationUpdatedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IManipulationUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RightTappedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8420d242-ba34-5b17-92f3-8f767f1d0de4"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::RightTappedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RightTappedEventArgs*, ABI::Windows::UI::Input::IRightTappedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.RightTappedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::RightTappedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IRightTappedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::IRightTappedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class TappedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("27f3ad57-8994-5712-8b83-a93ba17c03c2"))
ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::TappedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::GestureRecognizer*, ABI::Windows::UI::Input::IGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::TappedEventArgs*, ABI::Windows::UI::Input::ITappedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.GestureRecognizer, Windows.UI.Input.TappedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::GestureRecognizer*,ABI::Windows::UI::Input::TappedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::ITappedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IGestureRecognizer*,ABI::Windows::UI::Input::ITappedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialController;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e0f93b1-c2f2-5351-82aa-6cf5f4c2d068"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerButtonClickedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d09d9fcc-edb8-56c0-856d-70e477a9ddf3"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonClickedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerButtonClickedEventArgs*, ABI::Windows::UI::Input::IRadialControllerButtonClickedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerButtonClickedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonClickedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonClickedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonClickedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerButtonHoldingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4c44f2ff-3a4a-51ba-a01f-9f2002471f59"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonHoldingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerButtonHoldingEventArgs*, ABI::Windows::UI::Input::IRadialControllerButtonHoldingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerButtonHoldingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonHoldingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonHoldingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonHoldingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerButtonPressedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("660bee4a-4fed-5a62-aa5d-8113b477bc69"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonPressedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerButtonPressedEventArgs*, ABI::Windows::UI::Input::IRadialControllerButtonPressedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerButtonPressedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonPressedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonPressedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonPressedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerButtonReleasedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c22ff62c-c642-5d50-9340-fe163122720c"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonReleasedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerButtonReleasedEventArgs*, ABI::Windows::UI::Input::IRadialControllerButtonReleasedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerButtonReleasedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerButtonReleasedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonReleasedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerButtonReleasedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerControlAcquiredEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4ec5f3fd-b217-5452-a2bd-9725ce9f6675"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerControlAcquiredEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerControlAcquiredEventArgs*, ABI::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerControlAcquiredEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerControlAcquiredEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerRotationChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8fe73ac9-8a36-5152-815d-03310ee8bf85"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerRotationChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerRotationChangedEventArgs*, ABI::Windows::UI::Input::IRadialControllerRotationChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerRotationChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerRotationChangedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerRotationChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerRotationChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerScreenContactContinuedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("30579e67-fb4f-5d38-83b4-9cb610090def"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs*, ABI::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerScreenContactStartedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1f2d584e-3ad8-5049-b451-3a44a102fa82"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerScreenContactStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialController*, ABI::Windows::UI::Input::IRadialController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerScreenContactStartedEventArgs*, ABI::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialController, Windows.UI.Input.RadialControllerScreenContactStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialController*,ABI::Windows::UI::Input::RadialControllerScreenContactStartedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialController*,ABI::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5c90d6fb-e4f8-5be2-8544-9de33f82c41a"))
ITypedEventHandler<ABI::Windows::UI::Input::RadialControllerMenuItem*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::RadialControllerMenuItem*, ABI::Windows::UI::Input::IRadialControllerMenuItem*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.RadialControllerMenuItem, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::RadialControllerMenuItem*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialControllerMenuItem*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IRadialControllerMenuItem*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class KeyboardDeliveryInterceptor;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class KeyEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IKeyEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs ABI::Windows::UI::Core::IKeyEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2c1caf11-9d6f-5e0f-a9ea-4c7c734d73d6"))
ITypedEventHandler<ABI::Windows::UI::Input::KeyboardDeliveryInterceptor*,ABI::Windows::UI::Core::KeyEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::KeyboardDeliveryInterceptor*, ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::KeyEventArgs*, ABI::Windows::UI::Core::IKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.KeyboardDeliveryInterceptor, Windows.UI.Core.KeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::KeyboardDeliveryInterceptor*,ABI::Windows::UI::Core::KeyEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor*,ABI::Windows::UI::Core::IKeyEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor*,ABI::Windows::UI::Core::IKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#ifndef DEF___FIReference_1_float_USE
#define DEF___FIReference_1_float_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("719cc2ba-3e76-5def-9f1a-38d85a145ea8"))
IReference<float> : IReference_impl<float> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Single>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<float> __FIReference_1_float_t;
#define __FIReference_1_float ABI::Windows::Foundation::__FIReference_1_float_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_float ABI::Windows::Foundation::IReference<FLOAT>
//#define __FIReference_1_float_t ABI::Windows::Foundation::IReference<FLOAT>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_float_USE */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                class SimpleHapticsController;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                interface ISimpleHapticsController;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController ABI::Windows::Devices::Haptics::ISimpleHapticsController

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                class PointerDevice;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IPointerDevice;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice ABI::Windows::Devices::Input::IPointerDevice

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__


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




namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class RandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

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
        namespace UI {
            namespace Input {
                
                typedef enum CrossSlidingState : int CrossSlidingState;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum DraggingState : int DraggingState;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum EdgeGestureKind : int EdgeGestureKind;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum GestureSettings : unsigned int GestureSettings;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

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
                
                typedef enum PointerUpdateKind : int PointerUpdateKind;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum RadialControllerMenuKnownIcon : int RadialControllerMenuKnownIcon;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum RadialControllerSystemMenuItemKind : int RadialControllerSystemMenuItemKind;
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef struct CrossSlideThresholds CrossSlideThresholds;
                
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
            namespace Input {
                class MouseWheelParameters;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class PointerPointProperties;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class PointerVisualizationSettings;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerConfiguration;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerMenu;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerScreenContact;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialControllerScreenContactEndedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */













/*
 *
 * Struct Windows.UI.Input.CrossSlidingState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, contract] */
                enum CrossSlidingState : int
                {
                    CrossSlidingState_Started = 0,
                    CrossSlidingState_Dragging = 1,
                    CrossSlidingState_Selecting = 2,
                    CrossSlidingState_SelectSpeedBumping = 3,
                    CrossSlidingState_SpeedBumping = 4,
                    CrossSlidingState_Rearranging = 5,
                    CrossSlidingState_Completed = 6,
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.DraggingState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, contract] */
                enum DraggingState : int
                {
                    DraggingState_Started = 0,
                    DraggingState_Continuing = 1,
                    DraggingState_Completed = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.EdgeGestureKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, contract] */
                enum EdgeGestureKind : int
                {
                    EdgeGestureKind_Touch = 0,
                    EdgeGestureKind_Keyboard = 1,
                    EdgeGestureKind_Mouse = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.GestureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, flags, contract] */
                enum GestureSettings : unsigned int
                {
                    GestureSettings_None = 0,
                    GestureSettings_Tap = 0x1,
                    GestureSettings_DoubleTap = 0x2,
                    GestureSettings_Hold = 0x4,
                    GestureSettings_HoldWithMouse = 0x8,
                    GestureSettings_RightTap = 0x10,
                    GestureSettings_Drag = 0x20,
                    GestureSettings_ManipulationTranslateX = 0x40,
                    GestureSettings_ManipulationTranslateY = 0x80,
                    GestureSettings_ManipulationTranslateRailsX = 0x100,
                    GestureSettings_ManipulationTranslateRailsY = 0x200,
                    GestureSettings_ManipulationRotate = 0x400,
                    GestureSettings_ManipulationScale = 0x800,
                    GestureSettings_ManipulationTranslateInertia = 0x1000,
                    GestureSettings_ManipulationRotateInertia = 0x2000,
                    GestureSettings_ManipulationScaleInertia = 0x4000,
                    GestureSettings_CrossSlide = 0x8000,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    GestureSettings_ManipulationMultipleFingerPanning = 0x10000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(GestureSettings)
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.HoldingState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, contract] */
                enum HoldingState : int
                {
                    HoldingState_Started = 0,
                    HoldingState_Completed = 1,
                    HoldingState_Canceled = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.PointerUpdateKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, contract] */
                enum PointerUpdateKind : int
                {
                    PointerUpdateKind_Other = 0,
                    PointerUpdateKind_LeftButtonPressed = 1,
                    PointerUpdateKind_LeftButtonReleased = 2,
                    PointerUpdateKind_RightButtonPressed = 3,
                    PointerUpdateKind_RightButtonReleased = 4,
                    PointerUpdateKind_MiddleButtonPressed = 5,
                    PointerUpdateKind_MiddleButtonReleased = 6,
                    PointerUpdateKind_XButton1Pressed = 7,
                    PointerUpdateKind_XButton1Released = 8,
                    PointerUpdateKind_XButton2Pressed = 9,
                    PointerUpdateKind_XButton2Released = 10,
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.RadialControllerMenuKnownIcon
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, contract] */
                enum RadialControllerMenuKnownIcon : int
                {
                    RadialControllerMenuKnownIcon_Scroll = 0,
                    RadialControllerMenuKnownIcon_Zoom = 1,
                    RadialControllerMenuKnownIcon_UndoRedo = 2,
                    RadialControllerMenuKnownIcon_Volume = 3,
                    RadialControllerMenuKnownIcon_NextPreviousTrack = 4,
                    RadialControllerMenuKnownIcon_Ruler = 5,
                    RadialControllerMenuKnownIcon_InkColor = 6,
                    RadialControllerMenuKnownIcon_InkThickness = 7,
                    RadialControllerMenuKnownIcon_PenType = 8,
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.RadialControllerSystemMenuItemKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [v1_enum, contract] */
                enum RadialControllerSystemMenuItemKind : int
                {
                    RadialControllerSystemMenuItemKind_Scroll = 0,
                    RadialControllerSystemMenuItemKind_Zoom = 1,
                    RadialControllerSystemMenuItemKind_UndoRedo = 2,
                    RadialControllerSystemMenuItemKind_Volume = 3,
                    RadialControllerSystemMenuItemKind_NextPreviousTrack = 4,
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.CrossSlideThresholds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [contract] */
                struct CrossSlideThresholds
                {
                    FLOAT SelectionStart;
                    FLOAT SpeedBumpStart;
                    FLOAT SpeedBumpEnd;
                    FLOAT RearrangeStart;
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.ManipulationDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [contract] */
                struct ManipulationDelta
                {
                    ABI::Windows::Foundation::Point Translation;
                    FLOAT Scale;
                    FLOAT Rotation;
                    FLOAT Expansion;
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.ManipulationVelocities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [contract] */
                struct ManipulationVelocities
                {
                    ABI::Windows::Foundation::Point Linear;
                    FLOAT Angular;
                    FLOAT Expansion;
                };
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.ICrossSlidingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.CrossSlidingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_ICrossSlidingEventArgs[] = L"Windows.UI.Input.ICrossSlidingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("E9374738-6F88-41D9-8720-78E08E398349"), exclusiveto, contract] */
                MIDL_INTERFACE("E9374738-6F88-41D9-8720-78E08E398349")
                ICrossSlidingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlidingState(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::CrossSlidingState * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICrossSlidingEventArgs=_uuidof(ICrossSlidingEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IDraggingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.DraggingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IDraggingEventArgs[] = L"Windows.UI.Input.IDraggingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("1C905384-083C-4BD3-B559-179CDDEB33EC"), exclusiveto, contract] */
                MIDL_INTERFACE("1C905384-083C-4BD3-B559-179CDDEB33EC")
                IDraggingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DraggingState(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::DraggingState * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDraggingEventArgs=_uuidof(IDraggingEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IEdgeGesture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.EdgeGesture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGesture[] = L"Windows.UI.Input.IEdgeGesture";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("580D5292-2AB1-49AA-A7F0-33BD3F8DF9F1"), exclusiveto, contract] */
                MIDL_INTERFACE("580D5292-2AB1-49AA-A7F0-33BD3F8DF9F1")
                IEdgeGesture : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Starting(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Starting(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Completed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Completed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Canceled(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Canceled(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEdgeGesture=_uuidof(IEdgeGesture);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGesture;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IEdgeGestureEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.EdgeGestureEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGestureEventArgs[] = L"Windows.UI.Input.IEdgeGestureEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("44FA4A24-2D09-42E1-8B5E-368208796A4C"), exclusiveto, contract] */
                MIDL_INTERFACE("44FA4A24-2D09-42E1-8B5E-368208796A4C")
                IEdgeGestureEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::EdgeGestureKind * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEdgeGestureEventArgs=_uuidof(IEdgeGestureEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IEdgeGestureStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.EdgeGesture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGestureStatics[] = L"Windows.UI.Input.IEdgeGestureStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("BC6A8519-18EE-4043-9839-4FC584D60A14"), exclusiveto, contract] */
                MIDL_INTERFACE("BC6A8519-18EE-4043-9839-4FC584D60A14")
                IEdgeGestureStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IEdgeGesture * * current
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEdgeGestureStatics=_uuidof(IEdgeGestureStatics);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IGestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.GestureRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IGestureRecognizer[] = L"Windows.UI.Input.IGestureRecognizer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("B47A37BF-3D6B-4F88-83E8-6DCB4012FFB0"), exclusiveto, contract] */
                MIDL_INTERFACE("B47A37BF-3D6B-4F88-83E8-6DCB4012FFB0")
                IGestureRecognizer : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GestureSettings(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::GestureSettings * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GestureSettings(
                        /* [in] */ABI::Windows::UI::Input::GestureSettings value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInertial(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsActive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowGestureFeedback(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowGestureFeedback(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PivotCenter(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PivotCenter(
                        /* [in] */ABI::Windows::Foundation::Point value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PivotRadius(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PivotRadius(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaTranslationDeceleration(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaTranslationDeceleration(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaRotationDeceleration(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaRotationDeceleration(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaExpansionDeceleration(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaExpansionDeceleration(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaTranslationDisplacement(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaTranslationDisplacement(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaRotationAngle(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaRotationAngle(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaExpansion(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaExpansion(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManipulationExact(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ManipulationExact(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlideThresholds(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::CrossSlideThresholds * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CrossSlideThresholds(
                        /* [in] */ABI::Windows::UI::Input::CrossSlideThresholds value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlideHorizontally(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CrossSlideHorizontally(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlideExact(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CrossSlideExact(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoProcessInertia(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoProcessInertia(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseWheelParameters(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IMouseWheelParameters * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanBeDoubleTap(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * value,
                        /* [retval, out] */__RPC__out boolean * canBeDoubleTap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessDownEvent(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessMoveEvents(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessUpEvent(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessMouseWheelEvent(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * value,
                        /* [in] */boolean isShiftKeyDown,
                        /* [in] */boolean isControlKeyDown
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessInertia(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CompleteGesture(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Tapped(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Tapped(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RightTapped(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RightTapped(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Holding(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Holding(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Dragging(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Dragging(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationStarted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationStarted(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationUpdated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationUpdated(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationInertiaStarting(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationInertiaStarting(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationCompleted(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CrossSliding(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CrossSliding(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGestureRecognizer=_uuidof(IGestureRecognizer);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIGestureRecognizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IHoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.HoldingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IHoldingEventArgs[] = L"Windows.UI.Input.IHoldingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("2BF755C5-E799-41B4-BB40-242F40959B71"), exclusiveto, contract] */
                MIDL_INTERFACE("2BF755C5-E799-41B4-BB40-242F40959B71")
                IHoldingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HoldingState(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::HoldingState * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHoldingEventArgs=_uuidof(IHoldingEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IKeyboardDeliveryInterceptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.KeyboardDeliveryInterceptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IKeyboardDeliveryInterceptor[] = L"Windows.UI.Input.IKeyboardDeliveryInterceptor";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("B4BAF068-8F49-446C-8DB5-8C0FFE85CC9E"), exclusiveto, contract] */
                MIDL_INTERFACE("B4BAF068-8F49-446C-8DB5-8C0FFE85CC9E")
                IKeyboardDeliveryInterceptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInterceptionEnabledWhenInForeground(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsInterceptionEnabledWhenInForeground(
                        /* [in] */boolean value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyDown(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyDown(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyUp(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyUp(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKeyboardDeliveryInterceptor=_uuidof(IKeyboardDeliveryInterceptor);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.IKeyboardDeliveryInterceptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.KeyboardDeliveryInterceptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics[] = L"Windows.UI.Input.IKeyboardDeliveryInterceptorStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("F9F63BA2-CEBA-4755-8A7E-14C0FFECD239"), exclusiveto, contract] */
                MIDL_INTERFACE("F9F63BA2-CEBA-4755-8A7E-14C0FFECD239")
                IKeyboardDeliveryInterceptorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor * * keyboardDeliverySettings
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKeyboardDeliveryInterceptorStatics=_uuidof(IKeyboardDeliveryInterceptorStatics);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.IManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationCompletedEventArgs[] = L"Windows.UI.Input.IManipulationCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("B34AB22B-D19B-46FF-9F38-DEC7754BB9E7"), exclusiveto, contract] */
                MIDL_INTERFACE("B34AB22B-D19B-46FF-9F38-DEC7754BB9E7")
                IManipulationCompletedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationVelocities * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IManipulationCompletedEventArgs=_uuidof(IManipulationCompletedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IManipulationInertiaStartingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationInertiaStartingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationInertiaStartingEventArgs[] = L"Windows.UI.Input.IManipulationInertiaStartingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("DD37A898-26BF-467A-9CE5-CCF3FB11371E"), exclusiveto, contract] */
                MIDL_INTERFACE("DD37A898-26BF-467A-9CE5-CCF3FB11371E")
                IManipulationInertiaStartingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
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

                extern MIDL_CONST_ID IID & IID_IManipulationInertiaStartingEventArgs=_uuidof(IManipulationInertiaStartingEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationStartedEventArgs[] = L"Windows.UI.Input.IManipulationStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("DDEC873E-CFCE-4932-8C1D-3C3D011A34C0"), exclusiveto, contract] */
                MIDL_INTERFACE("DDEC873E-CFCE-4932-8C1D-3C3D011A34C0")
                IManipulationStartedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::ManipulationDelta * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IManipulationStartedEventArgs=_uuidof(IManipulationStartedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationUpdatedEventArgs[] = L"Windows.UI.Input.IManipulationUpdatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("CB354CE5-ABB8-4F9F-B3CE-8181AA61AD82"), exclusiveto, contract] */
                MIDL_INTERFACE("CB354CE5-ABB8-4F9F-B3CE-8181AA61AD82")
                IManipulationUpdatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
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

                extern MIDL_CONST_ID IID & IID_IManipulationUpdatedEventArgs=_uuidof(IManipulationUpdatedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IMouseWheelParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.MouseWheelParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IMouseWheelParameters[] = L"Windows.UI.Input.IMouseWheelParameters";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("EAD0CA44-9DED-4037-8149-5E4CC2564468"), exclusiveto, contract] */
                MIDL_INTERFACE("EAD0CA44-9DED-4037-8149-5E4CC2564468")
                IMouseWheelParameters : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CharTranslation(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CharTranslation(
                        /* [in] */ABI::Windows::Foundation::Point value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeltaScale(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DeltaScale(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeltaRotationAngle(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DeltaRotationAngle(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageTranslation(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PageTranslation(
                        /* [in] */ABI::Windows::Foundation::Point value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMouseWheelParameters=_uuidof(IMouseWheelParameters);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPoint[] = L"Windows.UI.Input.IPointerPoint";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("E995317D-7296-42D9-8233-C5BE73B74A4A"), exclusiveto, contract] */
                MIDL_INTERFACE("E995317D-7296-42D9-8233-C5BE73B74A4A")
                IPointerPoint : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDevice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Input::IPointerDevice * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawPosition(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInContact(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerPointProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerPoint=_uuidof(IPointerPoint);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPoint;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPointProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointProperties[] = L"Windows.UI.Input.IPointerPointProperties";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("C79D8A4B-C163-4EE7-803F-67CE79F9972D"), exclusiveto, contract] */
                MIDL_INTERFACE("C79D8A4B-C163-4EE7-803F-67CE79F9972D")
                IPointerPointProperties : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInverted(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEraser(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XTilt(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_YTilt(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Twist(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactRect(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactRectRaw(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchConfidence(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLeftButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRightButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMiddleButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseWheelDelta(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHorizontalMouseWheel(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPrimary(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInRange(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBarrelButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsXButton1Pressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsXButton2Pressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerUpdateKind(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Input::PointerUpdateKind * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE HasUsage(
                        /* [in] */UINT32 usagePage,
                        /* [in] */UINT32 usageId,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetUsageValue(
                        /* [in] */UINT32 usagePage,
                        /* [in] */UINT32 usageId,
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerPointProperties=_uuidof(IPointerPointProperties);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPointProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointProperties2[] = L"Windows.UI.Input.IPointerPointProperties2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("22C3433A-C83B-41C0-A296-5E232D64D6AF"), exclusiveto, contract] */
                MIDL_INTERFACE("22C3433A-C83B-41C0-A296-5E232D64D6AF")
                IPointerPointProperties2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ZDistance(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerPointProperties2=_uuidof(IPointerPointProperties2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointStatics[] = L"Windows.UI.Input.IPointerPointStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("A506638D-2A1A-413E-BC75-9F38381CC069"), exclusiveto, contract] */
                MIDL_INTERFACE("A506638D-2A1A-413E-BC75-9F38381CC069")
                IPointerPointStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetCurrentPoint(
                        /* [in] */UINT32 pointerId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerPoint * * pointerPoint
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetIntermediatePoints(
                        /* [in] */UINT32 pointerId,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * pointerPoints
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetCurrentPointTransformed(
                        /* [in] */UINT32 pointerId,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPointTransform * transform,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerPoint * * pointerPoint
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetIntermediatePointsTransformed(
                        /* [in] */UINT32 pointerId,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPointTransform * transform,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * pointerPoints
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerPointStatics=_uuidof(IPointerPointStatics);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointTransform[] = L"Windows.UI.Input.IPointerPointTransform";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("4D5FE14F-B87C-4028-BC9C-59E9947FB056"), contract] */
                MIDL_INTERFACE("4D5FE14F-B87C-4028-BC9C-59E9947FB056")
                IPointerPointTransform : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Inverse(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerPointTransform * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryTransform(
                        /* [in] */ABI::Windows::Foundation::Point inPoint,
                        /* [out] */__RPC__out ABI::Windows::Foundation::Point * outPoint,
                        /* [retval, out] */__RPC__out boolean * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TransformBounds(
                        /* [in] */ABI::Windows::Foundation::Rect rect,
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * returnValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerPointTransform=_uuidof(IPointerPointTransform);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointTransform;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerVisualizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerVisualizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerVisualizationSettings[] = L"Windows.UI.Input.IPointerVisualizationSettings";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("4D1E6461-84F7-499D-BD91-2A36E2B7AAA2"), exclusiveto, contract] */
                MIDL_INTERFACE("4D1E6461-84F7-499D-BD91-2A36E2B7AAA2")
                IPointerVisualizationSettings : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsContactFeedbackEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsContactFeedbackEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsBarrelButtonFeedbackEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBarrelButtonFeedbackEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerVisualizationSettings=_uuidof(IPointerVisualizationSettings);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerVisualizationSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerVisualizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerVisualizationSettingsStatics[] = L"Windows.UI.Input.IPointerVisualizationSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("68870EDB-165B-4214-B4F3-584ECA8C8A69"), exclusiveto, contract] */
                MIDL_INTERFACE("68870EDB-165B-4214-B4F3-584ECA8C8A69")
                IPointerVisualizationSettingsStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerVisualizationSettings * * visualizationSettings
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerVisualizationSettingsStatics=_uuidof(IPointerVisualizationSettingsStatics);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IRadialController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialController[] = L"Windows.UI.Input.IRadialController";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3055D1C8-DF51-43D4-B23B-0E1037467A09"), exclusiveto, contract] */
                MIDL_INTERFACE("3055D1C8-DF51-43D4-B23B-0E1037467A09")
                IRadialController : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Menu(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerMenu * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RotationResolutionInDegrees(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RotationResolutionInDegrees(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UseAutomaticHapticFeedback(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UseAutomaticHapticFeedback(
                        /* [in] */boolean value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ScreenContactStarted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ScreenContactStarted(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ScreenContactEnded(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ScreenContactEnded(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ScreenContactContinued(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ScreenContactContinued(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ControlLost(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ControlLost(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RotationChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RotationChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ButtonClicked(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ButtonClicked(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ControlAcquired(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ControlAcquired(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialController=_uuidof(IRadialController);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialController;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialController2[] = L"Windows.UI.Input.IRadialController2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EFF-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EFF-4CEE-11E6-B535-001BDC06AB3B")
                IRadialController2 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ButtonPressed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ButtonPressed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ButtonHolding(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ButtonHolding(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ButtonReleased(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ButtonReleased(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialController2=_uuidof(IRadialController2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialController2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonClickedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonClickedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("206AA438-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
                MIDL_INTERFACE("206AA438-E651-11E5-BF62-2C27D7404E85")
                IRadialControllerButtonClickedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerButtonClickedEventArgs=_uuidof(IRadialControllerButtonClickedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonClickedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonClickedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2[] = L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EF3-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF3-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerButtonClickedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerButtonClickedEventArgs2=_uuidof(IRadialControllerButtonClickedEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonHoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonHoldingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonHoldingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EEE-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EEE-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerButtonHoldingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerButtonHoldingEventArgs=_uuidof(IRadialControllerButtonHoldingEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonPressedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonPressedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonPressedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EED-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EED-4CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerButtonPressedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerButtonPressedEventArgs=_uuidof(IRadialControllerButtonPressedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonReleasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonReleasedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonReleasedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EEF-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EEF-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerButtonReleasedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerButtonReleasedEventArgs=_uuidof(IRadialControllerButtonReleasedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfiguration[] = L"Windows.UI.Input.IRadialControllerConfiguration";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("A6B79ECB-6A52-4430-910C-56370A9D6B42"), exclusiveto, contract] */
                MIDL_INTERFACE("A6B79ECB-6A52-4430-910C-56370A9D6B42")
                IRadialControllerConfiguration : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetDefaultMenuItems(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * buttons
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ResetToDefaultMenuItems(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySelectDefaultMenuItem(
                        /* [in] */ABI::Windows::UI::Input::RadialControllerSystemMenuItemKind type,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerConfiguration=_uuidof(IRadialControllerConfiguration);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfiguration2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfiguration2[] = L"Windows.UI.Input.IRadialControllerConfiguration2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EF7-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF7-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerConfiguration2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ActiveControllerWhenMenuIsSuppressed(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IRadialController * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActiveControllerWhenMenuIsSuppressed(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialController * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsMenuSuppressed(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMenuSuppressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerConfiguration2=_uuidof(IRadialControllerConfiguration2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfigurationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfigurationStatics[] = L"Windows.UI.Input.IRadialControllerConfigurationStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("79B6B0E5-069A-4486-A99D-8DB772B9642F"), exclusiveto, contract] */
                MIDL_INTERFACE("79B6B0E5-069A-4486-A99D-8DB772B9642F")
                IRadialControllerConfigurationStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerConfiguration * * configuration
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerConfigurationStatics=_uuidof(IRadialControllerConfigurationStatics);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfigurationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfigurationStatics2[] = L"Windows.UI.Input.IRadialControllerConfigurationStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("53E08B17-E205-48D3-9CAF-80FF47C4D7C7"), exclusiveto, contract] */
                MIDL_INTERFACE("53E08B17-E205-48D3-9CAF-80FF47C4D7C7")
                IRadialControllerConfigurationStatics2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppController(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IRadialController * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialController * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsAppControllerEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAppControllerEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerConfigurationStatics2=_uuidof(IRadialControllerConfigurationStatics2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerControlAcquiredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerControlAcquiredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs[] = L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("206AA439-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
                MIDL_INTERFACE("206AA439-E651-11E5-BF62-2C27D7404E85")
                IRadialControllerControlAcquiredEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerControlAcquiredEventArgs=_uuidof(IRadialControllerControlAcquiredEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerControlAcquiredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2[] = L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EF4-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF4-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerControlAcquiredEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerControlAcquiredEventArgs2=_uuidof(IRadialControllerControlAcquiredEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenu
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenu[] = L"Windows.UI.Input.IRadialControllerMenu";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("8506B35D-F640-4412-ABA0-BAD077E5EA8A"), exclusiveto, contract] */
                MIDL_INTERFACE("8506B35D-F640-4412-ABA0-BAD077E5EA8A")
                IRadialControllerMenu : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Items(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSelectedMenuItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerMenuItem * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SelectMenuItem(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IRadialControllerMenuItem * menuItem
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySelectPreviouslySelectedMenuItem(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerMenu=_uuidof(IRadialControllerMenu);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenuItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenuItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItem[] = L"Windows.UI.Input.IRadialControllerMenuItem";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("C80FC98D-AD0B-4C9C-8F2F-136A2373A6BA"), exclusiveto, contract] */
                MIDL_INTERFACE("C80FC98D-AD0B-4C9C-8F2F-136A2373A6BA")
                IRadialControllerMenuItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tag(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Tag(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Invoked(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Invoked(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerMenuItem=_uuidof(IRadialControllerMenuItem);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenuItemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenuItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItemStatics[] = L"Windows.UI.Input.IRadialControllerMenuItemStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("249E0887-D842-4524-9DF8-E0D647EDC887"), exclusiveto, contract] */
                MIDL_INTERFACE("249E0887-D842-4524-9DF8-E0D647EDC887")
                IRadialControllerMenuItemStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromIcon(
                        /* [in] */__RPC__in HSTRING displayText,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * icon,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerMenuItem * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromKnownIcon(
                        /* [in] */__RPC__in HSTRING displayText,
                        /* [in] */ABI::Windows::UI::Input::RadialControllerMenuKnownIcon value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerMenuItem * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerMenuItemStatics=_uuidof(IRadialControllerMenuItemStatics);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenuItemStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenuItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItemStatics2[] = L"Windows.UI.Input.IRadialControllerMenuItemStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("0CBB70BE-7E3E-48BD-BE04-2C7FCAA9C1FF"), exclusiveto, contract] */
                MIDL_INTERFACE("0CBB70BE-7E3E-48BD-BE04-2C7FCAA9C1FF")
                IRadialControllerMenuItemStatics2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromFontGlyph(
                        /* [in] */__RPC__in HSTRING displayText,
                        /* [in] */__RPC__in HSTRING glyph,
                        /* [in] */__RPC__in HSTRING fontFamily,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerMenuItem * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromFontGlyphWithUri(
                        /* [in] */__RPC__in HSTRING displayText,
                        /* [in] */__RPC__in HSTRING glyph,
                        /* [in] */__RPC__in HSTRING fontFamily,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * fontUri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerMenuItem * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerMenuItemStatics2=_uuidof(IRadialControllerMenuItemStatics2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerRotationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerRotationChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerRotationChangedEventArgs[] = L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("206AA435-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
                MIDL_INTERFACE("206AA435-E651-11E5-BF62-2C27D7404E85")
                IRadialControllerRotationChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RotationDeltaInDegrees(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerRotationChangedEventArgs=_uuidof(IRadialControllerRotationChangedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerRotationChangedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerRotationChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2[] = L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EEC-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EEC-4CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerRotationChangedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerRotationChangedEventArgs2=_uuidof(IRadialControllerRotationChangedEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContact
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContact
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContact[] = L"Windows.UI.Input.IRadialControllerScreenContact";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("206AA434-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
                MIDL_INTERFACE("206AA434-E651-11E5-BF62-2C27D7404E85")
                IRadialControllerScreenContact : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bounds(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerScreenContact=_uuidof(IRadialControllerScreenContact);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("206AA437-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
                MIDL_INTERFACE("206AA437-E651-11E5-BF62-2C27D7404E85")
                IRadialControllerScreenContactContinuedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerScreenContactContinuedEventArgs=_uuidof(IRadialControllerScreenContactContinuedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2[] = L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EF1-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF1-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerScreenContactContinuedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerScreenContactContinuedEventArgs2=_uuidof(IRadialControllerScreenContactContinuedEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactEndedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EF2-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF2-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerScreenContactEndedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerScreenContactEndedEventArgs=_uuidof(IRadialControllerScreenContactEndedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("206AA436-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
                MIDL_INTERFACE("206AA436-E651-11E5-BF62-2C27D7404E85")
                IRadialControllerScreenContactStartedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialControllerScreenContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerScreenContactStartedEventArgs=_uuidof(IRadialControllerScreenContactStartedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2[] = L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("3D577EF0-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF0-3CEE-11E6-B535-001BDC06AB3B")
                IRadialControllerScreenContactStartedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsButtonPressed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerScreenContactStartedEventArgs2=_uuidof(IRadialControllerScreenContactStartedEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerStatics[] = L"Windows.UI.Input.IRadialControllerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("FADED0B7-B84C-4894-87AA-8F25AA5F288B"), exclusiveto, contract] */
                MIDL_INTERFACE("FADED0B7-B84C-4894-87AA-8F25AA5F288B")
                IRadialControllerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialController * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRadialControllerStatics=_uuidof(IRadialControllerStatics);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRightTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RightTappedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRightTappedEventArgs[] = L"Windows.UI.Input.IRightTappedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("4CBF40BD-AF7A-4A36-9476-B1DCE141709A"), exclusiveto, contract] */
                MIDL_INTERFACE("4CBF40BD-AF7A-4A36-9476-B1DCE141709A")
                IRightTappedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRightTappedEventArgs=_uuidof(IRightTappedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.ITappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.TappedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_ITappedEventArgs[] = L"Windows.UI.Input.ITappedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                /* [object, uuid("CFA126E4-253A-4C3C-953B-395C37AED309"), exclusiveto, contract] */
                MIDL_INTERFACE("CFA126E4-253A-4C3C-953B-395C37AED309")
                ITappedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TapCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITappedEventArgs=_uuidof(ITappedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CITappedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.CrossSlidingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.ICrossSlidingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_CrossSlidingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_CrossSlidingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_CrossSlidingEventArgs[] = L"Windows.UI.Input.CrossSlidingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.DraggingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IDraggingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_DraggingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_DraggingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_DraggingEventArgs[] = L"Windows.UI.Input.DraggingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.EdgeGesture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IEdgeGestureStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IEdgeGesture ** Default Interface **
 *
 * Class Threading Model:  Single Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_EdgeGesture_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_EdgeGesture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_EdgeGesture[] = L"Windows.UI.Input.EdgeGesture";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.EdgeGestureEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IEdgeGestureEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_EdgeGestureEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_EdgeGestureEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_EdgeGestureEventArgs[] = L"Windows.UI.Input.EdgeGestureEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.GestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IGestureRecognizer ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_GestureRecognizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_GestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_GestureRecognizer[] = L"Windows.UI.Input.GestureRecognizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.HoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_HoldingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_HoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_HoldingEventArgs[] = L"Windows.UI.Input.HoldingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.KeyboardDeliveryInterceptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IKeyboardDeliveryInterceptorStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IKeyboardDeliveryInterceptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_KeyboardDeliveryInterceptor_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_KeyboardDeliveryInterceptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_KeyboardDeliveryInterceptor[] = L"Windows.UI.Input.KeyboardDeliveryInterceptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.ManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationCompletedEventArgs[] = L"Windows.UI.Input.ManipulationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.ManipulationInertiaStartingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationInertiaStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationInertiaStartingEventArgs[] = L"Windows.UI.Input.ManipulationInertiaStartingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.ManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationStartedEventArgs[] = L"Windows.UI.Input.ManipulationStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.ManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationUpdatedEventArgs[] = L"Windows.UI.Input.ManipulationUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.MouseWheelParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IMouseWheelParameters ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_MouseWheelParameters_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_MouseWheelParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_MouseWheelParameters[] = L"Windows.UI.Input.MouseWheelParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.PointerPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IPointerPointStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IPointerPoint ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_PointerPoint_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_PointerPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerPoint[] = L"Windows.UI.Input.PointerPoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.PointerPointProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IPointerPointProperties ** Default Interface **
 *    Windows.UI.Input.IPointerPointProperties2
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_PointerPointProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_PointerPointProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerPointProperties[] = L"Windows.UI.Input.PointerPointProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.PointerVisualizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IPointerVisualizationSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IPointerVisualizationSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_PointerVisualizationSettings_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_PointerVisualizationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerVisualizationSettings[] = L"Windows.UI.Input.PointerVisualizationSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.RadialController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialController ** Default Interface **
 *    Windows.UI.Input.IRadialController2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialController_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialController[] = L"Windows.UI.Input.RadialController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonClickedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerButtonClickedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonClickedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonClickedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonClickedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonClickedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonHoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonHoldingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonHoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonHoldingEventArgs[] = L"Windows.UI.Input.RadialControllerButtonHoldingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonPressedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonPressedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonPressedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonReleasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonReleasedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonReleasedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonReleasedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonReleasedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonReleasedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerConfigurationStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerConfigurationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerConfiguration ** Default Interface **
 *    Windows.UI.Input.IRadialControllerConfiguration2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerConfiguration_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerConfiguration[] = L"Windows.UI.Input.RadialControllerConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerControlAcquiredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerControlAcquiredEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerControlAcquiredEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerControlAcquiredEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerControlAcquiredEventArgs[] = L"Windows.UI.Input.RadialControllerControlAcquiredEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerMenu ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerMenu_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerMenu_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerMenu[] = L"Windows.UI.Input.RadialControllerMenu";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerMenuItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerMenuItemStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerMenuItemStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerMenuItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerMenuItem_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerMenuItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerMenuItem[] = L"Windows.UI.Input.RadialControllerMenuItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerRotationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerRotationChangedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerRotationChangedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerRotationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerRotationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerRotationChangedEventArgs[] = L"Windows.UI.Input.RadialControllerRotationChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContact
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContact ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContact_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContact_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContact[] = L"Windows.UI.Input.RadialControllerScreenContact";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactContinuedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactContinuedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactContinuedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContactEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactEndedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactEndedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactEndedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactEndedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContactStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactStartedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RightTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRightTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_RightTappedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RightTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RightTappedEventArgs[] = L"Windows.UI.Input.RightTappedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.TappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.ITappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_TappedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_TappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_TappedEventArgs[] = L"Windows.UI.Input.TappedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIEdgeGesture __x_ABI_CWindows_CUI_CInput_CIEdgeGesture;

#endif // ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer;

#endif // ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor;

#endif // ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters;

#endif // ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialController __x_ABI_CWindows_CUI_CInput_CIRadialController;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialController2 __x_ABI_CWindows_CUI_CInput_CIRadialController2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CITappedEventArgs __x_ABI_CWindows_CUI_CInput_CITappedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem;

typedef struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind;
#if !defined(____FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;

typedef struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind_INTERFACE_DEFINED__



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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem;

typedef struct __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;

interface __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#if !defined(____FIReference_1_float_INTERFACE_DEFINED__)
#define ____FIReference_1_float_INTERFACE_DEFINED__

typedef interface __FIReference_1_float __FIReference_1_float;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_float;

typedef struct __FIReference_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_float * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_float * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_float * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_float * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_float * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_float * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_float * This, /* [retval][out] */ __RPC__out float *value);
    END_INTERFACE
} __FIReference_1_floatVtbl;

interface __FIReference_1_float
{
    CONST_VTBL struct __FIReference_1_floatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_float_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_float_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_float_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_float_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_float_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_float_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_float_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_float_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice __x_ABI_CWindows_CDevices_CInput_CIPointerDevice;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType;





typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__










typedef enum __x_ABI_CWindows_CUI_CInput_CCrossSlidingState __x_ABI_CWindows_CUI_CInput_CCrossSlidingState;


typedef enum __x_ABI_CWindows_CUI_CInput_CDraggingState __x_ABI_CWindows_CUI_CInput_CDraggingState;


typedef enum __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind;


typedef enum __x_ABI_CWindows_CUI_CInput_CGestureSettings __x_ABI_CWindows_CUI_CInput_CGestureSettings;


typedef enum __x_ABI_CWindows_CUI_CInput_CHoldingState __x_ABI_CWindows_CUI_CInput_CHoldingState;


typedef enum __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind;


typedef enum __x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon __x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon;


typedef enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind;


typedef struct __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds;


typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationDelta __x_ABI_CWindows_CUI_CInput_CManipulationDelta;


typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationVelocities __x_ABI_CWindows_CUI_CInput_CManipulationVelocities;

























































































/*
 *
 * Struct Windows.UI.Input.CrossSlidingState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CCrossSlidingState
{
    CrossSlidingState_Started = 0,
    CrossSlidingState_Dragging = 1,
    CrossSlidingState_Selecting = 2,
    CrossSlidingState_SelectSpeedBumping = 3,
    CrossSlidingState_SpeedBumping = 4,
    CrossSlidingState_Rearranging = 5,
    CrossSlidingState_Completed = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.DraggingState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CDraggingState
{
    DraggingState_Started = 0,
    DraggingState_Continuing = 1,
    DraggingState_Completed = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.EdgeGestureKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind
{
    EdgeGestureKind_Touch = 0,
    EdgeGestureKind_Keyboard = 1,
    EdgeGestureKind_Mouse = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.GestureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CGestureSettings
{
    GestureSettings_None = 0,
    GestureSettings_Tap = 0x1,
    GestureSettings_DoubleTap = 0x2,
    GestureSettings_Hold = 0x4,
    GestureSettings_HoldWithMouse = 0x8,
    GestureSettings_RightTap = 0x10,
    GestureSettings_Drag = 0x20,
    GestureSettings_ManipulationTranslateX = 0x40,
    GestureSettings_ManipulationTranslateY = 0x80,
    GestureSettings_ManipulationTranslateRailsX = 0x100,
    GestureSettings_ManipulationTranslateRailsY = 0x200,
    GestureSettings_ManipulationRotate = 0x400,
    GestureSettings_ManipulationScale = 0x800,
    GestureSettings_ManipulationTranslateInertia = 0x1000,
    GestureSettings_ManipulationRotateInertia = 0x2000,
    GestureSettings_ManipulationScaleInertia = 0x4000,
    GestureSettings_CrossSlide = 0x8000,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    GestureSettings_ManipulationMultipleFingerPanning = 0x10000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.HoldingState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CHoldingState
{
    HoldingState_Started = 0,
    HoldingState_Completed = 1,
    HoldingState_Canceled = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.PointerUpdateKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind
{
    PointerUpdateKind_Other = 0,
    PointerUpdateKind_LeftButtonPressed = 1,
    PointerUpdateKind_LeftButtonReleased = 2,
    PointerUpdateKind_RightButtonPressed = 3,
    PointerUpdateKind_RightButtonReleased = 4,
    PointerUpdateKind_MiddleButtonPressed = 5,
    PointerUpdateKind_MiddleButtonReleased = 6,
    PointerUpdateKind_XButton1Pressed = 7,
    PointerUpdateKind_XButton1Released = 8,
    PointerUpdateKind_XButton2Pressed = 9,
    PointerUpdateKind_XButton2Released = 10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.RadialControllerMenuKnownIcon
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon
{
    RadialControllerMenuKnownIcon_Scroll = 0,
    RadialControllerMenuKnownIcon_Zoom = 1,
    RadialControllerMenuKnownIcon_UndoRedo = 2,
    RadialControllerMenuKnownIcon_Volume = 3,
    RadialControllerMenuKnownIcon_NextPreviousTrack = 4,
    RadialControllerMenuKnownIcon_Ruler = 5,
    RadialControllerMenuKnownIcon_InkColor = 6,
    RadialControllerMenuKnownIcon_InkThickness = 7,
    RadialControllerMenuKnownIcon_PenType = 8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.RadialControllerSystemMenuItemKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind
{
    RadialControllerSystemMenuItemKind_Scroll = 0,
    RadialControllerSystemMenuItemKind_Zoom = 1,
    RadialControllerSystemMenuItemKind_UndoRedo = 2,
    RadialControllerSystemMenuItemKind_Volume = 3,
    RadialControllerSystemMenuItemKind_NextPreviousTrack = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.CrossSlideThresholds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds
{
    FLOAT SelectionStart;
    FLOAT SpeedBumpStart;
    FLOAT SpeedBumpEnd;
    FLOAT RearrangeStart;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.ManipulationDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CInput_CManipulationDelta
{
    __x_ABI_CWindows_CFoundation_CPoint Translation;
    FLOAT Scale;
    FLOAT Rotation;
    FLOAT Expansion;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.ManipulationVelocities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CInput_CManipulationVelocities
{
    __x_ABI_CWindows_CFoundation_CPoint Linear;
    FLOAT Angular;
    FLOAT Expansion;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.ICrossSlidingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.CrossSlidingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_ICrossSlidingEventArgs[] = L"Windows.UI.Input.ICrossSlidingEventArgs";
/* [object, uuid("E9374738-6F88-41D9-8720-78E08E398349"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlidingState )(
        __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CCrossSlidingState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_get_CrossSlidingState(This,value) \
    ( (This)->lpVtbl->get_CrossSlidingState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IDraggingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.DraggingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IDraggingEventArgs[] = L"Windows.UI.Input.IDraggingEventArgs";
/* [object, uuid("1C905384-083C-4BD3-B559-179CDDEB33EC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DraggingState )(
        __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CDraggingState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_get_DraggingState(This,value) \
    ( (This)->lpVtbl->get_DraggingState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IEdgeGesture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.EdgeGesture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGesture[] = L"Windows.UI.Input.IEdgeGesture";
/* [object, uuid("580D5292-2AB1-49AA-A7F0-33BD3F8DF9F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Starting )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Starting )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Canceled )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Canceled )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIEdgeGestureVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIEdgeGesture
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_add_Starting(This,handler,token) \
    ( (This)->lpVtbl->add_Starting(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_remove_Starting(This,token) \
    ( (This)->lpVtbl->remove_Starting(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_add_Completed(This,handler,token) \
    ( (This)->lpVtbl->add_Completed(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_remove_Completed(This,token) \
    ( (This)->lpVtbl->remove_Completed(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_add_Canceled(This,handler,token) \
    ( (This)->lpVtbl->add_Canceled(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGesture_remove_Canceled(This,token) \
    ( (This)->lpVtbl->remove_Canceled(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGesture;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGesture_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IEdgeGestureEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.EdgeGestureEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGestureEventArgs[] = L"Windows.UI.Input.IEdgeGestureEventArgs";
/* [object, uuid("44FA4A24-2D09-42E1-8B5E-368208796A4C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IEdgeGestureStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.EdgeGesture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGestureStatics[] = L"Windows.UI.Input.IEdgeGestureStatics";
/* [object, uuid("BC6A8519-18EE-4043-9839-4FC584D60A14"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * * current
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_GetForCurrentView(This,current) \
    ( (This)->lpVtbl->GetForCurrentView(This,current) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IGestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.GestureRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IGestureRecognizer[] = L"Windows.UI.Input.IGestureRecognizer";
/* [object, uuid("B47A37BF-3D6B-4F88-83E8-6DCB4012FFB0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIGestureRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CGestureSettings * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CGestureSettings value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInertial )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowGestureFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowGestureFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PivotCenter )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PivotCenter )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PivotRadius )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PivotRadius )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaTranslationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaTranslationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaRotationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaRotationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaExpansionDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaExpansionDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaTranslationDisplacement )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaTranslationDisplacement )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaExpansion )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaExpansion )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManipulationExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ManipulationExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlideThresholds )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CrossSlideThresholds )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlideHorizontally )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CrossSlideHorizontally )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlideExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CrossSlideExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoProcessInertia )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoProcessInertia )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseWheelParameters )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CanBeDoubleTap )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value,
        /* [retval, out] */__RPC__out boolean * canBeDoubleTap
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessDownEvent )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessMoveEvents )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessUpEvent )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessMouseWheelEvent )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value,
        /* [in] */boolean isShiftKeyDown,
        /* [in] */boolean isControlKeyDown
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessInertia )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
        );
    HRESULT ( STDMETHODCALLTYPE *CompleteGesture )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RightTapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RightTapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Holding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Holding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Dragging )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Dragging )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationInertiaStarting )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationInertiaStarting )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CrossSliding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CrossSliding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIGestureRecognizerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIGestureRecognizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_GestureSettings(This,value) \
    ( (This)->lpVtbl->get_GestureSettings(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_GestureSettings(This,value) \
    ( (This)->lpVtbl->put_GestureSettings(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_IsInertial(This,value) \
    ( (This)->lpVtbl->get_IsInertial(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_IsActive(This,value) \
    ( (This)->lpVtbl->get_IsActive(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_ShowGestureFeedback(This,value) \
    ( (This)->lpVtbl->get_ShowGestureFeedback(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_ShowGestureFeedback(This,value) \
    ( (This)->lpVtbl->put_ShowGestureFeedback(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_PivotCenter(This,value) \
    ( (This)->lpVtbl->get_PivotCenter(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_PivotCenter(This,value) \
    ( (This)->lpVtbl->put_PivotCenter(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_PivotRadius(This,value) \
    ( (This)->lpVtbl->get_PivotRadius(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_PivotRadius(This,value) \
    ( (This)->lpVtbl->put_PivotRadius(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_InertiaTranslationDeceleration(This,value) \
    ( (This)->lpVtbl->get_InertiaTranslationDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_InertiaTranslationDeceleration(This,value) \
    ( (This)->lpVtbl->put_InertiaTranslationDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_InertiaRotationDeceleration(This,value) \
    ( (This)->lpVtbl->get_InertiaRotationDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_InertiaRotationDeceleration(This,value) \
    ( (This)->lpVtbl->put_InertiaRotationDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_InertiaExpansionDeceleration(This,value) \
    ( (This)->lpVtbl->get_InertiaExpansionDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_InertiaExpansionDeceleration(This,value) \
    ( (This)->lpVtbl->put_InertiaExpansionDeceleration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_InertiaTranslationDisplacement(This,value) \
    ( (This)->lpVtbl->get_InertiaTranslationDisplacement(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_InertiaTranslationDisplacement(This,value) \
    ( (This)->lpVtbl->put_InertiaTranslationDisplacement(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_InertiaRotationAngle(This,value) \
    ( (This)->lpVtbl->get_InertiaRotationAngle(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_InertiaRotationAngle(This,value) \
    ( (This)->lpVtbl->put_InertiaRotationAngle(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_InertiaExpansion(This,value) \
    ( (This)->lpVtbl->get_InertiaExpansion(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_InertiaExpansion(This,value) \
    ( (This)->lpVtbl->put_InertiaExpansion(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_ManipulationExact(This,value) \
    ( (This)->lpVtbl->get_ManipulationExact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_ManipulationExact(This,value) \
    ( (This)->lpVtbl->put_ManipulationExact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_CrossSlideThresholds(This,value) \
    ( (This)->lpVtbl->get_CrossSlideThresholds(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_CrossSlideThresholds(This,value) \
    ( (This)->lpVtbl->put_CrossSlideThresholds(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_CrossSlideHorizontally(This,value) \
    ( (This)->lpVtbl->get_CrossSlideHorizontally(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_CrossSlideHorizontally(This,value) \
    ( (This)->lpVtbl->put_CrossSlideHorizontally(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_CrossSlideExact(This,value) \
    ( (This)->lpVtbl->get_CrossSlideExact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_CrossSlideExact(This,value) \
    ( (This)->lpVtbl->put_CrossSlideExact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_AutoProcessInertia(This,value) \
    ( (This)->lpVtbl->get_AutoProcessInertia(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_put_AutoProcessInertia(This,value) \
    ( (This)->lpVtbl->put_AutoProcessInertia(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_get_MouseWheelParameters(This,value) \
    ( (This)->lpVtbl->get_MouseWheelParameters(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_CanBeDoubleTap(This,value,canBeDoubleTap) \
    ( (This)->lpVtbl->CanBeDoubleTap(This,value,canBeDoubleTap) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_ProcessDownEvent(This,value) \
    ( (This)->lpVtbl->ProcessDownEvent(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_ProcessMoveEvents(This,value) \
    ( (This)->lpVtbl->ProcessMoveEvents(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_ProcessUpEvent(This,value) \
    ( (This)->lpVtbl->ProcessUpEvent(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_ProcessMouseWheelEvent(This,value,isShiftKeyDown,isControlKeyDown) \
    ( (This)->lpVtbl->ProcessMouseWheelEvent(This,value,isShiftKeyDown,isControlKeyDown) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_ProcessInertia(This) \
    ( (This)->lpVtbl->ProcessInertia(This) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_CompleteGesture(This) \
    ( (This)->lpVtbl->CompleteGesture(This) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_Tapped(This,handler,pCookie) \
    ( (This)->lpVtbl->add_Tapped(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_Tapped(This,cookie) \
    ( (This)->lpVtbl->remove_Tapped(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_RightTapped(This,handler,pCookie) \
    ( (This)->lpVtbl->add_RightTapped(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_RightTapped(This,cookie) \
    ( (This)->lpVtbl->remove_RightTapped(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_Holding(This,handler,pCookie) \
    ( (This)->lpVtbl->add_Holding(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_Holding(This,cookie) \
    ( (This)->lpVtbl->remove_Holding(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_Dragging(This,handler,pCookie) \
    ( (This)->lpVtbl->add_Dragging(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_Dragging(This,cookie) \
    ( (This)->lpVtbl->remove_Dragging(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_ManipulationStarted(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ManipulationStarted(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_ManipulationStarted(This,cookie) \
    ( (This)->lpVtbl->remove_ManipulationStarted(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_ManipulationUpdated(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ManipulationUpdated(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_ManipulationUpdated(This,cookie) \
    ( (This)->lpVtbl->remove_ManipulationUpdated(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_ManipulationInertiaStarting(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ManipulationInertiaStarting(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_ManipulationInertiaStarting(This,cookie) \
    ( (This)->lpVtbl->remove_ManipulationInertiaStarting(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_ManipulationCompleted(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ManipulationCompleted(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_ManipulationCompleted(This,cookie) \
    ( (This)->lpVtbl->remove_ManipulationCompleted(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_add_CrossSliding(This,handler,pCookie) \
    ( (This)->lpVtbl->add_CrossSliding(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_remove_CrossSliding(This,cookie) \
    ( (This)->lpVtbl->remove_CrossSliding(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIGestureRecognizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IHoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.HoldingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IHoldingEventArgs[] = L"Windows.UI.Input.IHoldingEventArgs";
/* [object, uuid("2BF755C5-E799-41B4-BB40-242F40959B71"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HoldingState )(
        __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CHoldingState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_get_HoldingState(This,value) \
    ( (This)->lpVtbl->get_HoldingState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IKeyboardDeliveryInterceptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.KeyboardDeliveryInterceptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IKeyboardDeliveryInterceptor[] = L"Windows.UI.Input.IKeyboardDeliveryInterceptor";
/* [object, uuid("B4BAF068-8F49-446C-8DB5-8C0FFE85CC9E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInterceptionEnabledWhenInForeground )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsInterceptionEnabledWhenInForeground )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
        /* [in] */boolean value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_get_IsInterceptionEnabledWhenInForeground(This,value) \
    ( (This)->lpVtbl->get_IsInterceptionEnabledWhenInForeground(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_put_IsInterceptionEnabledWhenInForeground(This,value) \
    ( (This)->lpVtbl->put_IsInterceptionEnabledWhenInForeground(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_add_KeyDown(This,handler,token) \
    ( (This)->lpVtbl->add_KeyDown(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_remove_KeyDown(This,token) \
    ( (This)->lpVtbl->remove_KeyDown(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_add_KeyUp(This,handler,token) \
    ( (This)->lpVtbl->add_KeyUp(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_remove_KeyUp(This,token) \
    ( (This)->lpVtbl->remove_KeyUp(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.IKeyboardDeliveryInterceptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.KeyboardDeliveryInterceptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics[] = L"Windows.UI.Input.IKeyboardDeliveryInterceptorStatics";
/* [object, uuid("F9F63BA2-CEBA-4755-8A7E-14C0FFECD239"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * * keyboardDeliverySettings
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_GetForCurrentView(This,keyboardDeliverySettings) \
    ( (This)->lpVtbl->GetForCurrentView(This,keyboardDeliverySettings) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.IManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationCompletedEventArgs[] = L"Windows.UI.Input.IManipulationCompletedEventArgs";
/* [object, uuid("B34AB22B-D19B-46FF-9F38-DEC7754BB9E7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IManipulationInertiaStartingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationInertiaStartingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationInertiaStartingEventArgs[] = L"Windows.UI.Input.IManipulationInertiaStartingEventArgs";
/* [object, uuid("DD37A898-26BF-467A-9CE5-CCF3FB11371E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Delta(This,value) \
    ( (This)->lpVtbl->get_Delta(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationStartedEventArgs[] = L"Windows.UI.Input.IManipulationStartedEventArgs";
/* [object, uuid("DDEC873E-CFCE-4932-8C1D-3C3D011A34C0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.ManipulationUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationUpdatedEventArgs[] = L"Windows.UI.Input.IManipulationUpdatedEventArgs";
/* [object, uuid("CB354CE5-ABB8-4F9F-B3CE-8181AA61AD82"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_get_Delta(This,value) \
    ( (This)->lpVtbl->get_Delta(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IMouseWheelParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.MouseWheelParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IMouseWheelParameters[] = L"Windows.UI.Input.IMouseWheelParameters";
/* [object, uuid("EAD0CA44-9DED-4037-8149-5E4CC2564468"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIMouseWheelParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CharTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CharTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeltaScale )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DeltaScale )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeltaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DeltaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PageTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIMouseWheelParametersVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIMouseWheelParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_get_CharTranslation(This,value) \
    ( (This)->lpVtbl->get_CharTranslation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_put_CharTranslation(This,value) \
    ( (This)->lpVtbl->put_CharTranslation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_get_DeltaScale(This,value) \
    ( (This)->lpVtbl->get_DeltaScale(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_put_DeltaScale(This,value) \
    ( (This)->lpVtbl->put_DeltaScale(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_get_DeltaRotationAngle(This,value) \
    ( (This)->lpVtbl->get_DeltaRotationAngle(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_put_DeltaRotationAngle(This,value) \
    ( (This)->lpVtbl->put_DeltaRotationAngle(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_get_PageTranslation(This,value) \
    ( (This)->lpVtbl->get_PageTranslation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_put_PageTranslation(This,value) \
    ( (This)->lpVtbl->put_PageTranslation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPoint[] = L"Windows.UI.Input.IPointerPoint";
/* [object, uuid("E995317D-7296-42D9-8233-C5BE73B74A4A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDevice )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawPosition )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameId )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInContact )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIPointerPointVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_PointerDevice(This,value) \
    ( (This)->lpVtbl->get_PointerDevice(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_RawPosition(This,value) \
    ( (This)->lpVtbl->get_RawPosition(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_PointerId(This,value) \
    ( (This)->lpVtbl->get_PointerId(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_FrameId(This,value) \
    ( (This)->lpVtbl->get_FrameId(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_IsInContact(This,value) \
    ( (This)->lpVtbl->get_IsInContact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPoint;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPointProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointProperties[] = L"Windows.UI.Input.IPointerPointProperties";
/* [object, uuid("C79D8A4B-C163-4EE7-803F-67CE79F9972D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInverted )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEraser )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XTilt )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_YTilt )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Twist )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactRect )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactRectRaw )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchConfidence )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLeftButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRightButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMiddleButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseWheelDelta )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHorizontalMouseWheel )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPrimary )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInRange )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBarrelButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsXButton1Pressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsXButton2Pressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerUpdateKind )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *HasUsage )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [in] */UINT32 usagePage,
        /* [in] */UINT32 usageId,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetUsageValue )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
        /* [in] */UINT32 usagePage,
        /* [in] */UINT32 usageId,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIPointerPointPropertiesVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsInverted(This,value) \
    ( (This)->lpVtbl->get_IsInverted(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsEraser(This,value) \
    ( (This)->lpVtbl->get_IsEraser(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_XTilt(This,value) \
    ( (This)->lpVtbl->get_XTilt(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_YTilt(This,value) \
    ( (This)->lpVtbl->get_YTilt(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_Twist(This,value) \
    ( (This)->lpVtbl->get_Twist(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_ContactRect(This,value) \
    ( (This)->lpVtbl->get_ContactRect(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_ContactRectRaw(This,value) \
    ( (This)->lpVtbl->get_ContactRectRaw(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_TouchConfidence(This,value) \
    ( (This)->lpVtbl->get_TouchConfidence(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsLeftButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsLeftButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsRightButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsRightButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsMiddleButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsMiddleButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_MouseWheelDelta(This,value) \
    ( (This)->lpVtbl->get_MouseWheelDelta(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsHorizontalMouseWheel(This,value) \
    ( (This)->lpVtbl->get_IsHorizontalMouseWheel(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsPrimary(This,value) \
    ( (This)->lpVtbl->get_IsPrimary(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsInRange(This,value) \
    ( (This)->lpVtbl->get_IsInRange(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsBarrelButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsBarrelButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsXButton1Pressed(This,value) \
    ( (This)->lpVtbl->get_IsXButton1Pressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_IsXButton2Pressed(This,value) \
    ( (This)->lpVtbl->get_IsXButton2Pressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_get_PointerUpdateKind(This,value) \
    ( (This)->lpVtbl->get_PointerUpdateKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_HasUsage(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->HasUsage(This,usagePage,usageId,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_GetUsageValue(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetUsageValue(This,usagePage,usageId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPointProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointProperties2[] = L"Windows.UI.Input.IPointerPointProperties2";
/* [object, uuid("22C3433A-C83B-41C0-A296-5E232D64D6AF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ZDistance )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_get_ZDistance(This,value) \
    ( (This)->lpVtbl->get_ZDistance(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointStatics[] = L"Windows.UI.Input.IPointerPointStatics";
/* [object, uuid("A506638D-2A1A-413E-BC75-9F38381CC069"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetCurrentPoint )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * pointerPoint
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * pointerPoints
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetCurrentPointTransformed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * transform,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * pointerPoint
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetIntermediatePointsTransformed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * transform,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * pointerPoints
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIPointerPointStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_GetCurrentPoint(This,pointerId,pointerPoint) \
    ( (This)->lpVtbl->GetCurrentPoint(This,pointerId,pointerPoint) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_GetIntermediatePoints(This,pointerId,pointerPoints) \
    ( (This)->lpVtbl->GetIntermediatePoints(This,pointerId,pointerPoints) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_GetCurrentPointTransformed(This,pointerId,transform,pointerPoint) \
    ( (This)->lpVtbl->GetCurrentPointTransformed(This,pointerId,transform,pointerPoint) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_GetIntermediatePointsTransformed(This,pointerId,transform,pointerPoints) \
    ( (This)->lpVtbl->GetIntermediatePointsTransformed(This,pointerId,transform,pointerPoints) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerPointTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointTransform[] = L"Windows.UI.Input.IPointerPointTransform";
/* [object, uuid("4D5FE14F-B87C-4028-BC9C-59E9947FB056"), contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Inverse )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryTransform )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint inPoint,
        /* [out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * outPoint,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *TransformBounds )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect rect,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIPointerPointTransformVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointTransformVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_get_Inverse(This,value) \
    ( (This)->lpVtbl->get_Inverse(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_TryTransform(This,inPoint,outPoint,returnValue) \
    ( (This)->lpVtbl->TryTransform(This,inPoint,outPoint,returnValue) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_TransformBounds(This,rect,returnValue) \
    ( (This)->lpVtbl->TransformBounds(This,rect,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointTransform;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerVisualizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerVisualizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerVisualizationSettings[] = L"Windows.UI.Input.IPointerVisualizationSettings";
/* [object, uuid("4D1E6461-84F7-499D-BD91-2A36E2B7AAA2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsContactFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsContactFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsBarrelButtonFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBarrelButtonFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_put_IsContactFeedbackEnabled(This,value) \
    ( (This)->lpVtbl->put_IsContactFeedbackEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_get_IsContactFeedbackEnabled(This,value) \
    ( (This)->lpVtbl->get_IsContactFeedbackEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_put_IsBarrelButtonFeedbackEnabled(This,value) \
    ( (This)->lpVtbl->put_IsBarrelButtonFeedbackEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_get_IsBarrelButtonFeedbackEnabled(This,value) \
    ( (This)->lpVtbl->get_IsBarrelButtonFeedbackEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IPointerVisualizationSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.PointerVisualizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerVisualizationSettingsStatics[] = L"Windows.UI.Input.IPointerVisualizationSettingsStatics";
/* [object, uuid("68870EDB-165B-4214-B4F3-584ECA8C8A69"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * * visualizationSettings
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_GetForCurrentView(This,visualizationSettings) \
    ( (This)->lpVtbl->GetForCurrentView(This,visualizationSettings) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.IRadialController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialController[] = L"Windows.UI.Input.IRadialController";
/* [object, uuid("3055D1C8-DF51-43D4-B23B-0E1037467A09"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Menu )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RotationResolutionInDegrees )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RotationResolutionInDegrees )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UseAutomaticHapticFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UseAutomaticHapticFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */boolean value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ScreenContactStarted )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ScreenContactStarted )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ScreenContactEnded )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ScreenContactEnded )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ScreenContactContinued )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ScreenContactContinued )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ControlLost )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ControlLost )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RotationChanged )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RotationChanged )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ButtonClicked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ButtonClicked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ControlAcquired )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ControlAcquired )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialController
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_get_Menu(This,value) \
    ( (This)->lpVtbl->get_Menu(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_get_RotationResolutionInDegrees(This,value) \
    ( (This)->lpVtbl->get_RotationResolutionInDegrees(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_put_RotationResolutionInDegrees(This,value) \
    ( (This)->lpVtbl->put_RotationResolutionInDegrees(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_get_UseAutomaticHapticFeedback(This,value) \
    ( (This)->lpVtbl->get_UseAutomaticHapticFeedback(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_put_UseAutomaticHapticFeedback(This,value) \
    ( (This)->lpVtbl->put_UseAutomaticHapticFeedback(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_add_ScreenContactStarted(This,handler,cookie) \
    ( (This)->lpVtbl->add_ScreenContactStarted(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_remove_ScreenContactStarted(This,cookie) \
    ( (This)->lpVtbl->remove_ScreenContactStarted(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_add_ScreenContactEnded(This,handler,cookie) \
    ( (This)->lpVtbl->add_ScreenContactEnded(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_remove_ScreenContactEnded(This,cookie) \
    ( (This)->lpVtbl->remove_ScreenContactEnded(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_add_ScreenContactContinued(This,handler,cookie) \
    ( (This)->lpVtbl->add_ScreenContactContinued(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_remove_ScreenContactContinued(This,cookie) \
    ( (This)->lpVtbl->remove_ScreenContactContinued(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_add_ControlLost(This,handler,cookie) \
    ( (This)->lpVtbl->add_ControlLost(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_remove_ControlLost(This,cookie) \
    ( (This)->lpVtbl->remove_ControlLost(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_add_RotationChanged(This,handler,token) \
    ( (This)->lpVtbl->add_RotationChanged(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_remove_RotationChanged(This,token) \
    ( (This)->lpVtbl->remove_RotationChanged(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_add_ButtonClicked(This,handler,token) \
    ( (This)->lpVtbl->add_ButtonClicked(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_remove_ButtonClicked(This,token) \
    ( (This)->lpVtbl->remove_ButtonClicked(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_add_ControlAcquired(This,handler,cookie) \
    ( (This)->lpVtbl->add_ControlAcquired(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController_remove_ControlAcquired(This,cookie) \
    ( (This)->lpVtbl->remove_ControlAcquired(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialController;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialController2[] = L"Windows.UI.Input.IRadialController2";
/* [object, uuid("3D577EFF-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ButtonHolding )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ButtonHolding )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ButtonReleased )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ButtonReleased )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialController2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialController2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialController2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_add_ButtonPressed(This,handler,token) \
    ( (This)->lpVtbl->add_ButtonPressed(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_remove_ButtonPressed(This,token) \
    ( (This)->lpVtbl->remove_ButtonPressed(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_add_ButtonHolding(This,handler,token) \
    ( (This)->lpVtbl->add_ButtonHolding(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_remove_ButtonHolding(This,token) \
    ( (This)->lpVtbl->remove_ButtonHolding(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_add_ButtonReleased(This,handler,token) \
    ( (This)->lpVtbl->add_ButtonReleased(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialController2_remove_ButtonReleased(This,token) \
    ( (This)->lpVtbl->remove_ButtonReleased(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialController2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonClickedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonClickedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs";
/* [object, uuid("206AA438-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonClickedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonClickedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2[] = L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs2";
/* [object, uuid("3D577EF3-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonHoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonHoldingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonHoldingEventArgs";
/* [object, uuid("3D577EEE-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonPressedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonPressedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonPressedEventArgs";
/* [object, uuid("3D577EED-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerButtonReleasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerButtonReleasedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonReleasedEventArgs";
/* [object, uuid("3D577EEF-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfiguration[] = L"Windows.UI.Input.IRadialControllerConfiguration";
/* [object, uuid("A6B79ECB-6A52-4430-910C-56370A9D6B42"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDefaultMenuItems )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * buttons
        );
    HRESULT ( STDMETHODCALLTYPE *ResetToDefaultMenuItems )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This
        );
    HRESULT ( STDMETHODCALLTYPE *TrySelectDefaultMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind type,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_SetDefaultMenuItems(This,buttons) \
    ( (This)->lpVtbl->SetDefaultMenuItems(This,buttons) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_ResetToDefaultMenuItems(This) \
    ( (This)->lpVtbl->ResetToDefaultMenuItems(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_TrySelectDefaultMenuItem(This,type,result) \
    ( (This)->lpVtbl->TrySelectDefaultMenuItem(This,type,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfiguration2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfiguration2[] = L"Windows.UI.Input.IRadialControllerConfiguration2";
/* [object, uuid("3D577EF7-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ActiveControllerWhenMenuIsSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActiveControllerWhenMenuIsSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsMenuSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMenuSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_put_ActiveControllerWhenMenuIsSuppressed(This,value) \
    ( (This)->lpVtbl->put_ActiveControllerWhenMenuIsSuppressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_get_ActiveControllerWhenMenuIsSuppressed(This,value) \
    ( (This)->lpVtbl->get_ActiveControllerWhenMenuIsSuppressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_put_IsMenuSuppressed(This,value) \
    ( (This)->lpVtbl->put_IsMenuSuppressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_get_IsMenuSuppressed(This,value) \
    ( (This)->lpVtbl->get_IsMenuSuppressed(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfigurationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfigurationStatics[] = L"Windows.UI.Input.IRadialControllerConfigurationStatics";
/* [object, uuid("79B6B0E5-069A-4486-A99D-8DB772B9642F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * * configuration
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_GetForCurrentView(This,configuration) \
    ( (This)->lpVtbl->GetForCurrentView(This,configuration) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerConfigurationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfigurationStatics2[] = L"Windows.UI.Input.IRadialControllerConfigurationStatics2";
/* [object, uuid("53E08B17-E205-48D3-9CAF-80FF47C4D7C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsAppControllerEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAppControllerEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_put_AppController(This,value) \
    ( (This)->lpVtbl->put_AppController(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_get_AppController(This,value) \
    ( (This)->lpVtbl->get_AppController(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_put_IsAppControllerEnabled(This,value) \
    ( (This)->lpVtbl->put_IsAppControllerEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_get_IsAppControllerEnabled(This,value) \
    ( (This)->lpVtbl->get_IsAppControllerEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerControlAcquiredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerControlAcquiredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs[] = L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs";
/* [object, uuid("206AA439-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerControlAcquiredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2[] = L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2";
/* [object, uuid("3D577EF4-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_get_IsButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenu
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenu[] = L"Windows.UI.Input.IRadialControllerMenu";
/* [object, uuid("8506B35D-F640-4412-ABA0-BAD077E5EA8A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelectedMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SelectMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * menuItem
        );
    HRESULT ( STDMETHODCALLTYPE *TrySelectPreviouslySelectedMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_get_Items(This,value) \
    ( (This)->lpVtbl->get_Items(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_put_IsEnabled(This,value) \
    ( (This)->lpVtbl->put_IsEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_GetSelectedMenuItem(This,result) \
    ( (This)->lpVtbl->GetSelectedMenuItem(This,result) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_SelectMenuItem(This,menuItem) \
    ( (This)->lpVtbl->SelectMenuItem(This,menuItem) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_TrySelectPreviouslySelectedMenuItem(This,result) \
    ( (This)->lpVtbl->TrySelectPreviouslySelectedMenuItem(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenuItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenuItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItem[] = L"Windows.UI.Input.IRadialControllerMenuItem";
/* [object, uuid("C80FC98D-AD0B-4C9C-8F2F-136A2373A6BA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Invoked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Invoked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_get_DisplayText(This,value) \
    ( (This)->lpVtbl->get_DisplayText(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_get_Tag(This,value) \
    ( (This)->lpVtbl->get_Tag(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_put_Tag(This,value) \
    ( (This)->lpVtbl->put_Tag(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_add_Invoked(This,handler,token) \
    ( (This)->lpVtbl->add_Invoked(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_remove_Invoked(This,token) \
    ( (This)->lpVtbl->remove_Invoked(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenuItemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenuItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItemStatics[] = L"Windows.UI.Input.IRadialControllerMenuItemStatics";
/* [object, uuid("249E0887-D842-4524-9DF8-E0D647EDC887"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromIcon )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
        /* [in] */__RPC__in HSTRING displayText,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * icon,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromKnownIcon )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
        /* [in] */__RPC__in HSTRING displayText,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_CreateFromIcon(This,displayText,icon,result) \
    ( (This)->lpVtbl->CreateFromIcon(This,displayText,icon,result) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_CreateFromKnownIcon(This,displayText,value,result) \
    ( (This)->lpVtbl->CreateFromKnownIcon(This,displayText,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerMenuItemStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerMenuItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItemStatics2[] = L"Windows.UI.Input.IRadialControllerMenuItemStatics2";
/* [object, uuid("0CBB70BE-7E3E-48BD-BE04-2C7FCAA9C1FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromFontGlyph )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
        /* [in] */__RPC__in HSTRING displayText,
        /* [in] */__RPC__in HSTRING glyph,
        /* [in] */__RPC__in HSTRING fontFamily,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromFontGlyphWithUri )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
        /* [in] */__RPC__in HSTRING displayText,
        /* [in] */__RPC__in HSTRING glyph,
        /* [in] */__RPC__in HSTRING fontFamily,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * fontUri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_CreateFromFontGlyph(This,displayText,glyph,fontFamily,result) \
    ( (This)->lpVtbl->CreateFromFontGlyph(This,displayText,glyph,fontFamily,result) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_CreateFromFontGlyphWithUri(This,displayText,glyph,fontFamily,fontUri,result) \
    ( (This)->lpVtbl->CreateFromFontGlyphWithUri(This,displayText,glyph,fontFamily,fontUri,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerRotationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerRotationChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerRotationChangedEventArgs[] = L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs";
/* [object, uuid("206AA435-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RotationDeltaInDegrees )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_get_RotationDeltaInDegrees(This,value) \
    ( (This)->lpVtbl->get_RotationDeltaInDegrees(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerRotationChangedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerRotationChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2[] = L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs2";
/* [object, uuid("3D577EEC-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_get_IsButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContact
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContact
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContact[] = L"Windows.UI.Input.IRadialControllerScreenContact";
/* [object, uuid("206AA434-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_get_Bounds(This,value) \
    ( (This)->lpVtbl->get_Bounds(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs";
/* [object, uuid("206AA437-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2[] = L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2";
/* [object, uuid("3D577EF1-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_get_IsButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactEndedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs";
/* [object, uuid("3D577EF2-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_get_IsButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs";
/* [object, uuid("206AA436-E651-11E5-BF62-2C27D7404E85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialControllerScreenContactStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2[] = L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2";
/* [object, uuid("3D577EF0-3CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_get_IsButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.IRadialControllerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RadialController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerStatics[] = L"Windows.UI.Input.IRadialControllerStatics";
/* [object, uuid("FADED0B7-B84C-4894-87AA-8F25AA5F288B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )

#define __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_CreateForCurrentView(This,result) \
    ( (This)->lpVtbl->CreateForCurrentView(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.IRightTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.RightTappedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRightTappedEventArgs[] = L"Windows.UI.Input.IRightTappedEventArgs";
/* [object, uuid("4CBF40BD-AF7A-4A36-9476-B1DCE141709A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.ITappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.TappedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_ITappedEventArgs[] = L"Windows.UI.Input.ITappedEventArgs";
/* [object, uuid("CFA126E4-253A-4C3C-953B-395C37AED309"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CITappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TapCount )(
        __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CITappedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CITappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CITappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CITappedEventArgs_get_TapCount(This,value) \
    ( (This)->lpVtbl->get_TapCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CITappedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.CrossSlidingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.ICrossSlidingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_CrossSlidingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_CrossSlidingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_CrossSlidingEventArgs[] = L"Windows.UI.Input.CrossSlidingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.DraggingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IDraggingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_DraggingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_DraggingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_DraggingEventArgs[] = L"Windows.UI.Input.DraggingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.EdgeGesture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IEdgeGestureStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IEdgeGesture ** Default Interface **
 *
 * Class Threading Model:  Single Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_EdgeGesture_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_EdgeGesture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_EdgeGesture[] = L"Windows.UI.Input.EdgeGesture";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.EdgeGestureEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IEdgeGestureEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_EdgeGestureEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_EdgeGestureEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_EdgeGestureEventArgs[] = L"Windows.UI.Input.EdgeGestureEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.GestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IGestureRecognizer ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_GestureRecognizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_GestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_GestureRecognizer[] = L"Windows.UI.Input.GestureRecognizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.HoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_HoldingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_HoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_HoldingEventArgs[] = L"Windows.UI.Input.HoldingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.KeyboardDeliveryInterceptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IKeyboardDeliveryInterceptorStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IKeyboardDeliveryInterceptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_KeyboardDeliveryInterceptor_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_KeyboardDeliveryInterceptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_KeyboardDeliveryInterceptor[] = L"Windows.UI.Input.KeyboardDeliveryInterceptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.ManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationCompletedEventArgs[] = L"Windows.UI.Input.ManipulationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.ManipulationInertiaStartingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationInertiaStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationInertiaStartingEventArgs[] = L"Windows.UI.Input.ManipulationInertiaStartingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.ManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationStartedEventArgs[] = L"Windows.UI.Input.ManipulationStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.ManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_ManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_ManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationUpdatedEventArgs[] = L"Windows.UI.Input.ManipulationUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.MouseWheelParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IMouseWheelParameters ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_MouseWheelParameters_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_MouseWheelParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_MouseWheelParameters[] = L"Windows.UI.Input.MouseWheelParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.PointerPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IPointerPointStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IPointerPoint ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_PointerPoint_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_PointerPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerPoint[] = L"Windows.UI.Input.PointerPoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.PointerPointProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IPointerPointProperties ** Default Interface **
 *    Windows.UI.Input.IPointerPointProperties2
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_PointerPointProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_PointerPointProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerPointProperties[] = L"Windows.UI.Input.PointerPointProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.PointerVisualizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IPointerVisualizationSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IPointerVisualizationSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_PointerVisualizationSettings_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_PointerVisualizationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerVisualizationSettings[] = L"Windows.UI.Input.PointerVisualizationSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.RadialController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialController ** Default Interface **
 *    Windows.UI.Input.IRadialController2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialController_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialController[] = L"Windows.UI.Input.RadialController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonClickedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerButtonClickedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonClickedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonClickedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonClickedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonClickedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonHoldingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonHoldingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonHoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonHoldingEventArgs[] = L"Windows.UI.Input.RadialControllerButtonHoldingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonPressedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonPressedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonPressedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerButtonReleasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerButtonReleasedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonReleasedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerButtonReleasedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonReleasedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonReleasedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerConfigurationStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerConfigurationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerConfiguration ** Default Interface **
 *    Windows.UI.Input.IRadialControllerConfiguration2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerConfiguration_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerConfiguration[] = L"Windows.UI.Input.RadialControllerConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerControlAcquiredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerControlAcquiredEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerControlAcquiredEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerControlAcquiredEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerControlAcquiredEventArgs[] = L"Windows.UI.Input.RadialControllerControlAcquiredEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerMenu ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerMenu_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerMenu_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerMenu[] = L"Windows.UI.Input.RadialControllerMenu";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerMenuItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerMenuItemStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Input.IRadialControllerMenuItemStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerMenuItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerMenuItem_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerMenuItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerMenuItem[] = L"Windows.UI.Input.RadialControllerMenuItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerRotationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerRotationChangedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerRotationChangedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerRotationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerRotationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerRotationChangedEventArgs[] = L"Windows.UI.Input.RadialControllerRotationChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContact
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContact ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContact_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContact_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContact[] = L"Windows.UI.Input.RadialControllerScreenContact";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactContinuedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactContinuedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactContinuedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContactEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactEndedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactEndedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactEndedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactEndedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.RadialControllerScreenContactStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs ** Default Interface **
 *    Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RadialControllerScreenContactStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactStartedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.RightTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.IRightTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_RightTappedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_RightTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RightTappedEventArgs[] = L"Windows.UI.Input.RightTappedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.TappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.ITappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_TappedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_TappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_TappedEventArgs[] = L"Windows.UI.Input.TappedEventArgs";
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
#endif // __windows2Eui2Einput_p_h__

#endif // __windows2Eui2Einput_h__
