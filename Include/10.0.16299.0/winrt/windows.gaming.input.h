/* Header file automatically generated from windows.gaming.input.idl */
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
#ifndef __windows2Egaming2Einput_h__
#define __windows2Egaming2Einput_h__
#ifndef __windows2Egaming2Einput_p_h__
#define __windows2Egaming2Einput_p_h__


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
#include "Windows.Devices.Power.h"
#include "Windows.Gaming.Input.ForceFeedback.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IArcadeStick;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick ABI::Windows::Gaming::Input::IArcadeStick

#endif // ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IArcadeStickStatics;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics ABI::Windows::Gaming::Input::IArcadeStickStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IArcadeStickStatics2;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 ABI::Windows::Gaming::Input::IArcadeStickStatics2

#endif // ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IFlightStick;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick ABI::Windows::Gaming::Input::IFlightStick

#endif // ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IFlightStickStatics;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics ABI::Windows::Gaming::Input::IFlightStickStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGameControllerBatteryInfo;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo ABI::Windows::Gaming::Input::IGameControllerBatteryInfo

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGamepad;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIGamepad ABI::Windows::Gaming::Input::IGamepad

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGamepad2;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2 ABI::Windows::Gaming::Input::IGamepad2

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGamepadStatics;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics ABI::Windows::Gaming::Input::IGamepadStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGamepadStatics2;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 ABI::Windows::Gaming::Input::IGamepadStatics2

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IHeadset;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIHeadset ABI::Windows::Gaming::Input::IHeadset

#endif // ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IRacingWheel;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel ABI::Windows::Gaming::Input::IRacingWheel

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IRacingWheelStatics;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics ABI::Windows::Gaming::Input::IRacingWheelStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IRacingWheelStatics2;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 ABI::Windows::Gaming::Input::IRacingWheelStatics2

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IRawGameController;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController ABI::Windows::Gaming::Input::IRawGameController

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IRawGameController2;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 ABI::Windows::Gaming::Input::IRawGameController2

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IRawGameControllerStatics;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics ABI::Windows::Gaming::Input::IRawGameControllerStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IUINavigationController;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController ABI::Windows::Gaming::Input::IUINavigationController

#endif // ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IUINavigationControllerStatics;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics ABI::Windows::Gaming::Input::IUINavigationControllerStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IUINavigationControllerStatics2;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 ABI::Windows::Gaming::Input::IUINavigationControllerStatics2

#endif // ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                class ArcadeStick;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CArcadeStick_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CArcadeStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d30629af-cc9d-52e1-8b1f-0ffa9629afee"))
IIterator<ABI::Windows::Gaming::Input::ArcadeStick*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ArcadeStick*, ABI::Windows::Gaming::Input::IArcadeStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.ArcadeStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::ArcadeStick*> __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_t;
#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CArcadeStick_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IArcadeStick*>
//#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IArcadeStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CArcadeStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CArcadeStick_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CArcadeStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9376f457-2da5-544a-a409-c636f5d81c35"))
IIterable<ABI::Windows::Gaming::Input::ArcadeStick*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ArcadeStick*, ABI::Windows::Gaming::Input::IArcadeStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.ArcadeStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::ArcadeStick*> __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_t;
#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CArcadeStick_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IArcadeStick*>
//#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IArcadeStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CArcadeStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                class FlightStick;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CFlightStick_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CFlightStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f5fa1919-3f18-5560-bb13-cf7018ac41d5"))
IIterator<ABI::Windows::Gaming::Input::FlightStick*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::FlightStick*, ABI::Windows::Gaming::Input::IFlightStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.FlightStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::FlightStick*> __FIIterator_1_Windows__CGaming__CInput__CFlightStick_t;
#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CFlightStick_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IFlightStick*>
//#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IFlightStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CFlightStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CFlightStick_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CFlightStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3b7fc175-bebe-52ef-a3e9-dda75ea1acfc"))
IIterable<ABI::Windows::Gaming::Input::FlightStick*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::FlightStick*, ABI::Windows::Gaming::Input::IFlightStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.FlightStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::FlightStick*> __FIIterable_1_Windows__CGaming__CInput__CFlightStick_t;
#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CFlightStick_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IFlightStick*>
//#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IFlightStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CFlightStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                class Gamepad;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("246737e8-12bc-5c64-af52-06db4b13fa2f"))
IIterator<ABI::Windows::Gaming::Input::Gamepad*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.Gamepad>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::Gamepad*> __FIIterator_1_Windows__CGaming__CInput__CGamepad_t;
#define __FIIterator_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CGamepad_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IGamepad*>
//#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IGamepad*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("47132ba0-6b17-5cd2-a8bd-b5d3443ccb13"))
IIterable<ABI::Windows::Gaming::Input::Gamepad*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.Gamepad>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::Gamepad*> __FIIterable_1_Windows__CGaming__CInput__CGamepad_t;
#define __FIIterable_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CGamepad_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IGamepad*>
//#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IGamepad*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                class RacingWheel;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CRacingWheel_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CRacingWheel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("23d735b8-4d36-5377-a245-69df97c9fcd9"))
IIterator<ABI::Windows::Gaming::Input::RacingWheel*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RacingWheel*, ABI::Windows::Gaming::Input::IRacingWheel*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.RacingWheel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::RacingWheel*> __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_t;
#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CRacingWheel_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IRacingWheel*>
//#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IRacingWheel*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CRacingWheel_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CRacingWheel_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CRacingWheel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9a7c3830-9a87-5287-a1e2-8a2af29cf68c"))
IIterable<ABI::Windows::Gaming::Input::RacingWheel*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RacingWheel*, ABI::Windows::Gaming::Input::IRacingWheel*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.RacingWheel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::RacingWheel*> __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_t;
#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CRacingWheel_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IRacingWheel*>
//#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IRacingWheel*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CRacingWheel_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                class RawGameController;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CRawGameController_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CRawGameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("51cc88dc-66fb-55ea-9a1b-aadcd71cc08e"))
IIterator<ABI::Windows::Gaming::Input::RawGameController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RawGameController*, ABI::Windows::Gaming::Input::IRawGameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.RawGameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::RawGameController*> __FIIterator_1_Windows__CGaming__CInput__CRawGameController_t;
#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CRawGameController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IRawGameController*>
//#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IRawGameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CRawGameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CRawGameController_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CRawGameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8f2f08cc-f4f4-5539-9357-1f07334d381f"))
IIterable<ABI::Windows::Gaming::Input::RawGameController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RawGameController*, ABI::Windows::Gaming::Input::IRawGameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.RawGameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::RawGameController*> __FIIterable_1_Windows__CGaming__CInput__CRawGameController_t;
#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CRawGameController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IRawGameController*>
//#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IRawGameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CRawGameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                class UINavigationController;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CUINavigationController_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CUINavigationController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c10b2696-64a3-5262-bc4f-b741e5d5afab"))
IIterator<ABI::Windows::Gaming::Input::UINavigationController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::UINavigationController*, ABI::Windows::Gaming::Input::IUINavigationController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.UINavigationController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::UINavigationController*> __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_t;
#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CUINavigationController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IUINavigationController*>
//#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::IUINavigationController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CUINavigationController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CUINavigationController_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CUINavigationController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8dea85a0-0204-57dd-abad-90e37c0ef240"))
IIterable<ABI::Windows::Gaming::Input::UINavigationController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::UINavigationController*, ABI::Windows::Gaming::Input::IUINavigationController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.UINavigationController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::UINavigationController*> __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_t;
#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CUINavigationController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IUINavigationController*>
//#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::IUINavigationController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CUINavigationController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("becace75-d0cd-5a9c-845f-72f085503cdf"))
IVectorView<ABI::Windows::Gaming::Input::ArcadeStick*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ArcadeStick*, ABI::Windows::Gaming::Input::IArcadeStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.ArcadeStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::ArcadeStick*> __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IArcadeStick*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IArcadeStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CFlightStick_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CFlightStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8b9d067e-b6f5-592f-a90a-d72c3d98d4da"))
IVectorView<ABI::Windows::Gaming::Input::FlightStick*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::FlightStick*, ABI::Windows::Gaming::Input::IFlightStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.FlightStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::FlightStick*> __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CFlightStick_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IFlightStick*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IFlightStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CFlightStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb97bb69-09c9-5a99-86b2-3e36085284d4"))
IVectorView<ABI::Windows::Gaming::Input::Gamepad*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.Gamepad>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::Gamepad*> __FIVectorView_1_Windows__CGaming__CInput__CGamepad_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CGamepad_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IGamepad*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IGamepad*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("153993b2-6052-5959-91ec-900c53fef120"))
IVectorView<ABI::Windows::Gaming::Input::RacingWheel*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RacingWheel*, ABI::Windows::Gaming::Input::IRacingWheel*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.RacingWheel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::RacingWheel*> __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IRacingWheel*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IRacingWheel*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CRawGameController_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CRawGameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("779cc322-40c0-55c1-8dc5-cc6e3afe02cf"))
IVectorView<ABI::Windows::Gaming::Input::RawGameController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RawGameController*, ABI::Windows::Gaming::Input::IRawGameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.RawGameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::RawGameController*> __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CRawGameController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IRawGameController*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IRawGameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CRawGameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("684b9e5a-2dc2-54fc-adf5-5ca8f6871425"))
IVectorView<ABI::Windows::Gaming::Input::UINavigationController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::UINavigationController*, ABI::Windows::Gaming::Input::IUINavigationController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.UINavigationController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::UINavigationController*> __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IUINavigationController*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::IUINavigationController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_USE
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6afb8188-d28d-539b-bb69-ea1763fb9920"))
IEventHandler<ABI::Windows::Gaming::Input::ArcadeStick*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ArcadeStick*, ABI::Windows::Gaming::Input::IArcadeStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Gaming.Input.ArcadeStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Gaming::Input::ArcadeStick*> __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_t;
#define __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::__FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IArcadeStick*>
//#define __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IArcadeStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_USE
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d57470b1-cc22-5a43-8e18-5ca064aafe21"))
IEventHandler<ABI::Windows::Gaming::Input::FlightStick*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::FlightStick*, ABI::Windows::Gaming::Input::IFlightStick*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Gaming.Input.FlightStick>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Gaming::Input::FlightStick*> __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_t;
#define __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::__FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IFlightStick*>
//#define __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IFlightStick*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8a7639ee-624a-501a-bb53-562d1ec11b52"))
IEventHandler<ABI::Windows::Gaming::Input::Gamepad*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Gaming.Input.Gamepad>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Gaming::Input::Gamepad*> __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_t;
#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::__FIEventHandler_1_Windows__CGaming__CInput__CGamepad_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IGamepad*>
//#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IGamepad*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_USE
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("352ec824-f64b-5353-80ea-7ff58e3b92a4"))
IEventHandler<ABI::Windows::Gaming::Input::RacingWheel*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RacingWheel*, ABI::Windows::Gaming::Input::IRacingWheel*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Gaming.Input.RacingWheel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Gaming::Input::RacingWheel*> __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_t;
#define __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::__FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IRacingWheel*>
//#define __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IRacingWheel*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_USE
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("00621c22-42e8-529f-9270-836b32931d72"))
IEventHandler<ABI::Windows::Gaming::Input::RawGameController*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::RawGameController*, ABI::Windows::Gaming::Input::IRawGameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Gaming.Input.RawGameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Gaming::Input::RawGameController*> __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_t;
#define __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::__FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IRawGameController*>
//#define __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IRawGameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_USE
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9eaec424-75c1-5871-8da9-ce590c653045"))
IEventHandler<ABI::Windows::Gaming::Input::UINavigationController*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::UINavigationController*, ABI::Windows::Gaming::Input::IUINavigationController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Gaming.Input.UINavigationController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Gaming::Input::UINavigationController*> __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_t;
#define __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::__FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IUINavigationController*>
//#define __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Gaming::Input::IUINavigationController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                class Headset;
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_USE
#define DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07b2f2b7-8825-5c4e-a052-fcfedf3aeea1"))
ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Gaming::Input::Headset*> : ITypedEventHandler_impl<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Headset*, ABI::Windows::Gaming::Input::IHeadset*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Gaming.Input.IGameController, Windows.Gaming.Input.Headset>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Gaming::Input::Headset*> __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_t;
#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Gaming::Input::IHeadset*>
//#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Gaming::Input::IHeadset*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace System {
            class UserChangedEventArgs;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUserChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUserChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUserChangedEventArgs;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUserChangedEventArgs ABI::Windows::System::IUserChangedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CIUserChangedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cb753f2c-2f36-5a8f-adad-057beae73aa4"))
ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::System::UserChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::UserChangedEventArgs*, ABI::Windows::System::IUserChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Gaming.Input.IGameController, Windows.System.UserChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::System::UserChangedEventArgs*> __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::System::IUserChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::System::IUserChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    class ForceFeedbackMotor;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IForceFeedbackMotor;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("64cf69e0-5464-5b72-bd4b-82f7c3d0386d"))
IIterator<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*, ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t;
#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
//#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c14440d1-fea0-5147-aed8-9b85239da882"))
IIterable<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*, ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t;
#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
//#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5bfc5070-101d-5fbb-8d5f-ce5c23becdd9"))
IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*, ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#define DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3c501ba4-eda4-5238-bdb7-d10ba350cd83"))
IIterator<ABI::Windows::Devices::Haptics::SimpleHapticsController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsController*, ABI::Windows::Devices::Haptics::ISimpleHapticsController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Haptics.SimpleHapticsController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Haptics::SimpleHapticsController*> __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t;
#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
//#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#define DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b50da692-4a2b-5c8a-8e14-0439c0b1dba4"))
IIterable<ABI::Windows::Devices::Haptics::SimpleHapticsController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsController*, ABI::Windows::Devices::Haptics::ISimpleHapticsController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Haptics.SimpleHapticsController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Haptics::SimpleHapticsController*> __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t;
#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
//#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5390f01e-c701-5382-97cc-94eaac4b6cbf"))
IVectorView<ABI::Windows::Devices::Haptics::SimpleHapticsController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsController*, ABI::Windows::Devices::Haptics::ISimpleHapticsController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Haptics::SimpleHapticsController*> __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t;
#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000







namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                class BatteryReport;
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                interface IBatteryReport;
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport ABI::Windows::Devices::Power::IBatteryReport

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__













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
            namespace Input {
                
                typedef enum ArcadeStickButtons : unsigned int ArcadeStickButtons;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum FlightStickButtons : unsigned int FlightStickButtons;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum GameControllerButtonLabel : int GameControllerButtonLabel;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum GameControllerSwitchKind : int GameControllerSwitchKind;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum GameControllerSwitchPosition : int GameControllerSwitchPosition;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum GamepadButtons : unsigned int GamepadButtons;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum OptionalUINavigationButtons : unsigned int OptionalUINavigationButtons;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum RacingWheelButtons : unsigned int RacingWheelButtons;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum RequiredUINavigationButtons : unsigned int RequiredUINavigationButtons;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct ArcadeStickReading ArcadeStickReading;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct FlightStickReading FlightStickReading;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct GamepadReading GamepadReading;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct GamepadVibration GamepadVibration;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct RacingWheelReading RacingWheelReading;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct UINavigationReading UINavigationReading;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */






































/*
 *
 * Struct Windows.Gaming.Input.ArcadeStickButtons
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
                /* [v1_enum, flags, contract] */
                enum ArcadeStickButtons : unsigned int
                {
                    ArcadeStickButtons_None = 0,
                    ArcadeStickButtons_StickUp = 0x1,
                    ArcadeStickButtons_StickDown = 0x2,
                    ArcadeStickButtons_StickLeft = 0x4,
                    ArcadeStickButtons_StickRight = 0x8,
                    ArcadeStickButtons_Action1 = 0x10,
                    ArcadeStickButtons_Action2 = 0x20,
                    ArcadeStickButtons_Action3 = 0x40,
                    ArcadeStickButtons_Action4 = 0x80,
                    ArcadeStickButtons_Action5 = 0x100,
                    ArcadeStickButtons_Action6 = 0x200,
                    ArcadeStickButtons_Special1 = 0x400,
                    ArcadeStickButtons_Special2 = 0x800,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(ArcadeStickButtons)
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.FlightStickButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [v1_enum, flags, contract] */
                enum FlightStickButtons : unsigned int
                {
                    FlightStickButtons_None = 0,
                    FlightStickButtons_FirePrimary = 0x1,
                    FlightStickButtons_FireSecondary = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(FlightStickButtons)
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GameControllerButtonLabel
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
                /* [v1_enum, contract] */
                enum GameControllerButtonLabel : int
                {
                    GameControllerButtonLabel_None = 0,
                    GameControllerButtonLabel_XboxBack = 1,
                    GameControllerButtonLabel_XboxStart = 2,
                    GameControllerButtonLabel_XboxMenu = 3,
                    GameControllerButtonLabel_XboxView = 4,
                    GameControllerButtonLabel_XboxUp = 5,
                    GameControllerButtonLabel_XboxDown = 6,
                    GameControllerButtonLabel_XboxLeft = 7,
                    GameControllerButtonLabel_XboxRight = 8,
                    GameControllerButtonLabel_XboxA = 9,
                    GameControllerButtonLabel_XboxB = 10,
                    GameControllerButtonLabel_XboxX = 11,
                    GameControllerButtonLabel_XboxY = 12,
                    GameControllerButtonLabel_XboxLeftBumper = 13,
                    GameControllerButtonLabel_XboxLeftTrigger = 14,
                    GameControllerButtonLabel_XboxLeftStickButton = 15,
                    GameControllerButtonLabel_XboxRightBumper = 16,
                    GameControllerButtonLabel_XboxRightTrigger = 17,
                    GameControllerButtonLabel_XboxRightStickButton = 18,
                    GameControllerButtonLabel_XboxPaddle1 = 19,
                    GameControllerButtonLabel_XboxPaddle2 = 20,
                    GameControllerButtonLabel_XboxPaddle3 = 21,
                    GameControllerButtonLabel_XboxPaddle4 = 22,
                    GameControllerButtonLabel_Mode = 23,
                    GameControllerButtonLabel_Select = 24,
                    GameControllerButtonLabel_Menu = 25,
                    GameControllerButtonLabel_View = 26,
                    GameControllerButtonLabel_Back = 27,
                    GameControllerButtonLabel_Start = 28,
                    GameControllerButtonLabel_Options = 29,
                    GameControllerButtonLabel_Share = 30,
                    GameControllerButtonLabel_Up = 31,
                    GameControllerButtonLabel_Down = 32,
                    GameControllerButtonLabel_Left = 33,
                    GameControllerButtonLabel_Right = 34,
                    GameControllerButtonLabel_LetterA = 35,
                    GameControllerButtonLabel_LetterB = 36,
                    GameControllerButtonLabel_LetterC = 37,
                    GameControllerButtonLabel_LetterL = 38,
                    GameControllerButtonLabel_LetterR = 39,
                    GameControllerButtonLabel_LetterX = 40,
                    GameControllerButtonLabel_LetterY = 41,
                    GameControllerButtonLabel_LetterZ = 42,
                    GameControllerButtonLabel_Cross = 43,
                    GameControllerButtonLabel_Circle = 44,
                    GameControllerButtonLabel_Square = 45,
                    GameControllerButtonLabel_Triangle = 46,
                    GameControllerButtonLabel_LeftBumper = 47,
                    GameControllerButtonLabel_LeftTrigger = 48,
                    GameControllerButtonLabel_LeftStickButton = 49,
                    GameControllerButtonLabel_Left1 = 50,
                    GameControllerButtonLabel_Left2 = 51,
                    GameControllerButtonLabel_Left3 = 52,
                    GameControllerButtonLabel_RightBumper = 53,
                    GameControllerButtonLabel_RightTrigger = 54,
                    GameControllerButtonLabel_RightStickButton = 55,
                    GameControllerButtonLabel_Right1 = 56,
                    GameControllerButtonLabel_Right2 = 57,
                    GameControllerButtonLabel_Right3 = 58,
                    GameControllerButtonLabel_Paddle1 = 59,
                    GameControllerButtonLabel_Paddle2 = 60,
                    GameControllerButtonLabel_Paddle3 = 61,
                    GameControllerButtonLabel_Paddle4 = 62,
                    GameControllerButtonLabel_Plus = 63,
                    GameControllerButtonLabel_Minus = 64,
                    GameControllerButtonLabel_DownLeftArrow = 65,
                    GameControllerButtonLabel_DialLeft = 66,
                    GameControllerButtonLabel_DialRight = 67,
                    GameControllerButtonLabel_Suspension = 68,
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.GameControllerSwitchKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [v1_enum, contract] */
                enum GameControllerSwitchKind : int
                {
                    GameControllerSwitchKind_TwoWay = 0,
                    GameControllerSwitchKind_FourWay = 1,
                    GameControllerSwitchKind_EightWay = 2,
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GameControllerSwitchPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [v1_enum, contract] */
                enum GameControllerSwitchPosition : int
                {
                    GameControllerSwitchPosition_Center = 0,
                    GameControllerSwitchPosition_Up = 1,
                    GameControllerSwitchPosition_UpRight = 2,
                    GameControllerSwitchPosition_Right = 3,
                    GameControllerSwitchPosition_DownRight = 4,
                    GameControllerSwitchPosition_Down = 5,
                    GameControllerSwitchPosition_DownLeft = 6,
                    GameControllerSwitchPosition_Left = 7,
                    GameControllerSwitchPosition_UpLeft = 8,
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GamepadButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [v1_enum, flags, contract] */
                enum GamepadButtons : unsigned int
                {
                    GamepadButtons_None = 0,
                    GamepadButtons_Menu = 0x1,
                    GamepadButtons_View = 0x2,
                    GamepadButtons_A = 0x4,
                    GamepadButtons_B = 0x8,
                    GamepadButtons_X = 0x10,
                    GamepadButtons_Y = 0x20,
                    GamepadButtons_DPadUp = 0x40,
                    GamepadButtons_DPadDown = 0x80,
                    GamepadButtons_DPadLeft = 0x100,
                    GamepadButtons_DPadRight = 0x200,
                    GamepadButtons_LeftShoulder = 0x400,
                    GamepadButtons_RightShoulder = 0x800,
                    GamepadButtons_LeftThumbstick = 0x1000,
                    GamepadButtons_RightThumbstick = 0x2000,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    GamepadButtons_Paddle1 = 0x4000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    GamepadButtons_Paddle2 = 0x8000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    GamepadButtons_Paddle3 = 0x10000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    GamepadButtons_Paddle4 = 0x20000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(GamepadButtons)
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Input.OptionalUINavigationButtons
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
                /* [v1_enum, flags, contract] */
                enum OptionalUINavigationButtons : unsigned int
                {
                    OptionalUINavigationButtons_None = 0,
                    OptionalUINavigationButtons_Context1 = 0x1,
                    OptionalUINavigationButtons_Context2 = 0x2,
                    OptionalUINavigationButtons_Context3 = 0x4,
                    OptionalUINavigationButtons_Context4 = 0x8,
                    OptionalUINavigationButtons_PageUp = 0x10,
                    OptionalUINavigationButtons_PageDown = 0x20,
                    OptionalUINavigationButtons_PageLeft = 0x40,
                    OptionalUINavigationButtons_PageRight = 0x80,
                    OptionalUINavigationButtons_ScrollUp = 0x100,
                    OptionalUINavigationButtons_ScrollDown = 0x200,
                    OptionalUINavigationButtons_ScrollLeft = 0x400,
                    OptionalUINavigationButtons_ScrollRight = 0x800,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(OptionalUINavigationButtons)
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.RacingWheelButtons
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
                /* [v1_enum, flags, contract] */
                enum RacingWheelButtons : unsigned int
                {
                    RacingWheelButtons_None = 0,
                    RacingWheelButtons_PreviousGear = 0x1,
                    RacingWheelButtons_NextGear = 0x2,
                    RacingWheelButtons_DPadUp = 0x4,
                    RacingWheelButtons_DPadDown = 0x8,
                    RacingWheelButtons_DPadLeft = 0x10,
                    RacingWheelButtons_DPadRight = 0x20,
                    RacingWheelButtons_Button1 = 0x40,
                    RacingWheelButtons_Button2 = 0x80,
                    RacingWheelButtons_Button3 = 0x100,
                    RacingWheelButtons_Button4 = 0x200,
                    RacingWheelButtons_Button5 = 0x400,
                    RacingWheelButtons_Button6 = 0x800,
                    RacingWheelButtons_Button7 = 0x1000,
                    RacingWheelButtons_Button8 = 0x2000,
                    RacingWheelButtons_Button9 = 0x4000,
                    RacingWheelButtons_Button10 = 0x8000,
                    RacingWheelButtons_Button11 = 0x10000,
                    RacingWheelButtons_Button12 = 0x20000,
                    RacingWheelButtons_Button13 = 0x40000,
                    RacingWheelButtons_Button14 = 0x80000,
                    RacingWheelButtons_Button15 = 0x100000,
                    RacingWheelButtons_Button16 = 0x200000,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(RacingWheelButtons)
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.RequiredUINavigationButtons
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
                /* [v1_enum, flags, contract] */
                enum RequiredUINavigationButtons : unsigned int
                {
                    RequiredUINavigationButtons_None = 0,
                    RequiredUINavigationButtons_Menu = 0x1,
                    RequiredUINavigationButtons_View = 0x2,
                    RequiredUINavigationButtons_Accept = 0x4,
                    RequiredUINavigationButtons_Cancel = 0x8,
                    RequiredUINavigationButtons_Up = 0x10,
                    RequiredUINavigationButtons_Down = 0x20,
                    RequiredUINavigationButtons_Left = 0x40,
                    RequiredUINavigationButtons_Right = 0x80,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(RequiredUINavigationButtons)
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ArcadeStickReading
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
                /* [contract] */
                struct ArcadeStickReading
                {
                    UINT64 Timestamp;
                    ABI::Windows::Gaming::Input::ArcadeStickButtons Buttons;
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.FlightStickReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [contract] */
                struct FlightStickReading
                {
                    UINT64 Timestamp;
                    ABI::Windows::Gaming::Input::FlightStickButtons Buttons;
                    ABI::Windows::Gaming::Input::GameControllerSwitchPosition HatSwitch;
                    DOUBLE Roll;
                    DOUBLE Pitch;
                    DOUBLE Yaw;
                    DOUBLE Throttle;
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GamepadReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [contract] */
                struct GamepadReading
                {
                    UINT64 Timestamp;
                    ABI::Windows::Gaming::Input::GamepadButtons Buttons;
                    DOUBLE LeftTrigger;
                    DOUBLE RightTrigger;
                    DOUBLE LeftThumbstickX;
                    DOUBLE LeftThumbstickY;
                    DOUBLE RightThumbstickX;
                    DOUBLE RightThumbstickY;
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Input.GamepadVibration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [contract] */
                struct GamepadVibration
                {
                    DOUBLE LeftMotor;
                    DOUBLE RightMotor;
                    DOUBLE LeftTrigger;
                    DOUBLE RightTrigger;
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Input.RacingWheelReading
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
                /* [contract] */
                struct RacingWheelReading
                {
                    UINT64 Timestamp;
                    ABI::Windows::Gaming::Input::RacingWheelButtons Buttons;
                    INT32 PatternShifterGear;
                    DOUBLE Wheel;
                    DOUBLE Throttle;
                    DOUBLE Brake;
                    DOUBLE Clutch;
                    DOUBLE Handbrake;
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.UINavigationReading
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
                /* [contract] */
                struct UINavigationReading
                {
                    UINT64 Timestamp;
                    ABI::Windows::Gaming::Input::RequiredUINavigationButtons RequiredButtons;
                    ABI::Windows::Gaming::Input::OptionalUINavigationButtons OptionalButtons;
                };
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IArcadeStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ArcadeStick
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStick[] = L"Windows.Gaming.Input.IArcadeStick";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("B14A539D-BEFB-4C81-8051-15ECF3B13036"), exclusiveto, contract] */
                MIDL_INTERFACE("B14A539D-BEFB-4C81-8051-15ECF3B13036")
                IArcadeStick : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetButtonLabel(
                        /* [in] */ABI::Windows::Gaming::Input::ArcadeStickButtons button,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerButtonLabel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentReading(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::ArcadeStickReading * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IArcadeStick=_uuidof(IArcadeStick);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStick;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IArcadeStickStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ArcadeStick
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStickStatics[] = L"Windows.Gaming.Input.IArcadeStickStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("5C37B8C8-37B1-4AD8-9458-200F1A30018E"), exclusiveto, contract] */
                MIDL_INTERFACE("5C37B8C8-37B1-4AD8-9458-200F1A30018E")
                IArcadeStickStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ArcadeStickAdded(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ArcadeStickAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ArcadeStickRemoved(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ArcadeStickRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ArcadeSticks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IArcadeStickStatics=_uuidof(IArcadeStickStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IArcadeStickStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ArcadeStick
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IArcadeStickStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStickStatics2[] = L"Windows.Gaming.Input.IArcadeStickStatics2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("52B5D744-BB86-445A-B59C-596F0E2A49DF"), exclusiveto, contract] */
                MIDL_INTERFACE("52B5D744-BB86-445A-B59C-596F0E2A49DF")
                IArcadeStickStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromGameController(
                        /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * gameController,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IArcadeStick * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IArcadeStickStatics2=_uuidof(IArcadeStickStatics2);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IFlightStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.FlightStick
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStick_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IFlightStick[] = L"Windows.Gaming.Input.IFlightStick";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("B4A2C01C-B83B-4459-A1A9-97B03C33DA7C"), exclusiveto, contract] */
                MIDL_INTERFACE("B4A2C01C-B83B-4459-A1A9-97B03C33DA7C")
                IFlightStick : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HatSwitchKind(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerSwitchKind * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetButtonLabel(
                        /* [in] */ABI::Windows::Gaming::Input::FlightStickButtons button,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerButtonLabel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentReading(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::FlightStickReading * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFlightStick=_uuidof(IFlightStick);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIFlightStick;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStick_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IFlightStickStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.FlightStick
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IFlightStickStatics[] = L"Windows.Gaming.Input.IFlightStickStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("5514924A-FECC-435E-83DC-5CEC8A18A520"), exclusiveto, contract] */
                MIDL_INTERFACE("5514924A-FECC-435E-83DC-5CEC8A18A520")
                IFlightStickStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FlightStickAdded(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FlightStickAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FlightStickRemoved(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FlightStickRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlightSticks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromGameController(
                        /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * gameController,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IFlightStick * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFlightStickStatics=_uuidof(IFlightStickStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IGameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGameController[] = L"Windows.Gaming.Input.IGameController";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("1BAF6522-5F64-42C5-8267-B9FE2215BFBD"), contract] */
                MIDL_INTERFACE("1BAF6522-5F64-42C5-8267-B9FE2215BFBD")
                IGameController : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HeadsetConnected(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HeadsetConnected(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HeadsetDisconnected(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HeadsetDisconnected(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UserChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UserChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headset(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IHeadset * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWireless(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameController=_uuidof(IGameController);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGameController;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGameControllerBatteryInfo[] = L"Windows.Gaming.Input.IGameControllerBatteryInfo";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("DCECC681-3963-4DA6-955D-553F3B6F6161"), contract] */
                MIDL_INTERFACE("DCECC681-3963-4DA6-955D-553F3B6F6161")
                IGameControllerBatteryInfo : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryGetBatteryReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Power::IBatteryReport * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGameControllerBatteryInfo=_uuidof(IGameControllerBatteryInfo);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IGamepad
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepad[] = L"Windows.Gaming.Input.IGamepad";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("BC7BB43C-0A69-3903-9E9D-A50F86A45DE5"), exclusiveto, contract] */
                MIDL_INTERFACE("BC7BB43C-0A69-3903-9E9D-A50F86A45DE5")
                IGamepad : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Vibration(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GamepadVibration * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Vibration(
                        /* [in] */ABI::Windows::Gaming::Input::GamepadVibration value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentReading(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GamepadReading * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGamepad=_uuidof(IGamepad);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepad;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IGamepad2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGamepad
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepad2[] = L"Windows.Gaming.Input.IGamepad2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("3C1689BD-5915-4245-B0C0-C89FAE0308FF"), exclusiveto, contract] */
                MIDL_INTERFACE("3C1689BD-5915-4245-B0C0-C89FAE0308FF")
                IGamepad2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetButtonLabel(
                        /* [in] */ABI::Windows::Gaming::Input::GamepadButtons button,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerButtonLabel * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGamepad2=_uuidof(IGamepad2);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepad2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IGamepadStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepadStatics[] = L"Windows.Gaming.Input.IGamepadStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("8BBCE529-D49C-39E9-9560-E47DDE96B7C8"), exclusiveto, contract] */
                MIDL_INTERFACE("8BBCE529-D49C-39E9-9560-E47DDE96B7C8")
                IGamepadStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GamepadAdded(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GamepadAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GamepadRemoved(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GamepadRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gamepads(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CGamepad * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGamepadStatics=_uuidof(IGamepadStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepadStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IGamepadStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGamepadStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepadStatics2[] = L"Windows.Gaming.Input.IGamepadStatics2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("42676DC5-0856-47C4-9213-B395504C3A3C"), exclusiveto, contract] */
                MIDL_INTERFACE("42676DC5-0856-47C4-9213-B395504C3A3C")
                IGamepadStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromGameController(
                        /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * gameController,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IGamepad * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGamepadStatics2=_uuidof(IGamepadStatics2);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IHeadset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Headset
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IHeadset[] = L"Windows.Gaming.Input.IHeadset";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("3FD156EF-6925-3FA8-9181-029C5223AE3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3FD156EF-6925-3FA8-9181-029C5223AE3B")
                IHeadset : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CaptureDeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RenderDeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHeadset=_uuidof(IHeadset);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIHeadset;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IRacingWheel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RacingWheel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheel[] = L"Windows.Gaming.Input.IRacingWheel";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("F546656F-E106-4C82-A90F-554012904B85"), exclusiveto, contract] */
                MIDL_INTERFACE("F546656F-E106-4C82-A90F-554012904B85")
                IRacingWheel : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasClutch(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasHandbrake(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasPatternShifter(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPatternShifterGear(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxWheelAngle(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WheelMotor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetButtonLabel(
                        /* [in] */ABI::Windows::Gaming::Input::RacingWheelButtons button,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerButtonLabel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentReading(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::RacingWheelReading * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRacingWheel=_uuidof(IRacingWheel);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheel;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IRacingWheelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RacingWheel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheelStatics[] = L"Windows.Gaming.Input.IRacingWheelStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("3AC12CD5-581B-4936-9F94-69F1E6514C7D"), exclusiveto, contract] */
                MIDL_INTERFACE("3AC12CD5-581B-4936-9F94-69F1E6514C7D")
                IRacingWheelStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RacingWheelAdded(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RacingWheelAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RacingWheelRemoved(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RacingWheelRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RacingWheels(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRacingWheelStatics=_uuidof(IRacingWheelStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IRacingWheelStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RacingWheel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IRacingWheelStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheelStatics2[] = L"Windows.Gaming.Input.IRacingWheelStatics2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("E666BCAA-EDFD-4323-A9F6-3C384048D1ED"), exclusiveto, contract] */
                MIDL_INTERFACE("E666BCAA-EDFD-4323-A9F6-3C384048D1ED")
                IRacingWheelStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromGameController(
                        /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * gameController,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IRacingWheel * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRacingWheelStatics2=_uuidof(IRacingWheelStatics2);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IRawGameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RawGameController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameController[] = L"Windows.Gaming.Input.IRawGameController";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("7CAD6D91-A7E1-4F71-9A78-33E9C5DFEA62"), exclusiveto, contract] */
                MIDL_INTERFACE("7CAD6D91-A7E1-4F71-9A78-33E9C5DFEA62")
                IRawGameController : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AxisCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForceFeedbackMotors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareProductId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareVendorId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SwitchCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetButtonLabel(
                        /* [in] */INT32 buttonIndex,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerButtonLabel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentReading(
                        /* [in] */UINT32 __buttonArraySize,
                        /* [size_is(__buttonArraySize), out] */__RPC__out_ecount_full(__buttonArraySize) boolean * buttonArray,
                        /* [in] */UINT32 __switchArraySize,
                        /* [size_is(__switchArraySize), out] */__RPC__out_ecount_full(__switchArraySize) ABI::Windows::Gaming::Input::GameControllerSwitchPosition * switchArray,
                        /* [in] */UINT32 __axisArraySize,
                        /* [size_is(__axisArraySize), out] */__RPC__out_ecount_full(__axisArraySize) DOUBLE * axisArray,
                        /* [retval, out] */__RPC__out UINT64 * timestamp
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSwitchKind(
                        /* [in] */INT32 switchIndex,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerSwitchKind * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRawGameController=_uuidof(IRawGameController);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameController;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IRawGameController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RawGameController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IRawGameController
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameController2[] = L"Windows.Gaming.Input.IRawGameController2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("43C0C035-BB73-4756-A787-3ED6BEA617BD"), exclusiveto, contract] */
                MIDL_INTERFACE("43C0C035-BB73-4756-A787-3ED6BEA617BD")
                IRawGameController2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsControllers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NonRoamableId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRawGameController2=_uuidof(IRawGameController2);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameController2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.Input.IRawGameControllerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RawGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameControllerStatics[] = L"Windows.Gaming.Input.IRawGameControllerStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("EB8D0792-E95A-4B19-AFC7-0A59F8BF759E"), exclusiveto, contract] */
                MIDL_INTERFACE("EB8D0792-E95A-4B19-AFC7-0A59F8BF759E")
                IRawGameControllerStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RawGameControllerAdded(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RawGameControllerAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RawGameControllerRemoved(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RawGameControllerRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawGameControllers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromGameController(
                        /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * gameController,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IRawGameController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRawGameControllerStatics=_uuidof(IRawGameControllerStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IUINavigationController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.UINavigationController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationController[] = L"Windows.Gaming.Input.IUINavigationController";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("E5AEEFDD-F50E-4A55-8CDC-D33229548175"), exclusiveto, contract] */
                MIDL_INTERFACE("E5AEEFDD-F50E-4A55-8CDC-D33229548175")
                IUINavigationController : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentReading(
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::UINavigationReading * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetOptionalButtonLabel(
                        /* [in] */ABI::Windows::Gaming::Input::OptionalUINavigationButtons button,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerButtonLabel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRequiredButtonLabel(
                        /* [in] */ABI::Windows::Gaming::Input::RequiredUINavigationButtons button,
                        /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GameControllerButtonLabel * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUINavigationController=_uuidof(IUINavigationController);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationController;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IUINavigationControllerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.UINavigationController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationControllerStatics[] = L"Windows.Gaming.Input.IUINavigationControllerStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("2F14930A-F6F8-4A48-8D89-94786CCA0C2E"), exclusiveto, contract] */
                MIDL_INTERFACE("2F14930A-F6F8-4A48-8D89-94786CCA0C2E")
                IUINavigationControllerStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UINavigationControllerAdded(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UINavigationControllerAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UINavigationControllerRemoved(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * value,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UINavigationControllerRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UINavigationControllers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUINavigationControllerStatics=_uuidof(IUINavigationControllerStatics);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IUINavigationControllerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.UINavigationController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IUINavigationControllerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationControllerStatics2[] = L"Windows.Gaming.Input.IUINavigationControllerStatics2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                /* [object, uuid("E0CB28E3-B20B-4B0B-9ED4-F3D53CEC0DE4"), exclusiveto, contract] */
                MIDL_INTERFACE("E0CB28E3-B20B-4B0B-9ED4-F3D53CEC0DE4")
                IUINavigationControllerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromGameController(
                        /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::IGameController * gameController,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::IUINavigationController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUINavigationControllerStatics2=_uuidof(IUINavigationControllerStatics2);
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.ArcadeStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IArcadeStickStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IArcadeStickStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IArcadeStick ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ArcadeStick_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ArcadeStick_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ArcadeStick[] = L"Windows.Gaming.Input.ArcadeStick";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.FlightStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IFlightStickStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IFlightStick ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_FlightStick_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_FlightStick_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_FlightStick[] = L"Windows.Gaming.Input.FlightStick";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.Gamepad
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IGamepadStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IGamepadStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IGamepad ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGamepad2
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Gamepad_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Gamepad_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Gamepad[] = L"Windows.Gaming.Input.Gamepad";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Input.Headset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IHeadset ** Default Interface **
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Headset_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Headset_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Headset[] = L"Windows.Gaming.Input.Headset";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Input.RacingWheel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IRacingWheelStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IRacingWheelStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IRacingWheel ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_RacingWheel_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_RacingWheel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_RacingWheel[] = L"Windows.Gaming.Input.RacingWheel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.RawGameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IRawGameControllerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IRawGameController ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *    Windows.Gaming.Input.IRawGameController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_RawGameController_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_RawGameController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_RawGameController[] = L"Windows.Gaming.Input.RawGameController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.UINavigationController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IUINavigationControllerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IUINavigationControllerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IUINavigationController ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_UINavigationController_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_UINavigationController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_UINavigationController[] = L"Windows.Gaming.Input.UINavigationController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStick __x_ABI_CWindows_CGaming_CInput_CIArcadeStick;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIFlightStick __x_ABI_CWindows_CGaming_CInput_CIFlightStick;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameController __x_ABI_CWindows_CGaming_CInput_CIGameController;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepad __x_ABI_CWindows_CGaming_CInput_CIGamepad;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepad2 __x_ABI_CWindows_CGaming_CInput_CIGamepad2;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIHeadset __x_ABI_CWindows_CGaming_CInput_CIHeadset;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheel __x_ABI_CWindows_CGaming_CInput_CIRacingWheel;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController __x_ABI_CWindows_CGaming_CInput_CIRawGameController;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 __x_ABI_CWindows_CGaming_CInput_CIRawGameController2;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationController __x_ABI_CWindows_CGaming_CInput_CIUINavigationController;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2;

#endif // ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CArcadeStick __FIIterator_1_Windows__CGaming__CInput__CArcadeStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CArcadeStick;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CArcadeStickVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CArcadeStick_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CArcadeStick __FIIterable_1_Windows__CGaming__CInput__CArcadeStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CArcadeStick;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CArcadeStick **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CArcadeStickVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CArcadeStick_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CFlightStick __FIIterator_1_Windows__CGaming__CInput__CFlightStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CFlightStick;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CFlightStickVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CFlightStick_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CFlightStick __FIIterable_1_Windows__CGaming__CInput__CFlightStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CFlightStick;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CFlightStick **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CFlightStickVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CFlightStick_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CGamepad __FIIterator_1_Windows__CGaming__CInput__CGamepad;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CGamepad;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIGamepad * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIGamepad * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CGamepad __FIIterable_1_Windows__CGaming__CInput__CGamepad;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CGamepad;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CGamepad **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CRacingWheel __FIIterator_1_Windows__CGaming__CInput__CRacingWheel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CRacingWheel;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CRacingWheelVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRacingWheel_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CRacingWheel __FIIterable_1_Windows__CGaming__CInput__CRacingWheel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CRacingWheel;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CRacingWheel **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CRacingWheelVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CRacingWheel_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CRawGameController __FIIterator_1_Windows__CGaming__CInput__CRawGameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CRawGameController;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CRawGameControllerVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CRawGameController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CRawGameController __FIIterable_1_Windows__CGaming__CInput__CRawGameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CRawGameController;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CRawGameController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CRawGameControllerVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CRawGameController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CUINavigationController __FIIterator_1_Windows__CGaming__CInput__CUINavigationController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CUINavigationController;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CUINavigationController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CUINavigationController __FIIterable_1_Windows__CGaming__CInput__CUINavigationController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CUINavigationController;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CUINavigationController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CUINavigationController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CArcadeStick;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CArcadeStickVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CFlightStick __FIVectorView_1_Windows__CGaming__CInput__CFlightStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CFlightStick;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CIFlightStick * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CFlightStickVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CFlightStick_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad __FIVectorView_1_Windows__CGaming__CInput__CGamepad;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CGamepad;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIGamepad * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CIGamepad * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIGamepad * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CRacingWheel;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CRacingWheelVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CRawGameController __FIVectorView_1_Windows__CGaming__CInput__CRawGameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CRawGameController;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CIRawGameController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CRawGameControllerVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CRawGameController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CUINavigationController;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick;

typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStickVtbl;

interface __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CFlightStick;

typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CFlightStickVtbl;

interface __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CGaming__CInput__CFlightStick_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad __FIEventHandler_1_Windows__CGaming__CInput__CGamepad;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CGamepad;

typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl;

interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel;

typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheelVtbl;

interface __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CRawGameController;

typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CRawGameControllerVtbl;

interface __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CGaming__CInput__CRawGameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController;

typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;

interface __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset;

typedef struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIHeadset * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl;

interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CSystem_CIUserChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUserChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUserChangedEventArgs __x_ABI_CWindows_CSystem_CIUserChangedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CIUserChangedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;

interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

typedef  struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;

interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;

interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000






#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport;

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__













#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons;


typedef enum __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons;


typedef enum __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel;


typedef enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind;


typedef enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition;


typedef enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons __x_ABI_CWindows_CGaming_CInput_CGamepadButtons;


typedef enum __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons;


typedef enum __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons;


typedef enum __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons;


typedef struct __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading;


typedef struct __x_ABI_CWindows_CGaming_CInput_CFlightStickReading __x_ABI_CWindows_CGaming_CInput_CFlightStickReading;


typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading __x_ABI_CWindows_CGaming_CInput_CGamepadReading;


typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadVibration __x_ABI_CWindows_CGaming_CInput_CGamepadVibration;


typedef struct __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading;


typedef struct __x_ABI_CWindows_CGaming_CInput_CUINavigationReading __x_ABI_CWindows_CGaming_CInput_CUINavigationReading;






































/*
 *
 * Struct Windows.Gaming.Input.ArcadeStickButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons
{
    ArcadeStickButtons_None = 0,
    ArcadeStickButtons_StickUp = 0x1,
    ArcadeStickButtons_StickDown = 0x2,
    ArcadeStickButtons_StickLeft = 0x4,
    ArcadeStickButtons_StickRight = 0x8,
    ArcadeStickButtons_Action1 = 0x10,
    ArcadeStickButtons_Action2 = 0x20,
    ArcadeStickButtons_Action3 = 0x40,
    ArcadeStickButtons_Action4 = 0x80,
    ArcadeStickButtons_Action5 = 0x100,
    ArcadeStickButtons_Action6 = 0x200,
    ArcadeStickButtons_Special1 = 0x400,
    ArcadeStickButtons_Special2 = 0x800,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.FlightStickButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons
{
    FlightStickButtons_None = 0,
    FlightStickButtons_FirePrimary = 0x1,
    FlightStickButtons_FireSecondary = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GameControllerButtonLabel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel
{
    GameControllerButtonLabel_None = 0,
    GameControllerButtonLabel_XboxBack = 1,
    GameControllerButtonLabel_XboxStart = 2,
    GameControllerButtonLabel_XboxMenu = 3,
    GameControllerButtonLabel_XboxView = 4,
    GameControllerButtonLabel_XboxUp = 5,
    GameControllerButtonLabel_XboxDown = 6,
    GameControllerButtonLabel_XboxLeft = 7,
    GameControllerButtonLabel_XboxRight = 8,
    GameControllerButtonLabel_XboxA = 9,
    GameControllerButtonLabel_XboxB = 10,
    GameControllerButtonLabel_XboxX = 11,
    GameControllerButtonLabel_XboxY = 12,
    GameControllerButtonLabel_XboxLeftBumper = 13,
    GameControllerButtonLabel_XboxLeftTrigger = 14,
    GameControllerButtonLabel_XboxLeftStickButton = 15,
    GameControllerButtonLabel_XboxRightBumper = 16,
    GameControllerButtonLabel_XboxRightTrigger = 17,
    GameControllerButtonLabel_XboxRightStickButton = 18,
    GameControllerButtonLabel_XboxPaddle1 = 19,
    GameControllerButtonLabel_XboxPaddle2 = 20,
    GameControllerButtonLabel_XboxPaddle3 = 21,
    GameControllerButtonLabel_XboxPaddle4 = 22,
    GameControllerButtonLabel_Mode = 23,
    GameControllerButtonLabel_Select = 24,
    GameControllerButtonLabel_Menu = 25,
    GameControllerButtonLabel_View = 26,
    GameControllerButtonLabel_Back = 27,
    GameControllerButtonLabel_Start = 28,
    GameControllerButtonLabel_Options = 29,
    GameControllerButtonLabel_Share = 30,
    GameControllerButtonLabel_Up = 31,
    GameControllerButtonLabel_Down = 32,
    GameControllerButtonLabel_Left = 33,
    GameControllerButtonLabel_Right = 34,
    GameControllerButtonLabel_LetterA = 35,
    GameControllerButtonLabel_LetterB = 36,
    GameControllerButtonLabel_LetterC = 37,
    GameControllerButtonLabel_LetterL = 38,
    GameControllerButtonLabel_LetterR = 39,
    GameControllerButtonLabel_LetterX = 40,
    GameControllerButtonLabel_LetterY = 41,
    GameControllerButtonLabel_LetterZ = 42,
    GameControllerButtonLabel_Cross = 43,
    GameControllerButtonLabel_Circle = 44,
    GameControllerButtonLabel_Square = 45,
    GameControllerButtonLabel_Triangle = 46,
    GameControllerButtonLabel_LeftBumper = 47,
    GameControllerButtonLabel_LeftTrigger = 48,
    GameControllerButtonLabel_LeftStickButton = 49,
    GameControllerButtonLabel_Left1 = 50,
    GameControllerButtonLabel_Left2 = 51,
    GameControllerButtonLabel_Left3 = 52,
    GameControllerButtonLabel_RightBumper = 53,
    GameControllerButtonLabel_RightTrigger = 54,
    GameControllerButtonLabel_RightStickButton = 55,
    GameControllerButtonLabel_Right1 = 56,
    GameControllerButtonLabel_Right2 = 57,
    GameControllerButtonLabel_Right3 = 58,
    GameControllerButtonLabel_Paddle1 = 59,
    GameControllerButtonLabel_Paddle2 = 60,
    GameControllerButtonLabel_Paddle3 = 61,
    GameControllerButtonLabel_Paddle4 = 62,
    GameControllerButtonLabel_Plus = 63,
    GameControllerButtonLabel_Minus = 64,
    GameControllerButtonLabel_DownLeftArrow = 65,
    GameControllerButtonLabel_DialLeft = 66,
    GameControllerButtonLabel_DialRight = 67,
    GameControllerButtonLabel_Suspension = 68,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.GameControllerSwitchKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind
{
    GameControllerSwitchKind_TwoWay = 0,
    GameControllerSwitchKind_FourWay = 1,
    GameControllerSwitchKind_EightWay = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GameControllerSwitchPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition
{
    GameControllerSwitchPosition_Center = 0,
    GameControllerSwitchPosition_Up = 1,
    GameControllerSwitchPosition_UpRight = 2,
    GameControllerSwitchPosition_Right = 3,
    GameControllerSwitchPosition_DownRight = 4,
    GameControllerSwitchPosition_Down = 5,
    GameControllerSwitchPosition_DownLeft = 6,
    GameControllerSwitchPosition_Left = 7,
    GameControllerSwitchPosition_UpLeft = 8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GamepadButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons
{
    GamepadButtons_None = 0,
    GamepadButtons_Menu = 0x1,
    GamepadButtons_View = 0x2,
    GamepadButtons_A = 0x4,
    GamepadButtons_B = 0x8,
    GamepadButtons_X = 0x10,
    GamepadButtons_Y = 0x20,
    GamepadButtons_DPadUp = 0x40,
    GamepadButtons_DPadDown = 0x80,
    GamepadButtons_DPadLeft = 0x100,
    GamepadButtons_DPadRight = 0x200,
    GamepadButtons_LeftShoulder = 0x400,
    GamepadButtons_RightShoulder = 0x800,
    GamepadButtons_LeftThumbstick = 0x1000,
    GamepadButtons_RightThumbstick = 0x2000,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    GamepadButtons_Paddle1 = 0x4000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    GamepadButtons_Paddle2 = 0x8000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    GamepadButtons_Paddle3 = 0x10000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    GamepadButtons_Paddle4 = 0x20000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Input.OptionalUINavigationButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons
{
    OptionalUINavigationButtons_None = 0,
    OptionalUINavigationButtons_Context1 = 0x1,
    OptionalUINavigationButtons_Context2 = 0x2,
    OptionalUINavigationButtons_Context3 = 0x4,
    OptionalUINavigationButtons_Context4 = 0x8,
    OptionalUINavigationButtons_PageUp = 0x10,
    OptionalUINavigationButtons_PageDown = 0x20,
    OptionalUINavigationButtons_PageLeft = 0x40,
    OptionalUINavigationButtons_PageRight = 0x80,
    OptionalUINavigationButtons_ScrollUp = 0x100,
    OptionalUINavigationButtons_ScrollDown = 0x200,
    OptionalUINavigationButtons_ScrollLeft = 0x400,
    OptionalUINavigationButtons_ScrollRight = 0x800,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.RacingWheelButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons
{
    RacingWheelButtons_None = 0,
    RacingWheelButtons_PreviousGear = 0x1,
    RacingWheelButtons_NextGear = 0x2,
    RacingWheelButtons_DPadUp = 0x4,
    RacingWheelButtons_DPadDown = 0x8,
    RacingWheelButtons_DPadLeft = 0x10,
    RacingWheelButtons_DPadRight = 0x20,
    RacingWheelButtons_Button1 = 0x40,
    RacingWheelButtons_Button2 = 0x80,
    RacingWheelButtons_Button3 = 0x100,
    RacingWheelButtons_Button4 = 0x200,
    RacingWheelButtons_Button5 = 0x400,
    RacingWheelButtons_Button6 = 0x800,
    RacingWheelButtons_Button7 = 0x1000,
    RacingWheelButtons_Button8 = 0x2000,
    RacingWheelButtons_Button9 = 0x4000,
    RacingWheelButtons_Button10 = 0x8000,
    RacingWheelButtons_Button11 = 0x10000,
    RacingWheelButtons_Button12 = 0x20000,
    RacingWheelButtons_Button13 = 0x40000,
    RacingWheelButtons_Button14 = 0x80000,
    RacingWheelButtons_Button15 = 0x100000,
    RacingWheelButtons_Button16 = 0x200000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.RequiredUINavigationButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons
{
    RequiredUINavigationButtons_None = 0,
    RequiredUINavigationButtons_Menu = 0x1,
    RequiredUINavigationButtons_View = 0x2,
    RequiredUINavigationButtons_Accept = 0x4,
    RequiredUINavigationButtons_Cancel = 0x8,
    RequiredUINavigationButtons_Up = 0x10,
    RequiredUINavigationButtons_Down = 0x20,
    RequiredUINavigationButtons_Left = 0x40,
    RequiredUINavigationButtons_Right = 0x80,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ArcadeStickReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons Buttons;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.FlightStickReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CFlightStickReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons Buttons;
    __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition HatSwitch;
    DOUBLE Roll;
    DOUBLE Pitch;
    DOUBLE Yaw;
    DOUBLE Throttle;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Gaming.Input.GamepadReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CGamepadButtons Buttons;
    DOUBLE LeftTrigger;
    DOUBLE RightTrigger;
    DOUBLE LeftThumbstickX;
    DOUBLE LeftThumbstickY;
    DOUBLE RightThumbstickX;
    DOUBLE RightThumbstickY;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Input.GamepadVibration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CGamepadVibration
{
    DOUBLE LeftMotor;
    DOUBLE RightMotor;
    DOUBLE LeftTrigger;
    DOUBLE RightTrigger;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Input.RacingWheelReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons Buttons;
    INT32 PatternShifterGear;
    DOUBLE Wheel;
    DOUBLE Throttle;
    DOUBLE Brake;
    DOUBLE Clutch;
    DOUBLE Handbrake;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.UINavigationReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CGaming_CInput_CUINavigationReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons RequiredButtons;
    __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons OptionalButtons;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IArcadeStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ArcadeStick
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStick[] = L"Windows.Gaming.Input.IArcadeStick";
/* [object, uuid("B14A539D-BEFB-4C81-8051-15ECF3B13036"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons button,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIArcadeStickVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStick
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_GetButtonLabel(This,button,value) \
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStick_GetCurrentReading(This,value) \
    ( (This)->lpVtbl->GetCurrentReading(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStick;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStick_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IArcadeStickStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ArcadeStick
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStickStatics[] = L"Windows.Gaming.Input.IArcadeStickStatics";
/* [object, uuid("5C37B8C8-37B1-4AD8-9458-200F1A30018E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ArcadeStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ArcadeStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ArcadeStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ArcadeStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ArcadeSticks )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_add_ArcadeStickAdded(This,value,token) \
    ( (This)->lpVtbl->add_ArcadeStickAdded(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_remove_ArcadeStickAdded(This,token) \
    ( (This)->lpVtbl->remove_ArcadeStickAdded(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_add_ArcadeStickRemoved(This,value,token) \
    ( (This)->lpVtbl->add_ArcadeStickRemoved(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_remove_ArcadeStickRemoved(This,token) \
    ( (This)->lpVtbl->remove_ArcadeStickRemoved(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_get_ArcadeSticks(This,value) \
    ( (This)->lpVtbl->get_ArcadeSticks(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IArcadeStickStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ArcadeStick
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IArcadeStickStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStickStatics2[] = L"Windows.Gaming.Input.IArcadeStickStatics2";
/* [object, uuid("52B5D744-BB86-445A-B59C-596F0E2A49DF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2Vtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_FromGameController(This,gameController,value) \
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IFlightStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.FlightStick
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStick_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStick_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IFlightStick[] = L"Windows.Gaming.Input.IFlightStick";
/* [object, uuid("B4A2C01C-B83B-4459-A1A9-97B03C33DA7C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HatSwitchKind )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CFlightStickButtons button,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CFlightStickReading * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIFlightStickVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIFlightStick
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_get_HatSwitchKind(This,value) \
    ( (This)->lpVtbl->get_HatSwitchKind(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_GetButtonLabel(This,button,value) \
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStick_GetCurrentReading(This,value) \
    ( (This)->lpVtbl->GetCurrentReading(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIFlightStick;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStick_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IFlightStickStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.FlightStick
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IFlightStickStatics[] = L"Windows.Gaming.Input.IFlightStickStatics";
/* [object, uuid("5514924A-FECC-435E-83DC-5CEC8A18A520"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FlightStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FlightStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FlightStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FlightStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlightSticks )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIFlightStick * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIFlightStickStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_add_FlightStickAdded(This,value,token) \
    ( (This)->lpVtbl->add_FlightStickAdded(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_remove_FlightStickAdded(This,token) \
    ( (This)->lpVtbl->remove_FlightStickAdded(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_add_FlightStickRemoved(This,value,token) \
    ( (This)->lpVtbl->add_FlightStickRemoved(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_remove_FlightStickRemoved(This,token) \
    ( (This)->lpVtbl->remove_FlightStickRemoved(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_get_FlightSticks(This,value) \
    ( (This)->lpVtbl->get_FlightSticks(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_FromGameController(This,gameController,value) \
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IGameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGameController[] = L"Windows.Gaming.Input.IGameController";
/* [object, uuid("1BAF6522-5F64-42C5-8267-B9FE2215BFBD"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HeadsetConnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HeadsetConnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HeadsetDisconnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HeadsetDisconnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UserChanged )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UserChanged )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headset )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIHeadset * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWireless )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIGameController
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIGameController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_add_HeadsetConnected(This,value,token) \
    ( (This)->lpVtbl->add_HeadsetConnected(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_remove_HeadsetConnected(This,token) \
    ( (This)->lpVtbl->remove_HeadsetConnected(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_add_HeadsetDisconnected(This,value,token) \
    ( (This)->lpVtbl->add_HeadsetDisconnected(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_remove_HeadsetDisconnected(This,token) \
    ( (This)->lpVtbl->remove_HeadsetDisconnected(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_add_UserChanged(This,value,token) \
    ( (This)->lpVtbl->add_UserChanged(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_remove_UserChanged(This,token) \
    ( (This)->lpVtbl->remove_UserChanged(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_get_Headset(This,value) \
    ( (This)->lpVtbl->get_Headset(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_get_IsWireless(This,value) \
    ( (This)->lpVtbl->get_IsWireless(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGameController;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGameControllerBatteryInfo[] = L"Windows.Gaming.Input.IGameControllerBatteryInfo";
/* [object, uuid("DCECC681-3963-4DA6-955D-553F3B6F6161"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetBatteryReport )(
        __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfoVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_TryGetBatteryReport(This,value) \
    ( (This)->lpVtbl->TryGetBatteryReport(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IGamepad
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepad[] = L"Windows.Gaming.Input.IGamepad";
/* [object, uuid("BC7BB43C-0A69-3903-9E9D-A50F86A45DE5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Vibration )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadVibration * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Vibration )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CGamepadVibration value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadReading * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIGamepad
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_get_Vibration(This,value) \
    ( (This)->lpVtbl->get_Vibration(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_put_Vibration(This,value) \
    ( (This)->lpVtbl->put_Vibration(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetCurrentReading(This,value) \
    ( (This)->lpVtbl->GetCurrentReading(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepad;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IGamepad2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGamepad
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepad2[] = L"Windows.Gaming.Input.IGamepad2";
/* [object, uuid("3C1689BD-5915-4245-B0C0-C89FAE0308FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepad2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CGamepadButtons button,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIGamepad2Vtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIGamepad2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepad2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad2_GetButtonLabel(This,button,value) \
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepad2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IGamepadStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepadStatics[] = L"Windows.Gaming.Input.IGamepadStatics";
/* [object, uuid("8BBCE529-D49C-39E9-9560-E47DDE96B7C8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GamepadAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GamepadAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GamepadRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GamepadRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gamepads )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CGamepad * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_add_GamepadAdded(This,value,token) \
    ( (This)->lpVtbl->add_GamepadAdded(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_remove_GamepadAdded(This,token) \
    ( (This)->lpVtbl->remove_GamepadAdded(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_add_GamepadRemoved(This,value,token) \
    ( (This)->lpVtbl->add_GamepadRemoved(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_remove_GamepadRemoved(This,token) \
    ( (This)->lpVtbl->remove_GamepadRemoved(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_get_Gamepads(This,value) \
    ( (This)->lpVtbl->get_Gamepads(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepadStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IGamepadStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Gamepad
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGamepadStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepadStatics2[] = L"Windows.Gaming.Input.IGamepadStatics2";
/* [object, uuid("42676DC5-0856-47C4-9213-B395504C3A3C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2Vtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_FromGameController(This,gameController,value) \
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IHeadset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Headset
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IHeadset[] = L"Windows.Gaming.Input.IHeadset";
/* [object, uuid("3FD156EF-6925-3FA8-9181-029C5223AE3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CaptureDeviceId )(
        __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RenderDeviceId )(
        __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIHeadset
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_get_CaptureDeviceId(This,value) \
    ( (This)->lpVtbl->get_CaptureDeviceId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_get_RenderDeviceId(This,value) \
    ( (This)->lpVtbl->get_RenderDeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIHeadset;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Input.IRacingWheel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RacingWheel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheel[] = L"Windows.Gaming.Input.IRacingWheel";
/* [object, uuid("F546656F-E106-4C82-A90F-554012904B85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasClutch )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasHandbrake )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasPatternShifter )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPatternShifterGear )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxWheelAngle )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WheelMotor )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons button,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIRacingWheelVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheel
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_get_HasClutch(This,value) \
    ( (This)->lpVtbl->get_HasClutch(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_get_HasHandbrake(This,value) \
    ( (This)->lpVtbl->get_HasHandbrake(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_get_HasPatternShifter(This,value) \
    ( (This)->lpVtbl->get_HasPatternShifter(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_get_MaxPatternShifterGear(This,value) \
    ( (This)->lpVtbl->get_MaxPatternShifterGear(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_get_MaxWheelAngle(This,value) \
    ( (This)->lpVtbl->get_MaxWheelAngle(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_get_WheelMotor(This,value) \
    ( (This)->lpVtbl->get_WheelMotor(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_GetButtonLabel(This,button,value) \
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheel_GetCurrentReading(This,value) \
    ( (This)->lpVtbl->GetCurrentReading(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheel;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IRacingWheelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RacingWheel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheelStatics[] = L"Windows.Gaming.Input.IRacingWheelStatics";
/* [object, uuid("3AC12CD5-581B-4936-9F94-69F1E6514C7D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RacingWheelAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RacingWheelAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RacingWheelRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RacingWheelRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RacingWheels )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_add_RacingWheelAdded(This,value,token) \
    ( (This)->lpVtbl->add_RacingWheelAdded(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_remove_RacingWheelAdded(This,token) \
    ( (This)->lpVtbl->remove_RacingWheelAdded(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_add_RacingWheelRemoved(This,value,token) \
    ( (This)->lpVtbl->add_RacingWheelRemoved(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_remove_RacingWheelRemoved(This,token) \
    ( (This)->lpVtbl->remove_RacingWheelRemoved(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_get_RacingWheels(This,value) \
    ( (This)->lpVtbl->get_RacingWheels(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IRacingWheelStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RacingWheel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IRacingWheelStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheelStatics2[] = L"Windows.Gaming.Input.IRacingWheelStatics2";
/* [object, uuid("E666BCAA-EDFD-4323-A9F6-3C384048D1ED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2Vtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_FromGameController(This,gameController,value) \
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IRawGameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RawGameController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameController[] = L"Windows.Gaming.Input.IRawGameController";
/* [object, uuid("7CAD6D91-A7E1-4F71-9A78-33E9C5DFEA62"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AxisCount )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonCount )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForceFeedbackMotors )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareProductId )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareVendorId )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SwitchCount )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [in] */INT32 buttonIndex,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [in] */UINT32 __buttonArraySize,
        /* [size_is(__buttonArraySize), out] */__RPC__out_ecount_full(__buttonArraySize) boolean * buttonArray,
        /* [in] */UINT32 __switchArraySize,
        /* [size_is(__switchArraySize), out] */__RPC__out_ecount_full(__switchArraySize) __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition * switchArray,
        /* [in] */UINT32 __axisArraySize,
        /* [size_is(__axisArraySize), out] */__RPC__out_ecount_full(__axisArraySize) DOUBLE * axisArray,
        /* [retval, out] */__RPC__out UINT64 * timestamp
        );
    HRESULT ( STDMETHODCALLTYPE *GetSwitchKind )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
        /* [in] */INT32 switchIndex,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_get_AxisCount(This,value) \
    ( (This)->lpVtbl->get_AxisCount(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_get_ButtonCount(This,value) \
    ( (This)->lpVtbl->get_ButtonCount(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_get_ForceFeedbackMotors(This,value) \
    ( (This)->lpVtbl->get_ForceFeedbackMotors(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_get_HardwareProductId(This,value) \
    ( (This)->lpVtbl->get_HardwareProductId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_get_HardwareVendorId(This,value) \
    ( (This)->lpVtbl->get_HardwareVendorId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_get_SwitchCount(This,value) \
    ( (This)->lpVtbl->get_SwitchCount(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_GetButtonLabel(This,buttonIndex,value) \
    ( (This)->lpVtbl->GetButtonLabel(This,buttonIndex,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_GetCurrentReading(This,__buttonArraySize,buttonArray,__switchArraySize,switchArray,__axisArraySize,axisArray,timestamp) \
    ( (This)->lpVtbl->GetCurrentReading(This,__buttonArraySize,buttonArray,__switchArraySize,switchArray,__axisArraySize,axisArray,timestamp) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController_GetSwitchKind(This,switchIndex,value) \
    ( (This)->lpVtbl->GetSwitchKind(This,switchIndex,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameController;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IRawGameController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RawGameController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IRawGameController
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameController2[] = L"Windows.Gaming.Input.IRawGameController2";
/* [object, uuid("43C0C035-BB73-4756-A787-3ED6BEA617BD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRawGameController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsControllers )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NonRoamableId )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIRawGameController2Vtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRawGameController2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_get_SimpleHapticsControllers(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsControllers(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_get_NonRoamableId(This,value) \
    ( (This)->lpVtbl->get_NonRoamableId(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameController2_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameController2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Gaming.Input.IRawGameControllerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.RawGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameControllerStatics[] = L"Windows.Gaming.Input.IRawGameControllerStatics";
/* [object, uuid("EB8D0792-E95A-4B19-AFC7-0A59F8BF759E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RawGameControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RawGameControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RawGameControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RawGameControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawGameControllers )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIRawGameController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_add_RawGameControllerAdded(This,value,token) \
    ( (This)->lpVtbl->add_RawGameControllerAdded(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_remove_RawGameControllerAdded(This,token) \
    ( (This)->lpVtbl->remove_RawGameControllerAdded(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_add_RawGameControllerRemoved(This,value,token) \
    ( (This)->lpVtbl->add_RawGameControllerRemoved(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_remove_RawGameControllerRemoved(This,token) \
    ( (This)->lpVtbl->remove_RawGameControllerRemoved(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_get_RawGameControllers(This,value) \
    ( (This)->lpVtbl->get_RawGameControllers(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_FromGameController(This,gameController,value) \
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Gaming.Input.IUINavigationController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.UINavigationController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IGameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationController[] = L"Windows.Gaming.Input.IUINavigationController";
/* [object, uuid("E5AEEFDD-F50E-4A55-8CDC-D33229548175"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CUINavigationReading * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOptionalButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons button,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRequiredButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons button,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationController
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_GetCurrentReading(This,value) \
    ( (This)->lpVtbl->GetCurrentReading(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_GetOptionalButtonLabel(This,button,value) \
    ( (This)->lpVtbl->GetOptionalButtonLabel(This,button,value) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationController_GetRequiredButtonLabel(This,button,value) \
    ( (This)->lpVtbl->GetRequiredButtonLabel(This,button,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationController;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IUINavigationControllerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.UINavigationController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationControllerStatics[] = L"Windows.Gaming.Input.IUINavigationControllerStatics";
/* [object, uuid("2F14930A-F6F8-4A48-8D89-94786CCA0C2E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UINavigationControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UINavigationControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UINavigationControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UINavigationControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UINavigationControllers )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_add_UINavigationControllerAdded(This,value,token) \
    ( (This)->lpVtbl->add_UINavigationControllerAdded(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_remove_UINavigationControllerAdded(This,token) \
    ( (This)->lpVtbl->remove_UINavigationControllerAdded(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_add_UINavigationControllerRemoved(This,value,token) \
    ( (This)->lpVtbl->add_UINavigationControllerRemoved(This,value,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_remove_UINavigationControllerRemoved(This,token) \
    ( (This)->lpVtbl->remove_UINavigationControllerRemoved(This,token) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_get_UINavigationControllers(This,value) \
    ( (This)->lpVtbl->get_UINavigationControllers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.IUINavigationControllerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.UINavigationController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.IUINavigationControllerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationControllerStatics2[] = L"Windows.Gaming.Input.IUINavigationControllerStatics2";
/* [object, uuid("E0CB28E3-B20B-4B0B-9ED4-F3D53CEC0DE4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2Vtbl;

interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_FromGameController(This,gameController,value) \
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.ArcadeStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IArcadeStickStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IArcadeStickStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IArcadeStick ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ArcadeStick_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ArcadeStick_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ArcadeStick[] = L"Windows.Gaming.Input.ArcadeStick";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.FlightStick
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IFlightStickStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IFlightStick ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_FlightStick_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_FlightStick_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_FlightStick[] = L"Windows.Gaming.Input.FlightStick";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.Gamepad
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IGamepadStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IGamepadStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IGamepad ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGamepad2
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Gamepad_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Gamepad_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Gamepad[] = L"Windows.Gaming.Input.Gamepad";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Input.Headset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IHeadset ** Default Interface **
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Headset_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Headset_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Headset[] = L"Windows.Gaming.Input.Headset";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Input.RacingWheel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IRacingWheelStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IRacingWheelStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IRacingWheel ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_RacingWheel_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_RacingWheel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_RacingWheel[] = L"Windows.Gaming.Input.RacingWheel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.RawGameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IRawGameControllerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IRawGameController ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *    Windows.Gaming.Input.IRawGameController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_RawGameController_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_RawGameController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_RawGameController[] = L"Windows.Gaming.Input.RawGameController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Gaming.Input.UINavigationController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.IUINavigationControllerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Gaming.Input.IUINavigationControllerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.IUINavigationController ** Default Interface **
 *    Windows.Gaming.Input.IGameController
 *    Windows.Gaming.Input.IGameControllerBatteryInfo
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_UINavigationController_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_UINavigationController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_UINavigationController[] = L"Windows.Gaming.Input.UINavigationController";
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
#endif // __windows2Egaming2Einput_p_h__

#endif // __windows2Egaming2Einput_h__
