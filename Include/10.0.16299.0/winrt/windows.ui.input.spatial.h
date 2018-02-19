/* Header file automatically generated from windows.ui.input.spatial.idl */
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
#ifndef __windows2Eui2Einput2Espatial_h__
#define __windows2Eui2Einput2Espatial_h__
#ifndef __windows2Eui2Einput2Espatial_p_h__
#define __windows2Eui2Einput2Espatial_p_h__


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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Perception.h"
#include "Windows.Perception.People.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialGestureRecognizer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialGestureRecognizerFactory;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialHoldCanceledEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs ABI::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialHoldCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialHoldStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteraction;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction ABI::Windows::UI::Input::Spatial::ISpatialInteraction

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionController;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController ABI::Windows::UI::Input::Spatial::ISpatialInteractionController

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionController2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 ABI::Windows::UI::Input::Spatial::ISpatialInteractionController2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionControllerProperties;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties ABI::Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionDetectedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionDetectedEventArgs2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 ABI::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionManager;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionManagerStatics;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics ABI::Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSource;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource ABI::Windows::UI::Input::Spatial::ISpatialInteractionSource

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSource2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 ABI::Windows::UI::Input::Spatial::ISpatialInteractionSource2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSource3;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 ABI::Windows::UI::Input::Spatial::ISpatialInteractionSource3

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceEventArgs2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceLocation;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceLocation2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceLocation3;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceProperties;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceState;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialInteractionSourceState2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialManipulationCanceledEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs ABI::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialManipulationCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialManipulationDelta;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta ABI::Windows::UI::Input::Spatial::ISpatialManipulationDelta

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialManipulationStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialManipulationUpdatedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialNavigationCanceledEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs ABI::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialNavigationCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialNavigationStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialNavigationUpdatedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialPointerInteractionSourcePose;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose ABI::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialPointerInteractionSourcePose2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 ABI::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialPointerPose;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose ABI::Windows::UI::Input::Spatial::ISpatialPointerPose

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialPointerPose2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 ABI::Windows::UI::Input::Spatial::ISpatialPointerPose2

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialPointerPoseStatics;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics ABI::Windows::UI::Input::Spatial::ISpatialPointerPoseStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialRecognitionEndedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialRecognitionStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    interface ISpatialTappedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs ABI::Windows::UI::Input::Spatial::ISpatialTappedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionSourceState;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("23f50032-907e-5d73-bbdc-f7563de655c4"))
IIterator<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*, ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*> __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t;
#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>
//#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7ecce0f5-0874-506f-8d42-4c9519156407"))
IIterable<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*, ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*> __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t;
#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>
//#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dfdcf091-6e3c-5e5b-a193-03acc414c921"))
IVectorView<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*, ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState*> __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t;
#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>
//#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialGestureRecognizer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialHoldCanceledEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6a715963-c49f-5f3d-bfec-952700308860"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialHoldCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e425d80e-8c18-5375-b600-1dd7a11dba5e"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialHoldStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7537dd12-02b8-5132-8ff7-90c80ef454d1"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialManipulationCanceledEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b92a6754-3946-5353-b8f9-2a07eb0e8886"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialManipulationCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("10dac914-bea2-5d67-8607-dc470ea1dcd8"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialManipulationStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a123252b-cfe8-5cfb-b61c-f2dc011eb12e"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialManipulationUpdatedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cecbe023-3c49-530e-a010-8c0c3cbd3088"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialNavigationCanceledEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9947ea8e-eb4d-5f93-9fd9-2ade6470bc5d"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialNavigationCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f0d459df-ebd3-5388-b0a9-5f44bcd6f58f"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialNavigationStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5419cadc-2600-527b-9398-1744318d0618"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialNavigationUpdatedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a7216b90-c175-5a28-b500-a445f0751c5b"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialRecognitionEndedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("afa7fad7-3fd7-5c81-8802-195c523f6e7b"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialRecognitionStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f2bd99d6-99fa-5599-a14a-1f7a7a92e3d7"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialTappedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("630205a4-2f93-5022-b7b8-c43ed428498a"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialTappedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*, ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialTappedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialTappedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialGestureRecognizer, Windows.UI.Input.Spatial.SpatialTappedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::SpatialTappedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialTappedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer*,ABI::Windows::UI::Input::Spatial::ISpatialTappedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionManager;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionDetectedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0f223f8f-f220-5388-8fe6-b3b7e7930987"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialInteractionManager*, ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager, Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionSourceEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ae831d66-70f0-5371-866f-a3fc8b60e2d8"))
ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialInteractionManager*, ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs*, ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager, Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Spatial::SpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager*,ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamWithContentType;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3dddecf4-1d39-58e8-83b1-dbed541c7f35"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c4a57c5e-32b0-55b3-ad13-ce1c23041ed6"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1ee770ff-c954-59ca-a754-6199a9be282c"))
IReference<struct ABI::Windows::Foundation::Numerics::Vector3> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Vector3> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Numerics::Vector3> __FIReference_1_Windows__CFoundation__CNumerics__CVector3_t;
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CVector3_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector3>
//#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector3>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Quaternion;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b27004bb-c014-5dce-9a21-799c5a3c1461"))
IReference<struct ABI::Windows::Foundation::Numerics::Quaternion> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Quaternion> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Quaternion>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Numerics::Quaternion> __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Quaternion>
//#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Quaternion>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_USE */





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
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Quaternion Quaternion;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace People {
                class HeadPose;
            } /* Windows */
        } /* Perception */
    } /* People */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace People {
                interface IHeadPose;
            } /* Windows */
        } /* Perception */
    } /* People */} /* ABI */
#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose ABI::Windows::Perception::People::IHeadPose

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Perception {
            class PerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            interface IPerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */
#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp ABI::Windows::Perception::IPerceptionTimestamp

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialCoordinateSystem;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialCoordinateSystem;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    
                    typedef enum SpatialGestureSettings : unsigned int SpatialGestureSettings;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    
                    typedef enum SpatialInteractionPressKind : int SpatialInteractionPressKind;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    
                    typedef enum SpatialInteractionSourceHandedness : int SpatialInteractionSourceHandedness;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    
                    typedef enum SpatialInteractionSourceKind : int SpatialInteractionSourceKind;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    
                    typedef enum SpatialInteractionSourcePositionAccuracy : int SpatialInteractionSourcePositionAccuracy;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */














































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteraction;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionController;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionControllerProperties;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionSource;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionSourceLocation;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialInteractionSourceProperties;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialManipulationDelta;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialPointerInteractionSourcePose;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    class SpatialPointerPose;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */















/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialGestureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [v1_enum, flags, contract] */
                    enum SpatialGestureSettings : unsigned int
                    {
                        SpatialGestureSettings_None = 0,
                        SpatialGestureSettings_Tap = 0x1,
                        SpatialGestureSettings_DoubleTap = 0x2,
                        SpatialGestureSettings_Hold = 0x4,
                        SpatialGestureSettings_ManipulationTranslate = 0x8,
                        SpatialGestureSettings_NavigationX = 0x10,
                        SpatialGestureSettings_NavigationY = 0x20,
                        SpatialGestureSettings_NavigationZ = 0x40,
                        SpatialGestureSettings_NavigationRailsX = 0x80,
                        SpatialGestureSettings_NavigationRailsY = 0x100,
                        SpatialGestureSettings_NavigationRailsZ = 0x200,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(SpatialGestureSettings)
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionPressKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [v1_enum, contract] */
                    enum SpatialInteractionPressKind : int
                    {
                        SpatialInteractionPressKind_None = 0,
                        SpatialInteractionPressKind_Select = 1,
                        SpatialInteractionPressKind_Menu = 2,
                        SpatialInteractionPressKind_Grasp = 3,
                        SpatialInteractionPressKind_Touchpad = 4,
                        SpatialInteractionPressKind_Thumbstick = 5,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [v1_enum, contract] */
                    enum SpatialInteractionSourceHandedness : int
                    {
                        SpatialInteractionSourceHandedness_Unspecified = 0,
                        SpatialInteractionSourceHandedness_Left = 1,
                        SpatialInteractionSourceHandedness_Right = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionSourceKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [v1_enum, contract] */
                    enum SpatialInteractionSourceKind : int
                    {
                        SpatialInteractionSourceKind_Other = 0,
                        SpatialInteractionSourceKind_Hand = 1,
                        SpatialInteractionSourceKind_Voice = 2,
                        SpatialInteractionSourceKind_Controller = 3,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionSourcePositionAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [v1_enum, contract] */
                    enum SpatialInteractionSourcePositionAccuracy : int
                    {
                        SpatialInteractionSourcePositionAccuracy_High = 0,
                        SpatialInteractionSourcePositionAccuracy_Approximate = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialGestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialGestureRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialGestureRecognizer[] = L"Windows.UI.Input.Spatial.ISpatialGestureRecognizer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("71605BCC-0C35-4673-ADBD-CC04CAA6EF45"), exclusiveto, contract] */
                    MIDL_INTERFACE("71605BCC-0C35-4673-ADBD-CC04CAA6EF45")
                    ISpatialGestureRecognizer : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RecognitionStarted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RecognitionStarted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RecognitionEnded(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RecognitionEnded(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Tapped(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Tapped(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HoldStarted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HoldStarted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HoldCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HoldCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HoldCanceled(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HoldCanceled(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationStarted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationStarted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationUpdated(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationUpdated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationCanceled(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationCanceled(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NavigationStarted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NavigationStarted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NavigationUpdated(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NavigationUpdated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NavigationCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NavigationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NavigationCanceled(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NavigationCanceled(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CaptureInteraction(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Spatial::ISpatialInteraction * interaction
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CancelPendingGestures(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TrySetGestureSettings(
                            /* [in] */ABI::Windows::UI::Input::Spatial::SpatialGestureSettings settings,
                            /* [retval, out] */__RPC__out boolean * succeeded
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GestureSettings(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialGestureSettings * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialGestureRecognizer=_uuidof(ISpatialGestureRecognizer);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialGestureRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialGestureRecognizerFactory[] = L"Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("77214186-57B9-3150-8382-698B24E264D0"), exclusiveto, contract] */
                    MIDL_INTERFACE("77214186-57B9-3150-8382-698B24E264D0")
                    ISpatialGestureRecognizerFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */ABI::Windows::UI::Input::Spatial::SpatialGestureSettings settings,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialGestureRecognizerFactory=_uuidof(ISpatialGestureRecognizerFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("5DFCB667-4CAA-4093-8C35-B601A839F31B"), exclusiveto, contract] */
                    MIDL_INTERFACE("5DFCB667-4CAA-4093-8C35-B601A839F31B")
                    ISpatialHoldCanceledEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialHoldCanceledEventArgs=_uuidof(ISpatialHoldCanceledEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("3F64470B-4CFD-43DA-8DC4-E64552173971"), exclusiveto, contract] */
                    MIDL_INTERFACE("3F64470B-4CFD-43DA-8DC4-E64552173971")
                    ISpatialHoldCompletedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialHoldCompletedEventArgs=_uuidof(ISpatialHoldCompletedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("8E343D79-ACB6-4144-8615-2CFBA8A3CB3F"), exclusiveto, contract] */
                    MIDL_INTERFACE("8E343D79-ACB6-4144-8615-2CFBA8A3CB3F")
                    ISpatialHoldStartedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPointerPose(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialHoldStartedEventArgs=_uuidof(ISpatialHoldStartedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteraction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteraction
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteraction[] = L"Windows.UI.Input.Spatial.ISpatialInteraction";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("FC967639-88E6-4646-9112-4344AAEC9DFA"), exclusiveto, contract] */
                    MIDL_INTERFACE("FC967639-88E6-4646-9112-4344AAEC9DFA")
                    ISpatialInteraction : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceState(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteraction=_uuidof(ISpatialInteraction);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionController[] = L"Windows.UI.Input.Spatial.ISpatialInteractionController";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("5F0E5BA3-0954-4E97-86C5-E7F30B114DFD"), exclusiveto, contract] */
                    MIDL_INTERFACE("5F0E5BA3-0954-4E97-86C5-E7F30B114DFD")
                    ISpatialInteractionController : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasTouchpad(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasThumbstick(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VendorId(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionController=_uuidof(ISpatialInteractionController);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionController2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionController2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("35B6D924-C7A2-49B7-B72E-5436B2FB8F9C"), exclusiveto, contract] */
                    MIDL_INTERFACE("35B6D924-C7A2-49B7-B72E-5436B2FB8F9C")
                    ISpatialInteractionController2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TryGetRenderableModelAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionController2=_uuidof(ISpatialInteractionController2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionControllerProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties[] = L"Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("61056FB1-7BA9-4E35-B93F-9272CBA9B28B"), exclusiveto, contract] */
                    MIDL_INTERFACE("61056FB1-7BA9-4E35-B93F-9272CBA9B28B")
                    ISpatialInteractionControllerProperties : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTouchpadTouched(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTouchpadPressed(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsThumbstickPressed(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThumbstickX(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThumbstickY(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchpadX(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchpadY(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionControllerProperties=_uuidof(ISpatialInteractionControllerProperties);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("075878E4-5961-3B41-9DFB-CEA5D89CC38A"), exclusiveto, contract] */
                    MIDL_INTERFACE("075878E4-5961-3B41-9DFB-CEA5D89CC38A")
                    ISpatialInteractionDetectedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPointerPose(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Interaction(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteraction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionDetectedEventArgs=_uuidof(ISpatialInteractionDetectedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("7B263E93-5F13-419C-97D5-834678266AA6"), exclusiveto, contract] */
                    MIDL_INTERFACE("7B263E93-5F13-419C-97D5-834678266AA6")
                    ISpatialInteractionDetectedEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSource(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSource * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionDetectedEventArgs2=_uuidof(ISpatialInteractionDetectedEventArgs2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionManager[] = L"Windows.UI.Input.Spatial.ISpatialInteractionManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("32A64EA8-A15A-3995-B8BD-80513CB5ADEF"), exclusiveto, contract] */
                    MIDL_INTERFACE("32A64EA8-A15A-3995-B8BD-80513CB5ADEF")
                    ISpatialInteractionManager : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SourceDetected(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SourceDetected(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SourceLost(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SourceLost(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SourceUpdated(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SourceUpdated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SourcePressed(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SourcePressed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SourceReleased(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SourceReleased(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InteractionDetected(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InteractionDetected(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDetectedSourcesAtTimestamp(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::IPerceptionTimestamp * timeStamp,
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionManager=_uuidof(ISpatialInteractionManager);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics[] = L"Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("00E31FA6-8CA2-30BF-91FE-D9CB4A008990"), exclusiveto, contract] */
                    MIDL_INTERFACE("00E31FA6-8CA2-30BF-91FE-D9CB4A008990")
                    ISpatialInteractionManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionManagerStatics=_uuidof(ISpatialInteractionManagerStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("FB5433BA-B0B3-3148-9F3B-E9F5DE568F5D"), exclusiveto, contract] */
                    MIDL_INTERFACE("FB5433BA-B0B3-3148-9F3B-E9F5DE568F5D")
                    ISpatialInteractionSource : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSource=_uuidof(ISpatialInteractionSource);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSource2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("E4C5B70C-0470-4028-88C0-A0EB44D34EFE"), exclusiveto, contract] */
                    MIDL_INTERFACE("E4C5B70C-0470-4028-88C0-A0EB44D34EFE")
                    ISpatialInteractionSource2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPointingSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMenuSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGraspSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Controller(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionController * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetStateAtTimestamp(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::IPerceptionTimestamp * timestamp,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSource2=_uuidof(ISpatialInteractionSource2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSource3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSource2
 *     Windows.UI.Input.Spatial.ISpatialInteractionSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("0406D9F9-9AFD-44F9-85DC-700023A962E3"), exclusiveto, contract] */
                    MIDL_INTERFACE("0406D9F9-9AFD-44F9-85DC-700023A962E3")
                    ISpatialInteractionSource3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handedness(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSource3=_uuidof(ISpatialInteractionSource3);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("23B786CF-EC23-3979-B27C-EB0E12FEB7C7"), exclusiveto, contract] */
                    MIDL_INTERFACE("23B786CF-EC23-3979-B27C-EB0E12FEB7C7")
                    ISpatialInteractionSourceEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceEventArgs=_uuidof(ISpatialInteractionSourceEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("D8B4B467-E648-4D52-AB49-E0D227199F63"), exclusiveto, contract] */
                    MIDL_INTERFACE("D8B4B467-E648-4D52-AB49-E0D227199F63")
                    ISpatialInteractionSourceEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PressKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionPressKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceEventArgs2=_uuidof(ISpatialInteractionSourceEventArgs2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("EA4696C4-7E8B-30CA-BCC5-C77189CEA30A"), exclusiveto, contract] */
                    MIDL_INTERFACE("EA4696C4-7E8B-30CA-BCC5-C77189CEA30A")
                    ISpatialInteractionSourceLocation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocity(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceLocation=_uuidof(ISpatialInteractionSourceLocation);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("4C671045-3917-40FC-A9AC-31C9CF5FF91B"), exclusiveto, contract] */
                    MIDL_INTERFACE("4C671045-3917-40FC-A9AC-31C9CF5FF91B")
                    ISpatialInteractionSourceLocation2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceLocation2=_uuidof(ISpatialInteractionSourceLocation2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("6702E65E-E915-4CFB-9C1B-0538EFC86687"), exclusiveto, contract] */
                    MIDL_INTERFACE("6702E65E-E915-4CFB-9C1B-0538EFC86687")
                    ISpatialInteractionSourceLocation3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionAccuracy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AngularVelocity(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourcePointerPose(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceLocation3=_uuidof(ISpatialInteractionSourceLocation3);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("05604542-3EF7-3222-9F53-63C9CB7E3BC7"), exclusiveto, contract] */
                    MIDL_INTERFACE("05604542-3EF7-3222-9F53-63C9CB7E3BC7")
                    ISpatialInteractionSourceProperties : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TryGetSourceLossMitigationDirection(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceLossRisk(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetLocation(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceProperties=_uuidof(ISpatialInteractionSourceProperties);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceState
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceState[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("D5C475EF-4B63-37EC-98B9-9FC652B9D2F2"), exclusiveto, contract] */
                    MIDL_INTERFACE("D5C475EF-4B63-37EC-98B9-9FC652B9D2F2")
                    ISpatialInteractionSourceState : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSource * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPressed(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::IPerceptionTimestamp * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPointerPose(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceState=_uuidof(ISpatialInteractionSourceState);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceState
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSourceState
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("45F6D0BD-1773-492E-9BA3-8AC1CBE77C08"), exclusiveto, contract] */
                    MIDL_INTERFACE("45F6D0BD-1773-492E-9BA3-8AC1CBE77C08")
                    ISpatialInteractionSourceState2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelectPressed(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMenuPressed(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGrasped(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectPressedValue(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControllerProperties(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialInteractionSourceState2=_uuidof(ISpatialInteractionSourceState2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("2D40D1CB-E7DA-4220-B0BF-819301674780"), exclusiveto, contract] */
                    MIDL_INTERFACE("2D40D1CB-E7DA-4220-B0BF-819301674780")
                    ISpatialManipulationCanceledEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialManipulationCanceledEventArgs=_uuidof(ISpatialManipulationCanceledEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("05086802-F301-4343-9250-2FBAA5F87A37"), exclusiveto, contract] */
                    MIDL_INTERFACE("05086802-F301-4343-9250-2FBAA5F87A37")
                    ISpatialManipulationCompletedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetCumulativeDelta(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialManipulationDelta * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialManipulationCompletedEventArgs=_uuidof(ISpatialManipulationCompletedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationDelta
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationDelta[] = L"Windows.UI.Input.Spatial.ISpatialManipulationDelta";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("A7EC967A-D123-3A81-A15B-992923DCBE91"), exclusiveto, contract] */
                    MIDL_INTERFACE("A7EC967A-D123-3A81-A15B-992923DCBE91")
                    ISpatialManipulationDelta : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Translation(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialManipulationDelta=_uuidof(ISpatialManipulationDelta);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("A1D6BBCE-42A5-377B-ADA6-D28E3D384737"), exclusiveto, contract] */
                    MIDL_INTERFACE("A1D6BBCE-42A5-377B-ADA6-D28E3D384737")
                    ISpatialManipulationStartedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPointerPose(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialManipulationStartedEventArgs=_uuidof(ISpatialManipulationStartedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("5F230B9B-60C6-4DC6-BDC9-9F4A6F15FE49"), exclusiveto, contract] */
                    MIDL_INTERFACE("5F230B9B-60C6-4DC6-BDC9-9F4A6F15FE49")
                    ISpatialManipulationUpdatedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetCumulativeDelta(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialManipulationDelta * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialManipulationUpdatedEventArgs=_uuidof(ISpatialManipulationUpdatedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("CE503EDC-E8A5-46F0-92D4-3C122B35112A"), exclusiveto, contract] */
                    MIDL_INTERFACE("CE503EDC-E8A5-46F0-92D4-3C122B35112A")
                    ISpatialNavigationCanceledEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialNavigationCanceledEventArgs=_uuidof(ISpatialNavigationCanceledEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("012E80B7-AF3B-42C2-9E41-BAAA0E721F3A"), exclusiveto, contract] */
                    MIDL_INTERFACE("012E80B7-AF3B-42C2-9E41-BAAA0E721F3A")
                    ISpatialNavigationCompletedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NormalizedOffset(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialNavigationCompletedEventArgs=_uuidof(ISpatialNavigationCompletedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("754A348A-FB64-4656-8EBD-9DEECAAFE475"), exclusiveto, contract] */
                    MIDL_INTERFACE("754A348A-FB64-4656-8EBD-9DEECAAFE475")
                    ISpatialNavigationStartedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPointerPose(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsNavigatingX(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsNavigatingY(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsNavigatingZ(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialNavigationStartedEventArgs=_uuidof(ISpatialNavigationStartedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("9B713FD7-839D-4A74-8732-45466FC044B5"), exclusiveto, contract] */
                    MIDL_INTERFACE("9B713FD7-839D-4A74-8732-45466FC044B5")
                    ISpatialNavigationUpdatedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NormalizedOffset(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialNavigationUpdatedEventArgs=_uuidof(ISpatialNavigationUpdatedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose[] = L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("A7104307-2C2B-4D3A-92A7-80CED7C4A0D0"), exclusiveto, contract] */
                    MIDL_INTERFACE("A7104307-2C2B-4D3A-92A7-80CED7C4A0D0")
                    ISpatialPointerInteractionSourcePose : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForwardDirection(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpDirection(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialPointerInteractionSourcePose=_uuidof(ISpatialPointerInteractionSourcePose);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose2[] = L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("ECCD86B8-52DB-469F-9E3F-80C47F74BCE9"), exclusiveto, contract] */
                    MIDL_INTERFACE("ECCD86B8-52DB-469F-9E3F-80C47F74BCE9")
                    ISpatialPointerInteractionSourcePose2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Quaternion * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionAccuracy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialPointerInteractionSourcePose2=_uuidof(ISpatialPointerInteractionSourcePose2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPose[] = L"Windows.UI.Input.Spatial.ISpatialPointerPose";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("6953A42E-C17E-357D-97A1-7269D0ED2D10"), exclusiveto, contract] */
                    MIDL_INTERFACE("6953A42E-C17E-357D-97A1-7269D0ED2D10")
                    ISpatialPointerPose : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::IPerceptionTimestamp * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Head(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::People::IHeadPose * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialPointerPose=_uuidof(ISpatialPointerPose);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerPose2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerPose
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialPointerPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPose2[] = L"Windows.UI.Input.Spatial.ISpatialPointerPose2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("9D202B17-954E-4E0C-96D1-B6790B6FC2FD"), exclusiveto, contract] */
                    MIDL_INTERFACE("9D202B17-954E-4E0C-96D1-B6790B6FC2FD")
                    ISpatialPointerPose2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TryGetInteractionSourcePose(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Spatial::ISpatialInteractionSource * source,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialPointerPose2=_uuidof(ISpatialPointerPose2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPoseStatics[] = L"Windows.UI.Input.Spatial.ISpatialPointerPoseStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("A25591A9-ACA1-3EE0-9816-785CFB2E3FB8"), exclusiveto, contract] */
                    MIDL_INTERFACE("A25591A9-ACA1-3EE0-9816-785CFB2E3FB8")
                    ISpatialPointerPoseStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TryGetAtTimestamp(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::IPerceptionTimestamp * timestamp,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialPointerPoseStatics=_uuidof(ISpatialPointerPoseStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialRecognitionEndedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("0E35F5CB-3F75-43F3-AC81-D1DC2DF9B1FB"), exclusiveto, contract] */
                    MIDL_INTERFACE("0E35F5CB-3F75-43F3-AC81-D1DC2DF9B1FB")
                    ISpatialRecognitionEndedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialRecognitionEndedEventArgs=_uuidof(ISpatialRecognitionEndedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("24DA128F-0008-4A6D-AA50-2A76F9CFB264"), exclusiveto, contract] */
                    MIDL_INTERFACE("24DA128F-0008-4A6D-AA50-2A76F9CFB264")
                    ISpatialRecognitionStartedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPointerPose(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsGesturePossible(
                            /* [in] */ABI::Windows::UI::Input::Spatial::SpatialGestureSettings gesture,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialRecognitionStartedEventArgs=_uuidof(ISpatialRecognitionStartedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialTappedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialTappedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialTappedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Spatial {
                    /* [object, uuid("296D83DE-F444-4AA1-B2BF-9DC88D567DA6"), exclusiveto, contract] */
                    MIDL_INTERFACE("296D83DE-F444-4AA1-B2BF-9DC88D567DA6")
                    ISpatialTappedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetPointerPose(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Spatial::ISpatialPointerPose * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TapCount(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialTappedEventArgs=_uuidof(ISpatialTappedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialGestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialGestureRecognizer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialGestureRecognizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialGestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialGestureRecognizer[] = L"Windows.UI.Input.Spatial.SpatialGestureRecognizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCanceledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCanceledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteraction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteraction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteraction_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteraction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteraction[] = L"Windows.UI.Input.Spatial.SpatialInteraction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionController ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionController_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionController[] = L"Windows.UI.Input.Spatial.SpatialInteractionController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionControllerProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionControllerProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionControllerProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionControllerProperties[] = L"Windows.UI.Input.Spatial.SpatialInteractionControllerProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionDetectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionDetectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionDetectedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionManager[] = L"Windows.UI.Input.Spatial.SpatialInteractionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSource ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSource2
 *    Windows.UI.Input.Spatial.ISpatialInteractionSource3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSource[] = L"Windows.UI.Input.Spatial.SpatialInteractionSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceEventArgs[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceLocation_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceLocation[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceProperties[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceState ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceState_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceState_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceState[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceState";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCanceledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCanceledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationDelta ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationDelta_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationDelta_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationDelta[] = L"Windows.UI.Input.Spatial.SpatialManipulationDelta";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCanceledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCanceledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerInteractionSourcePose_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerInteractionSourcePose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialPointerInteractionSourcePose[] = L"Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialPointerPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Spatial.ISpatialPointerPoseStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialPointerPose ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialPointerPose2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerPose_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerPose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialPointerPose[] = L"Windows.UI.Input.Spatial.SpatialPointerPose";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionEndedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionEndedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialRecognitionEndedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialRecognitionStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialTappedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialTappedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialTappedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialTappedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;

typedef struct __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3;

#if !defined(____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3 __FIReference_1_Windows__CFoundation__CNumerics__CVector3;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CVector3;

typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;

#if !defined(____FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion;

typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

interface __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;







#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose __x_ABI_CWindows_CPerception_CPeople_CIHeadPose;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__










typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings;


typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind;


typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness;


typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind;


typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy;
















































































/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialGestureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings
{
    SpatialGestureSettings_None = 0,
    SpatialGestureSettings_Tap = 0x1,
    SpatialGestureSettings_DoubleTap = 0x2,
    SpatialGestureSettings_Hold = 0x4,
    SpatialGestureSettings_ManipulationTranslate = 0x8,
    SpatialGestureSettings_NavigationX = 0x10,
    SpatialGestureSettings_NavigationY = 0x20,
    SpatialGestureSettings_NavigationZ = 0x40,
    SpatialGestureSettings_NavigationRailsX = 0x80,
    SpatialGestureSettings_NavigationRailsY = 0x100,
    SpatialGestureSettings_NavigationRailsZ = 0x200,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionPressKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind
{
    SpatialInteractionPressKind_None = 0,
    SpatialInteractionPressKind_Select = 1,
    SpatialInteractionPressKind_Menu = 2,
    SpatialInteractionPressKind_Grasp = 3,
    SpatialInteractionPressKind_Touchpad = 4,
    SpatialInteractionPressKind_Thumbstick = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness
{
    SpatialInteractionSourceHandedness_Unspecified = 0,
    SpatialInteractionSourceHandedness_Left = 1,
    SpatialInteractionSourceHandedness_Right = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionSourceKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind
{
    SpatialInteractionSourceKind_Other = 0,
    SpatialInteractionSourceKind_Hand = 1,
    SpatialInteractionSourceKind_Voice = 2,
    SpatialInteractionSourceKind_Controller = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.Input.Spatial.SpatialInteractionSourcePositionAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy
{
    SpatialInteractionSourcePositionAccuracy_High = 0,
    SpatialInteractionSourcePositionAccuracy_Approximate = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialGestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialGestureRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialGestureRecognizer[] = L"Windows.UI.Input.Spatial.ISpatialGestureRecognizer";
/* [object, uuid("71605BCC-0C35-4673-ADBD-CC04CAA6EF45"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RecognitionStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RecognitionStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RecognitionEnded )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RecognitionEnded )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HoldStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HoldStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HoldCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HoldCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HoldCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HoldCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NavigationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NavigationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NavigationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NavigationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NavigationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NavigationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NavigationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NavigationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CaptureInteraction )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * interaction
        );
    HRESULT ( STDMETHODCALLTYPE *CancelPendingGestures )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetGestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings settings,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_RecognitionStarted(This,handler,token) \
    ( (This)->lpVtbl->add_RecognitionStarted(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_RecognitionStarted(This,token) \
    ( (This)->lpVtbl->remove_RecognitionStarted(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_RecognitionEnded(This,handler,token) \
    ( (This)->lpVtbl->add_RecognitionEnded(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_RecognitionEnded(This,token) \
    ( (This)->lpVtbl->remove_RecognitionEnded(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_Tapped(This,handler,token) \
    ( (This)->lpVtbl->add_Tapped(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_Tapped(This,token) \
    ( (This)->lpVtbl->remove_Tapped(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_HoldStarted(This,handler,token) \
    ( (This)->lpVtbl->add_HoldStarted(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_HoldStarted(This,token) \
    ( (This)->lpVtbl->remove_HoldStarted(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_HoldCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_HoldCompleted(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_HoldCompleted(This,token) \
    ( (This)->lpVtbl->remove_HoldCompleted(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_HoldCanceled(This,handler,token) \
    ( (This)->lpVtbl->add_HoldCanceled(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_HoldCanceled(This,token) \
    ( (This)->lpVtbl->remove_HoldCanceled(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_ManipulationStarted(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationStarted(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_ManipulationStarted(This,token) \
    ( (This)->lpVtbl->remove_ManipulationStarted(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_ManipulationUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationUpdated(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_ManipulationUpdated(This,token) \
    ( (This)->lpVtbl->remove_ManipulationUpdated(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_ManipulationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_ManipulationCompleted(This,token) \
    ( (This)->lpVtbl->remove_ManipulationCompleted(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_ManipulationCanceled(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationCanceled(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_ManipulationCanceled(This,token) \
    ( (This)->lpVtbl->remove_ManipulationCanceled(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_NavigationStarted(This,handler,token) \
    ( (This)->lpVtbl->add_NavigationStarted(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_NavigationStarted(This,token) \
    ( (This)->lpVtbl->remove_NavigationStarted(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_NavigationUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_NavigationUpdated(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_NavigationUpdated(This,token) \
    ( (This)->lpVtbl->remove_NavigationUpdated(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_NavigationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_NavigationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_NavigationCompleted(This,token) \
    ( (This)->lpVtbl->remove_NavigationCompleted(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_add_NavigationCanceled(This,handler,token) \
    ( (This)->lpVtbl->add_NavigationCanceled(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_remove_NavigationCanceled(This,token) \
    ( (This)->lpVtbl->remove_NavigationCanceled(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_CaptureInteraction(This,interaction) \
    ( (This)->lpVtbl->CaptureInteraction(This,interaction) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_CancelPendingGestures(This) \
    ( (This)->lpVtbl->CancelPendingGestures(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_TrySetGestureSettings(This,settings,succeeded) \
    ( (This)->lpVtbl->TrySetGestureSettings(This,settings,succeeded) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_get_GestureSettings(This,value) \
    ( (This)->lpVtbl->get_GestureSettings(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialGestureRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialGestureRecognizerFactory[] = L"Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory";
/* [object, uuid("77214186-57B9-3150-8382-698B24E264D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings settings,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactoryVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_Create(This,settings,value) \
    ( (This)->lpVtbl->Create(This,settings,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs";
/* [object, uuid("5DFCB667-4CAA-4093-8C35-B601A839F31B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs";
/* [object, uuid("3F64470B-4CFD-43DA-8DC4-E64552173971"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs";
/* [object, uuid("8E343D79-ACB6-4144-8615-2CFBA8A3CB3F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_TryGetPointerPose(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteraction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteraction
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteraction[] = L"Windows.UI.Input.Spatial.ISpatialInteraction";
/* [object, uuid("FC967639-88E6-4646-9112-4344AAEC9DFA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceState )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_get_SourceState(This,value) \
    ( (This)->lpVtbl->get_SourceState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionController[] = L"Windows.UI.Input.Spatial.ISpatialInteractionController";
/* [object, uuid("5F0E5BA3-0954-4E97-86C5-E7F30B114DFD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasTouchpad )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasThumbstick )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_get_HasTouchpad(This,value) \
    ( (This)->lpVtbl->get_HasTouchpad(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_get_HasThumbstick(This,value) \
    ( (This)->lpVtbl->get_HasThumbstick(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_get_VendorId(This,value) \
    ( (This)->lpVtbl->get_VendorId(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionController2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionController2";
/* [object, uuid("35B6D924-C7A2-49B7-B72E-5436B2FB8F9C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetRenderableModelAsync )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_TryGetRenderableModelAsync(This,value) \
    ( (This)->lpVtbl->TryGetRenderableModelAsync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionControllerProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties[] = L"Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties";
/* [object, uuid("61056FB1-7BA9-4E35-B93F-9272CBA9B28B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTouchpadTouched )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTouchpadPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsThumbstickPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchpadX )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchpadY )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerPropertiesVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_get_IsTouchpadTouched(This,value) \
    ( (This)->lpVtbl->get_IsTouchpadTouched(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_get_IsTouchpadPressed(This,value) \
    ( (This)->lpVtbl->get_IsTouchpadPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_get_IsThumbstickPressed(This,value) \
    ( (This)->lpVtbl->get_IsThumbstickPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_get_ThumbstickX(This,value) \
    ( (This)->lpVtbl->get_ThumbstickX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_get_ThumbstickY(This,value) \
    ( (This)->lpVtbl->get_ThumbstickY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_get_TouchpadX(This,value) \
    ( (This)->lpVtbl->get_TouchpadX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_get_TouchpadY(This,value) \
    ( (This)->lpVtbl->get_TouchpadY(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs";
/* [object, uuid("075878E4-5961-3B41-9DFB-CEA5D89CC38A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Interaction )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_TryGetPointerPose(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_get_Interaction(This,value) \
    ( (This)->lpVtbl->get_Interaction(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2";
/* [object, uuid("7B263E93-5F13-419C-97D5-834678266AA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSource )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_get_InteractionSource(This,value) \
    ( (This)->lpVtbl->get_InteractionSource(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionManager[] = L"Windows.UI.Input.Spatial.ISpatialInteractionManager";
/* [object, uuid("32A64EA8-A15A-3995-B8BD-80513CB5ADEF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SourceDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SourceDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SourceLost )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SourceLost )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SourceUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SourceUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SourcePressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SourcePressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SourceReleased )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SourceReleased )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InteractionDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InteractionDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetDetectedSourcesAtTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timeStamp,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_add_SourceDetected(This,handler,token) \
    ( (This)->lpVtbl->add_SourceDetected(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_remove_SourceDetected(This,token) \
    ( (This)->lpVtbl->remove_SourceDetected(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_add_SourceLost(This,handler,token) \
    ( (This)->lpVtbl->add_SourceLost(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_remove_SourceLost(This,token) \
    ( (This)->lpVtbl->remove_SourceLost(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_add_SourceUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_SourceUpdated(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_remove_SourceUpdated(This,token) \
    ( (This)->lpVtbl->remove_SourceUpdated(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_add_SourcePressed(This,handler,token) \
    ( (This)->lpVtbl->add_SourcePressed(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_remove_SourcePressed(This,token) \
    ( (This)->lpVtbl->remove_SourcePressed(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_add_SourceReleased(This,handler,token) \
    ( (This)->lpVtbl->add_SourceReleased(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_remove_SourceReleased(This,token) \
    ( (This)->lpVtbl->remove_SourceReleased(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_add_InteractionDetected(This,handler,token) \
    ( (This)->lpVtbl->add_InteractionDetected(This,handler,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_remove_InteractionDetected(This,token) \
    ( (This)->lpVtbl->remove_InteractionDetected(This,token) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_GetDetectedSourcesAtTimestamp(This,timeStamp,value) \
    ( (This)->lpVtbl->GetDetectedSourcesAtTimestamp(This,timeStamp,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics[] = L"Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics";
/* [object, uuid("00E31FA6-8CA2-30BF-91FE-D9CB4A008990"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_GetForCurrentView(This,value) \
    ( (This)->lpVtbl->GetForCurrentView(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource";
/* [object, uuid("FB5433BA-B0B3-3148-9F3B-E9F5DE568F5D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSource2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource2";
/* [object, uuid("E4C5B70C-0470-4028-88C0-A0EB44D34EFE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPointingSupported )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMenuSupported )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGraspSupported )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetStateAtTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_get_IsPointingSupported(This,value) \
    ( (This)->lpVtbl->get_IsPointingSupported(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_get_IsMenuSupported(This,value) \
    ( (This)->lpVtbl->get_IsMenuSupported(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_get_IsGraspSupported(This,value) \
    ( (This)->lpVtbl->get_IsGraspSupported(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_get_Controller(This,value) \
    ( (This)->lpVtbl->get_Controller(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_TryGetStateAtTimestamp(This,timestamp,value) \
    ( (This)->lpVtbl->TryGetStateAtTimestamp(This,timestamp,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSource3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSource2
 *     Windows.UI.Input.Spatial.ISpatialInteractionSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource3";
/* [object, uuid("0406D9F9-9AFD-44F9-85DC-700023A962E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handedness )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_get_Handedness(This,value) \
    ( (This)->lpVtbl->get_Handedness(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs";
/* [object, uuid("23B786CF-EC23-3979-B27C-EB0E12FEB7C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2";
/* [object, uuid("D8B4B467-E648-4D52-AB49-E0D227199F63"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PressKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_get_PressKind(This,value) \
    ( (This)->lpVtbl->get_PressKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation";
/* [object, uuid("EA4696C4-7E8B-30CA-BCC5-C77189CEA30A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocity )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocationVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_get_Velocity(This,value) \
    ( (This)->lpVtbl->get_Velocity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2";
/* [object, uuid("4C671045-3917-40FC-A9AC-31C9CF5FF91B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3";
/* [object, uuid("6702E65E-E915-4CFB-9C1B-0538EFC86687"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionAccuracy )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AngularVelocity )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourcePointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_get_PositionAccuracy(This,value) \
    ( (This)->lpVtbl->get_PositionAccuracy(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_get_AngularVelocity(This,value) \
    ( (This)->lpVtbl->get_AngularVelocity(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_get_SourcePointerPose(This,value) \
    ( (This)->lpVtbl->get_SourcePointerPose(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties";
/* [object, uuid("05604542-3EF7-3222-9F53-63C9CB7E3BC7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourcePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetSourceLossMitigationDirection )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceLossRisk )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetLocation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourcePropertiesVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourcePropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_TryGetSourceLossMitigationDirection(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetSourceLossMitigationDirection(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_get_SourceLossRisk(This,value) \
    ( (This)->lpVtbl->get_SourceLossRisk(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_TryGetLocation(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetLocation(This,coordinateSystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceState
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceState[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState";
/* [object, uuid("D5C475EF-4B63-37EC-98B9-9FC652B9D2F2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceStateVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_get_IsPressed(This,value) \
    ( (This)->lpVtbl->get_IsPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_TryGetPointerPose(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialInteractionSourceState
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialInteractionSourceState
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState2";
/* [object, uuid("45F6D0BD-1773-492E-9BA3-8AC1CBE77C08"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelectPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMenuPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGrasped )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectPressedValue )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControllerProperties )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_get_IsSelectPressed(This,value) \
    ( (This)->lpVtbl->get_IsSelectPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_get_IsMenuPressed(This,value) \
    ( (This)->lpVtbl->get_IsMenuPressed(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_get_IsGrasped(This,value) \
    ( (This)->lpVtbl->get_IsGrasped(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_get_SelectPressedValue(This,value) \
    ( (This)->lpVtbl->get_SelectPressedValue(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_get_ControllerProperties(This,value) \
    ( (This)->lpVtbl->get_ControllerProperties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs";
/* [object, uuid("2D40D1CB-E7DA-4220-B0BF-819301674780"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs";
/* [object, uuid("05086802-F301-4343-9250-2FBAA5F87A37"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCumulativeDelta )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_TryGetCumulativeDelta(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetCumulativeDelta(This,coordinateSystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationDelta
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationDelta[] = L"Windows.UI.Input.Spatial.ISpatialManipulationDelta";
/* [object, uuid("A7EC967A-D123-3A81-A15B-992923DCBE91"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDeltaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Translation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDeltaVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDeltaVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_get_Translation(This,value) \
    ( (This)->lpVtbl->get_Translation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs";
/* [object, uuid("A1D6BBCE-42A5-377B-ADA6-D28E3D384737"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_TryGetPointerPose(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs";
/* [object, uuid("5F230B9B-60C6-4DC6-BDC9-9F4A6F15FE49"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCumulativeDelta )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_TryGetCumulativeDelta(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetCumulativeDelta(This,coordinateSystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs";
/* [object, uuid("CE503EDC-E8A5-46F0-92D4-3C122B35112A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs";
/* [object, uuid("012E80B7-AF3B-42C2-9E41-BAAA0E721F3A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NormalizedOffset )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_get_NormalizedOffset(This,value) \
    ( (This)->lpVtbl->get_NormalizedOffset(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs";
/* [object, uuid("754A348A-FB64-4656-8EBD-9DEECAAFE475"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsNavigatingX )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsNavigatingY )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsNavigatingZ )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_TryGetPointerPose(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_get_IsNavigatingX(This,value) \
    ( (This)->lpVtbl->get_IsNavigatingX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_get_IsNavigatingY(This,value) \
    ( (This)->lpVtbl->get_IsNavigatingY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_get_IsNavigatingZ(This,value) \
    ( (This)->lpVtbl->get_IsNavigatingZ(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs";
/* [object, uuid("9B713FD7-839D-4A74-8732-45466FC044B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NormalizedOffset )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_get_NormalizedOffset(This,value) \
    ( (This)->lpVtbl->get_NormalizedOffset(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose[] = L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose";
/* [object, uuid("A7104307-2C2B-4D3A-92A7-80CED7C4A0D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForwardDirection )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpDirection )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePoseVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePoseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_get_ForwardDirection(This,value) \
    ( (This)->lpVtbl->get_ForwardDirection(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_get_UpDirection(This,value) \
    ( (This)->lpVtbl->get_UpDirection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose2[] = L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2";
/* [object, uuid("ECCD86B8-52DB-469F-9E3F-80C47F74BCE9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionAccuracy )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_get_PositionAccuracy(This,value) \
    ( (This)->lpVtbl->get_PositionAccuracy(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPose[] = L"Windows.UI.Input.Spatial.ISpatialPointerPose";
/* [object, uuid("6953A42E-C17E-357D-97A1-7269D0ED2D10"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Head )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_get_Head(This,value) \
    ( (This)->lpVtbl->get_Head(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerPose2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerPose
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Spatial.ISpatialPointerPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPose2[] = L"Windows.UI.Input.Spatial.ISpatialPointerPose2";
/* [object, uuid("9D202B17-954E-4E0C-96D1-B6790B6FC2FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetInteractionSourcePose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * source,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_TryGetInteractionSourcePose(This,source,value) \
    ( (This)->lpVtbl->TryGetInteractionSourcePose(This,source,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialPointerPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPoseStatics[] = L"Windows.UI.Input.Spatial.ISpatialPointerPoseStatics";
/* [object, uuid("A25591A9-ACA1-3EE0-9816-785CFB2E3FB8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetAtTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_TryGetAtTimestamp(This,coordinateSystem,timestamp,value) \
    ( (This)->lpVtbl->TryGetAtTimestamp(This,coordinateSystem,timestamp,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialRecognitionEndedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs";
/* [object, uuid("0E35F5CB-3F75-43F3-AC81-D1DC2DF9B1FB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs";
/* [object, uuid("24DA128F-0008-4A6D-AA50-2A76F9CFB264"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsGesturePossible )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings gesture,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_TryGetPointerPose(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_IsGesturePossible(This,gesture,value) \
    ( (This)->lpVtbl->IsGesturePossible(This,gesture,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Input.Spatial.ISpatialTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Spatial.SpatialTappedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialTappedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialTappedEventArgs";
/* [object, uuid("296D83DE-F444-4AA1-B2BF-9DC88D567DA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TapCount )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_get_InteractionSourceKind(This,value) \
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_TryGetPointerPose(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_get_TapCount(This,value) \
    ( (This)->lpVtbl->get_TapCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialGestureRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialGestureRecognizer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialGestureRecognizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialGestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialGestureRecognizer[] = L"Windows.UI.Input.Spatial.SpatialGestureRecognizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCanceledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCanceledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialHoldStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteraction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteraction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteraction_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteraction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteraction[] = L"Windows.UI.Input.Spatial.SpatialInteraction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionController ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionController_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionController[] = L"Windows.UI.Input.Spatial.SpatialInteractionController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionControllerProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionControllerProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionControllerProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionControllerProperties[] = L"Windows.UI.Input.Spatial.SpatialInteractionControllerProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionDetectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionDetectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionDetectedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionManager[] = L"Windows.UI.Input.Spatial.SpatialInteractionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSource ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSource2
 *    Windows.UI.Input.Spatial.ISpatialInteractionSource3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSource[] = L"Windows.UI.Input.Spatial.SpatialInteractionSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceEventArgs[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceLocation_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceLocation[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceProperties[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialInteractionSourceState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceState ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceState_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialInteractionSourceState_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceState[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceState";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCanceledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCanceledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationDelta ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationDelta_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationDelta_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationDelta[] = L"Windows.UI.Input.Spatial.SpatialManipulationDelta";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCanceledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCanceledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialNavigationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerInteractionSourcePose_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerInteractionSourcePose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialPointerInteractionSourcePose[] = L"Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialPointerPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Spatial.ISpatialPointerPoseStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialPointerPose ** Default Interface **
 *    Windows.UI.Input.Spatial.ISpatialPointerPose2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerPose_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialPointerPose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialPointerPose[] = L"Windows.UI.Input.Spatial.SpatialPointerPose";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionEndedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionEndedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialRecognitionEndedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialRecognitionStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialRecognitionStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Input.Spatial.SpatialTappedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Spatial.ISpatialTappedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialTappedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Spatial_SpatialTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialTappedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialTappedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Einput2Espatial_p_h__

#endif // __windows2Eui2Einput2Espatial_h__
