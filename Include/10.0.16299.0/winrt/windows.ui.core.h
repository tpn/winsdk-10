/* Header file automatically generated from windows.ui.core.idl */
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
#ifndef __windows2Eui2Ecore_h__
#define __windows2Eui2Ecore_h__
#ifndef __windows2Eui2Ecore_p_h__
#define __windows2Eui2Ecore_p_h__


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
#include "Windows.System.h"
#include "Windows.UI.Input.h"
#include "Windows.UI.Input.Inking.h"
#include "Windows.UI.Input.Inking.Core.h"
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IDispatchedHandler;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler ABI::Windows::UI::Core::IDispatchedHandler

#endif // ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IIdleDispatchedHandler;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler ABI::Windows::UI::Core::IIdleDispatchedHandler

#endif // ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IAcceleratorKeyEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs ABI::Windows::UI::Core::IAcceleratorKeyEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IAcceleratorKeyEventArgs2;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 ABI::Windows::UI::Core::IAcceleratorKeyEventArgs2

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IAutomationProviderRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs ABI::Windows::UI::Core::IAutomationProviderRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IBackRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs ABI::Windows::UI::Core::IBackRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICharacterReceivedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs ABI::Windows::UI::Core::ICharacterReceivedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IClosestInteractiveBoundsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs ABI::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreAcceleratorKeys;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys ABI::Windows::UI::Core::ICoreAcceleratorKeys

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreClosestInteractiveBoundsRequested;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested ABI::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreComponentFocusable;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable ABI::Windows::UI::Core::ICoreComponentFocusable

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreCursor;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreCursor ABI::Windows::UI::Core::ICoreCursor

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreCursorFactory;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory ABI::Windows::UI::Core::ICoreCursorFactory

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreDispatcher;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher ABI::Windows::UI::Core::ICoreDispatcher

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreDispatcher2;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 ABI::Windows::UI::Core::ICoreDispatcher2

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreDispatcherWithTaskPriority;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority ABI::Windows::UI::Core::ICoreDispatcherWithTaskPriority

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreInputSourceBase;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase ABI::Windows::UI::Core::ICoreInputSourceBase

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreKeyboardInputSource;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource ABI::Windows::UI::Core::ICoreKeyboardInputSource

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreKeyboardInputSource2;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 ABI::Windows::UI::Core::ICoreKeyboardInputSource2

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICorePointerInputSource;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource ABI::Windows::UI::Core::ICorePointerInputSource

#endif // ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICorePointerRedirector;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector ABI::Windows::UI::Core::ICorePointerRedirector

#endif // ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreTouchHitTesting;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting ABI::Windows::UI::Core::ICoreTouchHitTesting

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow ABI::Windows::UI::Core::ICoreWindow

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow2;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2 ABI::Windows::UI::Core::ICoreWindow2

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow3;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3 ABI::Windows::UI::Core::ICoreWindow3

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow4;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4 ABI::Windows::UI::Core::ICoreWindow4

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow5;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5 ABI::Windows::UI::Core::ICoreWindow5

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowDialog;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog ABI::Windows::UI::Core::ICoreWindowDialog

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowDialogFactory;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory ABI::Windows::UI::Core::ICoreWindowDialogFactory

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs ABI::Windows::UI::Core::ICoreWindowEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowFlyout;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout ABI::Windows::UI::Core::ICoreWindowFlyout

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowFlyoutFactory;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory ABI::Windows::UI::Core::ICoreWindowFlyoutFactory

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowPopupShowingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs ABI::Windows::UI::Core::ICoreWindowPopupShowingEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowResizeManager;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager ABI::Windows::UI::Core::ICoreWindowResizeManager

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowResizeManagerLayoutCapability;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability ABI::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowResizeManagerStatics;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics ABI::Windows::UI::Core::ICoreWindowResizeManagerStatics

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowStatic;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic ABI::Windows::UI::Core::ICoreWindowStatic

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IIdleDispatchedHandlerArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs ABI::Windows::UI::Core::IIdleDispatchedHandlerArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IInitializeWithCoreWindow;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow ABI::Windows::UI::Core::IInitializeWithCoreWindow

#endif // ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IInputEnabledEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs ABI::Windows::UI::Core::IInputEnabledEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IKeyEventArgs2;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 ABI::Windows::UI::Core::IKeyEventArgs2

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IPointerEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs ABI::Windows::UI::Core::IPointerEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ISystemNavigationManager;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager ABI::Windows::UI::Core::ISystemNavigationManager

#endif // ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ISystemNavigationManager2;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 ABI::Windows::UI::Core::ISystemNavigationManager2

#endif // ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ISystemNavigationManagerStatics;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics ABI::Windows::UI::Core::ISystemNavigationManagerStatics

#endif // ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ITouchHitTestingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs ABI::Windows::UI::Core::ITouchHitTestingEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IVisibilityChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs ABI::Windows::UI::Core::IVisibilityChangedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IWindowActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs ABI::Windows::UI::Core::IWindowActivatedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IWindowSizeChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs ABI::Windows::UI::Core::IWindowSizeChangedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class BackRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ca821060-002b-526d-8122-982630d7cdbe"))
IEventHandler<ABI::Windows::UI::Core::BackRequestedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::BackRequestedEventArgs*, ABI::Windows::UI::Core::IBackRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.UI.Core.BackRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::UI::Core::BackRequestedEventArgs*> __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_t;
#define __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::UI::Core::IBackRequestedEventArgs*>
//#define __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::UI::Core::IBackRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CharacterReceivedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5aa4a848-86b2-506b-89ab-5eb5786420c6"))
ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::CharacterReceivedEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CharacterReceivedEventArgs*, ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.UI.Core.CharacterReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::CharacterReceivedEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindowEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1a8ac270-a777-50f7-88a1-e34e56c09449"))
ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::CoreWindowEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindowEventArgs*, ABI::Windows::UI::Core::ICoreWindowEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.UI.Core.CoreWindowEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::CoreWindowEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::ICoreWindowEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::ICoreWindowEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class InputEnabledEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c9965f1c-3641-51b6-b823-048ec3628fb0"))
ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::InputEnabledEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::InputEnabledEventArgs*, ABI::Windows::UI::Core::IInputEnabledEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.UI.Core.InputEnabledEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::InputEnabledEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::IInputEnabledEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::IInputEnabledEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class KeyEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eadffdf7-d70e-5688-906c-c2b1229ea16d"))
ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::KeyEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::KeyEventArgs*, ABI::Windows::UI::Core::IKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.UI.Core.KeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::KeyEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::IKeyEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::IKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class PointerEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("26aabf41-a0fd-5e66-b188-6c74182d00cd"))
ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class TouchHitTestingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c76e9d25-6a96-58fd-874f-ae52bd603af8"))
ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::TouchHitTestingEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::TouchHitTestingEventArgs*, ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.UI.Core.TouchHitTestingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::TouchHitTestingEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreComponentInputSource;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class ClosestInteractiveBoundsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e2c62d42-0577-5112-9e59-eae159bf39e9"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreComponentInputSource*,ABI::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreComponentInputSource*, ABI::Windows::UI::Core::ICoreInputSourceBase*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs*, ABI::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreComponentInputSource, Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreComponentInputSource*,ABI::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreInputSourceBase*,ABI::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreInputSourceBase*,ABI::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreDispatcher;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class AcceleratorKeyEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("136dff0d-f7e8-5153-b31c-86390c701880"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreDispatcher*,ABI::Windows::UI::Core::AcceleratorKeyEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreDispatcher*, ABI::Windows::UI::Core::ICoreDispatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::AcceleratorKeyEventArgs*, ABI::Windows::UI::Core::IAcceleratorKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreDispatcher, Windows.UI.Core.AcceleratorKeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreDispatcher*,ABI::Windows::UI::Core::AcceleratorKeyEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreDispatcher*,ABI::Windows::UI::Core::IAcceleratorKeyEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreDispatcher*,ABI::Windows::UI::Core::IAcceleratorKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindow;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6368ae3d-52d4-5290-b936-717a9acf5bea"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class AutomationProviderRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("54db5c04-81f7-5f46-9fb8-e49beec70a24"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::AutomationProviderRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::AutomationProviderRequestedEventArgs*, ABI::Windows::UI::Core::IAutomationProviderRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.AutomationProviderRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::AutomationProviderRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IAutomationProviderRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IAutomationProviderRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("73f846a8-0af6-5872-8fb8-ae2f56d8553e"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::CharacterReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CharacterReceivedEventArgs*, ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.CharacterReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::CharacterReceivedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("21a652d2-bfe2-5b2e-a2ab-ca45253be8b0"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs*, ABI::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d08e4f66-3457-57f2-ba0c-cb347133bd15"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::CoreWindowEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindowEventArgs*, ABI::Windows::UI::Core::ICoreWindowEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.CoreWindowEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::CoreWindowEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ICoreWindowEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ICoreWindowEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindowPopupShowingEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b32d6422-78b2-5e00-84a8-6e3167aaabde"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::CoreWindowPopupShowingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindowPopupShowingEventArgs*, ABI::Windows::UI::Core::ICoreWindowPopupShowingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.CoreWindowPopupShowingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::CoreWindowPopupShowingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ICoreWindowPopupShowingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ICoreWindowPopupShowingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e230a64a-506a-59c3-bb61-5559ff995663"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::InputEnabledEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::InputEnabledEventArgs*, ABI::Windows::UI::Core::IInputEnabledEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.InputEnabledEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::InputEnabledEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IInputEnabledEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IInputEnabledEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a3ec0774-55ac-5d61-8232-b35c5d35c93c"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::KeyEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::KeyEventArgs*, ABI::Windows::UI::Core::IKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.KeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::KeyEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IKeyEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("420e1bb6-e99d-5e64-8e25-07467e3cae9e"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("197654c9-0c47-502b-9aa1-0deb03ed9702"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::TouchHitTestingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::TouchHitTestingEventArgs*, ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.TouchHitTestingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::TouchHitTestingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class VisibilityChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("14b7f692-5583-52a1-aa42-fc1843c0f748"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::VisibilityChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::VisibilityChangedEventArgs*, ABI::Windows::UI::Core::IVisibilityChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.VisibilityChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::VisibilityChangedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IVisibilityChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IVisibilityChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class WindowActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("26a73b35-a7f9-52db-88d6-15726deb2523"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::WindowActivatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::WindowActivatedEventArgs*, ABI::Windows::UI::Core::IWindowActivatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.WindowActivatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::WindowActivatedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IWindowActivatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IWindowActivatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class WindowSizeChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("318dbb67-4089-5690-9040-1d454fb2f686"))
ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::WindowSizeChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::ICoreWindow*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::WindowSizeChangedEventArgs*, ABI::Windows::UI::Core::IWindowSizeChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow, Windows.UI.Core.WindowSizeChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*,ABI::Windows::UI::Core::WindowSizeChangedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IWindowSizeChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICoreWindow*,ABI::Windows::UI::Core::IWindowSizeChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("29742d27-177d-54c3-b974-616fc45a2b0c"))
ITypedEventHandler<ABI::Windows::UI::Core::ICorePointerRedirector*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::UI::Core::ICorePointerRedirector*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.ICorePointerRedirector, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Core::ICorePointerRedirector*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICorePointerRedirector*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Core::ICorePointerRedirector*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        class CoreInkIndependentInputSource;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreInkIndependentInputSource;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b83fbe98-882a-5b69-bd1c-c66690707fef"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*, ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStrokeInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput ABI::Windows::UI::Input::Inking::IInkStrokeInput

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bf66b962-702d-5c07-a2d5-15f21583c43a"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkStrokeInput*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStrokeInput*, ABI::Windows::UI::Input::Inking::IInkStrokeInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.InkStrokeInput, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkStrokeInput*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkStrokeInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkStrokeInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkUnprocessedInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkUnprocessedInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput ABI::Windows::UI::Input::Inking::IInkUnprocessedInput

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4a86bd78-5bcf-5ede-8f65-a8c65235055c"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkUnprocessedInput*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkUnprocessedInput*, ABI::Windows::UI::Input::Inking::IInkUnprocessedInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.InkUnprocessedInput, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkUnprocessedInput*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkUnprocessedInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkUnprocessedInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class KeyboardDeliveryInterceptor;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

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



#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IUICommand;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIUICommand ABI::Windows::UI::Popups::IUICommand

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIIterator_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f45db3d3-7299-57ce-a73e-297cf0af3083"))
IIterator<ABI::Windows::UI::Popups::IUICommand*> : IIterator_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Popups::IUICommand*> __FIIterator_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIIterable_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e63de42b-53c3-5e07-90d3-98172d545412"))
IIterable<ABI::Windows::UI::Popups::IUICommand*> : IIterable_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Popups::IUICommand*> __FIIterable_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIVectorView_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ed1165e6-f377-5b00-8172-93c1bd04deb4"))
IVectorView<ABI::Windows::UI::Popups::IUICommand*> : IVectorView_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Popups::IUICommand*> __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIVector_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("105139a1-dcb8-5f65-97ef-cb1bf0b75f9d"))
IVector<ABI::Windows::UI::Popups::IUICommand*> : IVector_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Popups::IUICommand*> __FIVector_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIVector_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd33fd5b-a24d-5a44-91fe-dd6441770103"))
IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b8770535-6a4b-52b1-b578-f3cdc5007a1f"))
IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*> : IAsyncOperation_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*> __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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
            
            typedef struct Size Size;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace System {
            class DispatcherQueue;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIDispatcherQueue_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IDispatcherQueue;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIDispatcherQueue ABI::Windows::System::IDispatcherQueue

#endif // ____x_ABI_CWindows_CSystem_CIDispatcherQueue_FWD_DEFINED__


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





















#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IUICommandInvokedHandler;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler ABI::Windows::UI::Popups::IUICommandInvokedHandler

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum AppViewBackButtonVisibility : int AppViewBackButtonVisibility;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreAcceleratorKeyEventType : int CoreAcceleratorKeyEventType;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreCursorType : int CoreCursorType;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreDispatcherPriority : int CoreDispatcherPriority;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreInputDeviceTypes : unsigned int CoreInputDeviceTypes;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreProcessEventsOption : int CoreProcessEventsOption;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreProximityEvaluationScore : int CoreProximityEvaluationScore;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreVirtualKeyStates : unsigned int CoreVirtualKeyStates;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreWindowActivationMode : int CoreWindowActivationMode;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreWindowActivationState : int CoreWindowActivationState;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreWindowFlowDirection : int CoreWindowFlowDirection;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

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
            namespace Core {
                
                typedef struct CoreProximityEvaluation CoreProximityEvaluation;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
























































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreAcceleratorKeys;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreCursor;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreIndependentInputSource;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindowDialog;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindowFlyout;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindowResizeManager;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class IdleDispatchedHandlerArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class SystemNavigationManager;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */















/*
 *
 * Struct Windows.UI.Core.AppViewBackButtonVisibility
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum AppViewBackButtonVisibility : int
                {
                    AppViewBackButtonVisibility_Visible = 0,
                    AppViewBackButtonVisibility_Collapsed = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreAcceleratorKeyEventType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreAcceleratorKeyEventType : int
                {
                    CoreAcceleratorKeyEventType_Character = 2,
                    CoreAcceleratorKeyEventType_DeadCharacter = 3,
                    CoreAcceleratorKeyEventType_KeyDown = 0,
                    CoreAcceleratorKeyEventType_KeyUp = 1,
                    CoreAcceleratorKeyEventType_SystemCharacter = 6,
                    CoreAcceleratorKeyEventType_SystemDeadCharacter = 7,
                    CoreAcceleratorKeyEventType_SystemKeyDown = 4,
                    CoreAcceleratorKeyEventType_SystemKeyUp = 5,
                    CoreAcceleratorKeyEventType_UnicodeCharacter = 8,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreCursorType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreCursorType : int
                {
                    CoreCursorType_Arrow = 0,
                    CoreCursorType_Cross = 1,
                    CoreCursorType_Custom = 2,
                    CoreCursorType_Hand = 3,
                    CoreCursorType_Help = 4,
                    CoreCursorType_IBeam = 5,
                    CoreCursorType_SizeAll = 6,
                    CoreCursorType_SizeNortheastSouthwest = 7,
                    CoreCursorType_SizeNorthSouth = 8,
                    CoreCursorType_SizeNorthwestSoutheast = 9,
                    CoreCursorType_SizeWestEast = 10,
                    CoreCursorType_UniversalNo = 11,
                    CoreCursorType_UpArrow = 12,
                    CoreCursorType_Wait = 13,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    CoreCursorType_Pin = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    CoreCursorType_Person = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreDispatcherPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreDispatcherPriority : int
                {
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    CoreDispatcherPriority_Idle = -2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    CoreDispatcherPriority_Low = -1,
                    CoreDispatcherPriority_Normal = 0,
                    CoreDispatcherPriority_High = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreInputDeviceTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, flags, contract] */
                enum CoreInputDeviceTypes : unsigned int
                {
                    CoreInputDeviceTypes_None = 0,
                    CoreInputDeviceTypes_Touch = 0x1,
                    CoreInputDeviceTypes_Pen = 0x2,
                    CoreInputDeviceTypes_Mouse = 0x4,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(CoreInputDeviceTypes)
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreProcessEventsOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreProcessEventsOption : int
                {
                    CoreProcessEventsOption_ProcessOneAndAllPending = 0,
                    CoreProcessEventsOption_ProcessOneIfPresent = 1,
                    CoreProcessEventsOption_ProcessUntilQuit = 2,
                    CoreProcessEventsOption_ProcessAllIfPresent = 3,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreProximityEvaluationScore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreProximityEvaluationScore : int
                {
                    CoreProximityEvaluationScore_Closest = 0,
                    CoreProximityEvaluationScore_Farthest = 2147483647,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreVirtualKeyStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, flags, contract] */
                enum CoreVirtualKeyStates : unsigned int
                {
                    CoreVirtualKeyStates_None = 0,
                    CoreVirtualKeyStates_Down = 0x1,
                    CoreVirtualKeyStates_Locked = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(CoreVirtualKeyStates)
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreWindowActivationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreWindowActivationMode : int
                {
                    CoreWindowActivationMode_None = 0,
                    CoreWindowActivationMode_Deactivated = 1,
                    CoreWindowActivationMode_ActivatedNotForeground = 2,
                    CoreWindowActivationMode_ActivatedInForeground = 3,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreWindowActivationState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreWindowActivationState : int
                {
                    CoreWindowActivationState_CodeActivated = 0,
                    CoreWindowActivationState_Deactivated = 1,
                    CoreWindowActivationState_PointerActivated = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreWindowFlowDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [v1_enum, contract] */
                enum CoreWindowFlowDirection : int
                {
                    CoreWindowFlowDirection_LeftToRight = 0,
                    CoreWindowFlowDirection_RightToLeft = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CorePhysicalKeyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [contract] */
                struct CorePhysicalKeyStatus
                {
                    UINT32 RepeatCount;
                    UINT32 ScanCode;
                    boolean IsExtendedKey;
                    boolean IsMenuKeyDown;
                    boolean WasKeyDown;
                    boolean IsKeyReleased;
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreProximityEvaluation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [contract] */
                struct CoreProximityEvaluation
                {
                    INT32 Score;
                    ABI::Windows::Foundation::Point AdjustedPoint;
                };
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Core.DispatchedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("D1F276C4-98D8-4636-BF49-EB79507548E9"), contract] */
                MIDL_INTERFACE("D1F276C4-98D8-4636-BF49-EB79507548E9")
                IDispatchedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDispatchedHandler=_uuidof(IDispatchedHandler);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIDispatchedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Core.IdleDispatchedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("A42B0C24-7F21-4ABC-99C1-8F01007F0880"), contract] */
                MIDL_INTERFACE("A42B0C24-7F21-4ABC-99C1-8F01007F0880")
                IIdleDispatchedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::IIdleDispatchedHandlerArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIdleDispatchedHandler=_uuidof(IIdleDispatchedHandler);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IAcceleratorKeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AcceleratorKeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAcceleratorKeyEventArgs[] = L"Windows.UI.Core.IAcceleratorKeyEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("FF1C4C4A-9287-470B-836E-9086E3126ADE"), exclusiveto, contract] */
                MIDL_INTERFACE("FF1C4C4A-9287-470B-836E-9086E3126ADE")
                IAcceleratorKeyEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EventType(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreAcceleratorKeyEventType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VirtualKey(
                        /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKey * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CorePhysicalKeyStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAcceleratorKeyEventArgs=_uuidof(IAcceleratorKeyEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IAcceleratorKeyEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AcceleratorKeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAcceleratorKeyEventArgs2[] = L"Windows.UI.Core.IAcceleratorKeyEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("D300A9F6-2F7E-4873-A555-166E596EE1C5"), exclusiveto, contract] */
                MIDL_INTERFACE("D300A9F6-2F7E-4873-A555-166E596EE1C5")
                IAcceleratorKeyEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAcceleratorKeyEventArgs2=_uuidof(IAcceleratorKeyEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.IAutomationProviderRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AutomationProviderRequestedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAutomationProviderRequestedEventArgs[] = L"Windows.UI.Core.IAutomationProviderRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("961FF258-21BF-4B42-A298-FA479D4C52E2"), exclusiveto, contract] */
                MIDL_INTERFACE("961FF258-21BF-4B42-A298-FA479D4C52E2")
                IAutomationProviderRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationProvider(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutomationProvider(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationProviderRequestedEventArgs=_uuidof(IAutomationProviderRequestedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IBackRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.BackRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IBackRequestedEventArgs[] = L"Windows.UI.Core.IBackRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("D603D28A-E411-4A4E-BA41-6A327A8675BC"), exclusiveto, contract] */
                MIDL_INTERFACE("D603D28A-E411-4A4E-BA41-6A327A8675BC")
                IBackRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackRequestedEventArgs=_uuidof(IBackRequestedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICharacterReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CharacterReceivedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICharacterReceivedEventArgs[] = L"Windows.UI.Core.ICharacterReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("C584659F-99B2-4BCC-BD33-04E63F42902E"), exclusiveto, contract] */
                MIDL_INTERFACE("C584659F-99B2-4BCC-BD33-04E63F42902E")
                ICharacterReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyCode(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CorePhysicalKeyStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICharacterReceivedEventArgs=_uuidof(ICharacterReceivedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs[] = L"Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("347C11D7-F6F8-40E3-B29F-AE50D3E86486"), exclusiveto, contract] */
                MIDL_INTERFACE("347C11D7-F6F8-40E3-B29F-AE50D3E86486")
                IClosestInteractiveBoundsRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerPosition(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SearchBounds(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClosestInteractiveBounds(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClosestInteractiveBounds(
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IClosestInteractiveBoundsRequestedEventArgs=_uuidof(IClosestInteractiveBoundsRequestedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICoreAcceleratorKeys
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreAcceleratorKeys[] = L"Windows.UI.Core.ICoreAcceleratorKeys";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("9FFDF7F5-B8C9-4EF0-B7D2-1DE626561FC8"), contract] */
                MIDL_INTERFACE("9FFDF7F5-B8C9-4EF0-B7D2-1DE626561FC8")
                ICoreAcceleratorKeys : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AcceleratorKeyActivated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AcceleratorKeyActivated(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreAcceleratorKeys=_uuidof(ICoreAcceleratorKeys);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreClosestInteractiveBoundsRequested
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested[] = L"Windows.UI.Core.ICoreClosestInteractiveBoundsRequested";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("F303043A-E8BF-4E8E-AE69-C9DADD57A114"), exclusiveto, contract] */
                MIDL_INTERFACE("F303043A-E8BF-4E8E-AE69-C9DADD57A114")
                ICoreClosestInteractiveBoundsRequested : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ClosestInteractiveBoundsRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ClosestInteractiveBoundsRequested(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreClosestInteractiveBoundsRequested=_uuidof(ICoreClosestInteractiveBoundsRequested);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICoreComponentFocusable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreComponentFocusable[] = L"Windows.UI.Core.ICoreComponentFocusable";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("52F96FA3-8742-4411-AE69-79A85F29AC8B"), exclusiveto, contract] */
                MIDL_INTERFACE("52F96FA3-8742-4411-AE69-79A85F29AC8B")
                ICoreComponentFocusable : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasFocus(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GotFocus(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GotFocus(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LostFocus(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LostFocus(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreComponentFocusable=_uuidof(ICoreComponentFocusable);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreCursor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreCursor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreCursor[] = L"Windows.UI.Core.ICoreCursor";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("96893ACF-111D-442C-8A77-B87992F8E2D6"), exclusiveto, contract] */
                MIDL_INTERFACE("96893ACF-111D-442C-8A77-B87992F8E2D6")
                ICoreCursor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreCursorType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreCursor=_uuidof(ICoreCursor);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreCursor;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreCursorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreCursor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreCursorFactory[] = L"Windows.UI.Core.ICoreCursorFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("F6359621-A79D-4ED3-8C32-A9EF9D6B76A4"), exclusiveto, contract] */
                MIDL_INTERFACE("F6359621-A79D-4ED3-8C32-A9EF9D6B76A4")
                ICoreCursorFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCursor(
                        /* [in] */ABI::Windows::UI::Core::CoreCursorType type,
                        /* [in] */UINT32 id,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreCursor * * cursor
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreCursorFactory=_uuidof(ICoreCursorFactory);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreCursorFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreDispatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreDispatcher
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreAcceleratorKeys
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcher[] = L"Windows.UI.Core.ICoreDispatcher";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("60DB2FA8-B705-4FDE-A7D6-EBBB1891D39E"), exclusiveto, contract] */
                MIDL_INTERFACE("60DB2FA8-B705-4FDE-A7D6-EBBB1891D39E")
                ICoreDispatcher : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasThreadAccess(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessEvents(
                        /* [in] */ABI::Windows::UI::Core::CoreProcessEventsOption options
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RunAsync(
                        /* [in] */ABI::Windows::UI::Core::CoreDispatcherPriority priority,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::IDispatchedHandler  * agileCallback,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RunIdleAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::IIdleDispatchedHandler  * agileCallback,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreDispatcher=_uuidof(ICoreDispatcher);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreDispatcher2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreDispatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcher2[] = L"Windows.UI.Core.ICoreDispatcher2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("6F5E63C7-E3AA-4EAE-B0E0-DCF321CA4B2F"), exclusiveto, contract] */
                MIDL_INTERFACE("6F5E63C7-E3AA-4EAE-B0E0-DCF321CA4B2F")
                ICoreDispatcher2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryRunAsync(
                        /* [in] */ABI::Windows::UI::Core::CoreDispatcherPriority priority,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::IDispatchedHandler  * agileCallback,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryRunIdleAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::IIdleDispatchedHandler  * agileCallback,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreDispatcher2=_uuidof(ICoreDispatcher2);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcher2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreDispatcherWithTaskPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreDispatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcherWithTaskPriority[] = L"Windows.UI.Core.ICoreDispatcherWithTaskPriority";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("BAFAECAD-484D-41BE-BA80-1D58C65263EA"), exclusiveto, contract] */
                MIDL_INTERFACE("BAFAECAD-484D-41BE-BA80-1D58C65263EA")
                ICoreDispatcherWithTaskPriority : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentPriority(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreDispatcherPriority * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CurrentPriority(
                        /* [in] */ABI::Windows::UI::Core::CoreDispatcherPriority value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShouldYield(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShouldYieldToPriority(
                        /* [in] */ABI::Windows::UI::Core::CoreDispatcherPriority priority,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StopProcessEvents(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreDispatcherWithTaskPriority=_uuidof(ICoreDispatcherWithTaskPriority);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreInputSourceBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreInputSourceBase[] = L"Windows.UI.Core.ICoreInputSourceBase";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("9F488807-4580-4BE8-BE68-92A9311713BB"), contract] */
                MIDL_INTERFACE("9F488807-4580-4BE8-BE68-92A9311713BB")
                ICoreInputSourceBase : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Dispatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreDispatcher * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInputEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsInputEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InputEnabled(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InputEnabled(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreInputSourceBase=_uuidof(ICoreInputSourceBase);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreKeyboardInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreKeyboardInputSource[] = L"Windows.UI.Core.ICoreKeyboardInputSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("231C9088-E469-4DF1-B208-6E490D71CB90"), exclusiveto, contract] */
                MIDL_INTERFACE("231C9088-E469-4DF1-B208-6E490D71CB90")
                ICoreKeyboardInputSource : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentKeyState(
                        /* [in] */ABI::Windows::System::VirtualKey virtualKey,
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreVirtualKeyStates * KeyState
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CharacterReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CharacterReceived(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyDown(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyDown(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyUp(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyUp(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreKeyboardInputSource=_uuidof(ICoreKeyboardInputSource);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreKeyboardInputSource2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreKeyboardInputSource2[] = L"Windows.UI.Core.ICoreKeyboardInputSource2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("FA24CB94-F963-47A5-8778-207C482B0AFD"), exclusiveto, contract] */
                MIDL_INTERFACE("FA24CB94-F963-47A5-8778-207C482B0AFD")
                ICoreKeyboardInputSource2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentKeyEventDeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreKeyboardInputSource2=_uuidof(ICoreKeyboardInputSource2);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICorePointerInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICorePointerInputSource[] = L"Windows.UI.Core.ICorePointerInputSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("BBF1BB18-E47A-48EB-8807-F8F8D3EA4551"), contract] */
                MIDL_INTERFACE("BBF1BB18-E47A-48EB-8807-F8F8D3EA4551")
                ICorePointerInputSource : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ReleasePointerCapture(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPointerCapture(void) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasCapture(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerPosition(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerCursor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreCursor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerCursor(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::ICoreCursor * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerCaptureLost(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerCaptureLost(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerEntered(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerEntered(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerExited(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerExited(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerMoved(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerMoved(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerPressed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerPressed(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerReleased(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerReleased(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerWheelChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerWheelChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICorePointerInputSource=_uuidof(ICorePointerInputSource);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICorePointerInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICorePointerRedirector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICorePointerRedirector[] = L"Windows.UI.Core.ICorePointerRedirector";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("8F9D0C94-5688-4B0C-A9F1-F931F7FA3DC3"), contract] */
                MIDL_INTERFACE("8F9D0C94-5688-4B0C-A9F1-F931F7FA3DC3")
                ICorePointerRedirector : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedAway(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedAway(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedTo(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedTo(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedReleased(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedReleased(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICorePointerRedirector=_uuidof(ICorePointerRedirector);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICorePointerRedirector;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Core.ICoreTouchHitTesting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreTouchHitTesting[] = L"Windows.UI.Core.ICoreTouchHitTesting";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("B1D8A289-3ACF-4124-9FA3-EA8ABA353C21"), exclusiveto, contract] */
                MIDL_INTERFACE("B1D8A289-3ACF-4124-9FA3-EA8ABA353C21")
                ICoreTouchHitTesting : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TouchHitTesting(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TouchHitTesting(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreTouchHitTesting=_uuidof(ICoreTouchHitTesting);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow[] = L"Windows.UI.Core.ICoreWindow";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("79B9D5F2-879E-4B89-B798-79E47598030C"), contract] */
                MIDL_INTERFACE("79B9D5F2-879E-4B89-B798-79E47598030C")
                ICoreWindow : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationHostProvider(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bounds(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CustomProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Dispatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreDispatcher * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowDirection(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreWindowFlowDirection * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FlowDirection(
                        /* [in] */ABI::Windows::UI::Core::CoreWindowFlowDirection value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInputEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsInputEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerCursor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreCursor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerCursor(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::ICoreCursor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerPosition(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Visible(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Activate(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAsyncKeyState(
                        /* [in] */ABI::Windows::System::VirtualKey virtualKey,
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreVirtualKeyStates * KeyState
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetKeyState(
                        /* [in] */ABI::Windows::System::VirtualKey virtualKey,
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreVirtualKeyStates * KeyState
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReleasePointerCapture(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPointerCapture(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Activated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Activated(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AutomationProviderRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AutomationProviderRequested(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CharacterReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CharacterReceived(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Closed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Closed(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InputEnabled(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InputEnabled(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyDown(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyDown(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyUp(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyUp(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerCaptureLost(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerCaptureLost(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerEntered(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerEntered(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerExited(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerExited(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerMoved(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerMoved(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerPressed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerPressed(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerReleased(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerReleased(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TouchHitTesting(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TouchHitTesting(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerWheelChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerWheelChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SizeChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SizeChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_VisibilityChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_VisibilityChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindow=_uuidof(ICoreWindow);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow2[] = L"Windows.UI.Core.ICoreWindow2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("7C2B1B85-6917-4361-9C02-0D9E3A420B95"), exclusiveto, contract] */
                MIDL_INTERFACE("7C2B1B85-6917-4361-9C02-0D9E3A420B95")
                ICoreWindow2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerPosition(
                        /* [in] */ABI::Windows::Foundation::Point value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindow2=_uuidof(ICoreWindow2);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow3[] = L"Windows.UI.Core.ICoreWindow3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("32C20DD8-FAEF-4375-A2AB-32640E4815C7"), exclusiveto, contract] */
                MIDL_INTERFACE("32C20DD8-FAEF-4375-A2AB-32640E4815C7")
                ICoreWindow3 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ClosestInteractiveBoundsRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ClosestInteractiveBoundsRequested(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentKeyEventDeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindow3=_uuidof(ICoreWindow3);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow3;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow4[] = L"Windows.UI.Core.ICoreWindow4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("35CAF0D0-47F0-436C-AF97-0DD88F6F5F02"), exclusiveto, contract] */
                MIDL_INTERFACE("35CAF0D0-47F0-436C-AF97-0DD88F6F5F02")
                ICoreWindow4 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ResizeStarted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ResizeStarted(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ResizeCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ResizeCompleted(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindow4=_uuidof(ICoreWindow4);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow4;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow5[] = L"Windows.UI.Core.ICoreWindow5";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("4B4AE1E1-2E6D-4EAA-BDA1-1C5CC1BEE141"), exclusiveto, contract] */
                MIDL_INTERFACE("4B4AE1E1-2E6D-4EAA-BDA1-1C5CC1BEE141")
                ICoreWindow5 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DispatcherQueue(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IDispatcherQueue * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivationMode(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreWindowActivationMode * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindow5=_uuidof(ICoreWindow5);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow5;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowDialog
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowDialog
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowDialog[] = L"Windows.UI.Core.ICoreWindowDialog";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("E7392CE0-C78D-427E-8B2C-01FF420C69D5"), exclusiveto, contract] */
                MIDL_INTERFACE("E7392CE0-C78D-427E-8B2C-01FF420C69D5")
                ICoreWindowDialog : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Showing(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Showing(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInteractionDelayed(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsInteractionDelayed(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Commands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultCommandIndex(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultCommandIndex(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CancelCommandIndex(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CancelCommandIndex(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackButtonCommand(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackButtonCommand(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowDialog=_uuidof(ICoreWindowDialog);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowDialog;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowDialogFactory
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowDialog
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowDialogFactory[] = L"Windows.UI.Core.ICoreWindowDialogFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("CFB2A855-1C59-4B13-B1E5-16E29805F7C4"), exclusiveto, contract] */
                MIDL_INTERFACE("CFB2A855-1C59-4B13-B1E5-16E29805F7C4")
                ICoreWindowDialogFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithTitle(
                        /* [in] */__RPC__in HSTRING title,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreWindowDialog * * coreWindowDialog
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowDialogFactory=_uuidof(ICoreWindowDialogFactory);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowEventArgs[] = L"Windows.UI.Core.ICoreWindowEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("272B1EF3-C633-4DA5-A26C-C6D0F56B29DA"), contract] */
                MIDL_INTERFACE("272B1EF3-C633-4DA5-A26C-C6D0F56B29DA")
                ICoreWindowEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowEventArgs=_uuidof(ICoreWindowEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowFlyout
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowFlyout
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFlyout[] = L"Windows.UI.Core.ICoreWindowFlyout";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("E89D854D-2050-40BB-B344-F6F355EEB314"), exclusiveto, contract] */
                MIDL_INTERFACE("E89D854D-2050-40BB-B344-F6F355EEB314")
                ICoreWindowFlyout : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Showing(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Showing(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInteractionDelayed(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsInteractionDelayed(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Commands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultCommandIndex(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultCommandIndex(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackButtonCommand(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackButtonCommand(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowFlyout=_uuidof(ICoreWindowFlyout);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowFlyoutFactory
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowFlyout
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFlyoutFactory[] = L"Windows.UI.Core.ICoreWindowFlyoutFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("DEC4C6C4-93E8-4F7C-BE27-CEFAA1AF68A7"), exclusiveto, contract] */
                MIDL_INTERFACE("DEC4C6C4-93E8-4F7C-BE27-CEFAA1AF68A7")
                ICoreWindowFlyoutFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Foundation::Point position,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreWindowFlyout * * coreWindowFlyout
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithTitle(
                        /* [in] */ABI::Windows::Foundation::Point position,
                        /* [in] */__RPC__in HSTRING title,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreWindowFlyout * * coreWindowFlyout
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowFlyoutFactory=_uuidof(ICoreWindowFlyoutFactory);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowPopupShowingEventArgs
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowPopupShowingEventArgs
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowPopupShowingEventArgs[] = L"Windows.UI.Core.ICoreWindowPopupShowingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("26155FA2-5BA5-4EA4-A3B4-2DC7D63C8E26"), exclusiveto, contract] */
                MIDL_INTERFACE("26155FA2-5BA5-4EA4-A3B4-2DC7D63C8E26")
                ICoreWindowPopupShowingEventArgs : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetDesiredSize(
                        /* [in] */ABI::Windows::Foundation::Size value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowPopupShowingEventArgs=_uuidof(ICoreWindowPopupShowingEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowResizeManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowResizeManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManager[] = L"Windows.UI.Core.ICoreWindowResizeManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("B8F0B925-B350-48B3-A198-5C1A84700243"), exclusiveto, contract] */
                MIDL_INTERFACE("B8F0B925-B350-48B3-A198-5C1A84700243")
                ICoreWindowResizeManager : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE NotifyLayoutCompleted(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowResizeManager=_uuidof(ICoreWindowResizeManager);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowResizeManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability[] = L"Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("BB74F27B-A544-4301-80E6-0AE033EF4536"), exclusiveto, contract] */
                MIDL_INTERFACE("BB74F27B-A544-4301-80E6-0AE033EF4536")
                ICoreWindowResizeManagerLayoutCapability : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShouldWaitForLayoutCompletion(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShouldWaitForLayoutCompletion(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowResizeManagerLayoutCapability=_uuidof(ICoreWindowResizeManagerLayoutCapability);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowResizeManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowResizeManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManagerStatics[] = L"Windows.UI.Core.ICoreWindowResizeManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("AE4A9045-6D70-49DB-8E68-46FFBD17D38D"), exclusiveto, contract] */
                MIDL_INTERFACE("AE4A9045-6D70-49DB-8E68-46FFBD17D38D")
                ICoreWindowResizeManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreWindowResizeManager * * CoreWindowResizeManager
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowResizeManagerStatics=_uuidof(ICoreWindowResizeManagerStatics);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowStatic[] = L"Windows.UI.Core.ICoreWindowStatic";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("4D239005-3C2A-41B1-9022-536BB9CF93B1"), exclusiveto, contract] */
                MIDL_INTERFACE("4D239005-3C2A-41B1-9022-536BB9CF93B1")
                ICoreWindowStatic : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentThread(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreWindow * * ppWindow
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICoreWindowStatic=_uuidof(ICoreWindowStatic);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowStatic;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IIdleDispatchedHandlerArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.IdleDispatchedHandlerArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IIdleDispatchedHandlerArgs[] = L"Windows.UI.Core.IIdleDispatchedHandlerArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("98BB6A24-DC1C-43CB-B4ED-D1C0EB2391F3"), exclusiveto, contract] */
                MIDL_INTERFACE("98BB6A24-DC1C-43CB-B4ED-D1C0EB2391F3")
                IIdleDispatchedHandlerArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDispatcherIdle(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIdleDispatchedHandlerArgs=_uuidof(IIdleDispatchedHandlerArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IInitializeWithCoreWindow
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IInitializeWithCoreWindow[] = L"Windows.UI.Core.IInitializeWithCoreWindow";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("188F20D6-9873-464A-ACE5-57E010F465E6"), contract] */
                MIDL_INTERFACE("188F20D6-9873-464A-ACE5-57E010F465E6")
                IInitializeWithCoreWindow : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Initialize(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::ICoreWindow * window
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInitializeWithCoreWindow=_uuidof(IInitializeWithCoreWindow);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IInputEnabledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.InputEnabledEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IInputEnabledEventArgs[] = L"Windows.UI.Core.IInputEnabledEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("80371D4F-2FD8-4C24-AA86-3163A87B4E5A"), exclusiveto, contract] */
                MIDL_INTERFACE("80371D4F-2FD8-4C24-AA86-3163A87B4E5A")
                IInputEnabledEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputEnabledEventArgs=_uuidof(IInputEnabledEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IKeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.KeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IKeyEventArgs[] = L"Windows.UI.Core.IKeyEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("5FF5E930-2544-4A17-BD78-1F2FDEBB106B"), exclusiveto, contract] */
                MIDL_INTERFACE("5FF5E930-2544-4A17-BD78-1F2FDEBB106B")
                IKeyEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VirtualKey(
                        /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKey * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CorePhysicalKeyStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKeyEventArgs=_uuidof(IKeyEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IKeyEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.KeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IKeyEventArgs2[] = L"Windows.UI.Core.IKeyEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("583ADD98-0790-4571-9B12-645EF9D79E42"), exclusiveto, contract] */
                MIDL_INTERFACE("583ADD98-0790-4571-9B12-645EF9D79E42")
                IKeyEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKeyEventArgs2=_uuidof(IKeyEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.IPointerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.PointerEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IPointerEventArgs[] = L"Windows.UI.Core.IPointerEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("920D9CB1-A5FC-4A21-8C09-49DFE6FFE25F"), exclusiveto, contract] */
                MIDL_INTERFACE("920D9CB1-A5FC-4A21-8C09-49DFE6FFE25F")
                IPointerEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentPoint(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerPoint * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyModifiers(
                        /* [retval, out] */__RPC__out ABI::Windows::System::VirtualKeyModifiers * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIntermediatePoints(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerEventArgs=_uuidof(IPointerEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ISystemNavigationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.SystemNavigationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManager[] = L"Windows.UI.Core.ISystemNavigationManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("93023118-CF50-42A6-9706-69107FA122E1"), exclusiveto, contract] */
                MIDL_INTERFACE("93023118-CF50-42A6-9706-69107FA122E1")
                ISystemNavigationManager : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_BackRequested(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_BackRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemNavigationManager=_uuidof(ISystemNavigationManager);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ISystemNavigationManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.SystemNavigationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManager2[] = L"Windows.UI.Core.ISystemNavigationManager2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("8C510401-67BE-49AE-9509-671C1E54A389"), exclusiveto, contract] */
                MIDL_INTERFACE("8C510401-67BE-49AE-9509-671C1E54A389")
                ISystemNavigationManager2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppViewBackButtonVisibility(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::AppViewBackButtonVisibility * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppViewBackButtonVisibility(
                        /* [in] */ABI::Windows::UI::Core::AppViewBackButtonVisibility value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemNavigationManager2=_uuidof(ISystemNavigationManager2);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ISystemNavigationManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.SystemNavigationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManagerStatics[] = L"Windows.UI.Core.ISystemNavigationManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("DC52B5CE-BEE0-4305-8C54-68228ED683B5"), exclusiveto, contract] */
                MIDL_INTERFACE("DC52B5CE-BEE0-4305-8C54-68228ED683B5")
                ISystemNavigationManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ISystemNavigationManager * * loader
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemNavigationManagerStatics=_uuidof(ISystemNavigationManagerStatics);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ITouchHitTestingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.TouchHitTestingEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ITouchHitTestingEventArgs[] = L"Windows.UI.Core.ITouchHitTestingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("22F3B823-0B7C-424E-9DF7-33D4F962931B"), exclusiveto, contract] */
                MIDL_INTERFACE("22F3B823-0B7C-424E-9DF7-33D4F962931B")
                ITouchHitTestingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProximityEvaluation(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreProximityEvaluation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProximityEvaluation(
                        /* [in] */ABI::Windows::UI::Core::CoreProximityEvaluation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Point(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingBox(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE EvaluateProximityToRect(
                        /* [in] */ABI::Windows::Foundation::Rect controlBoundingBox,
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreProximityEvaluation * proximityEvaluation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE EvaluateProximityToPolygon(
                        /* [in] */UINT32 __controlVerticesSize,
                        /* [size_is(__controlVerticesSize), in] */__RPC__in_ecount_full(__controlVerticesSize) ABI::Windows::Foundation::Point * controlVertices,
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreProximityEvaluation * proximityEvaluation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITouchHitTestingEventArgs=_uuidof(ITouchHitTestingEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IVisibilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.VisibilityChangedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IVisibilityChangedEventArgs[] = L"Windows.UI.Core.IVisibilityChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("BF9918EA-D801-4564-A495-B1E84F8AD085"), exclusiveto, contract] */
                MIDL_INTERFACE("BF9918EA-D801-4564-A495-B1E84F8AD085")
                IVisibilityChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Visible(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisibilityChangedEventArgs=_uuidof(IVisibilityChangedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IWindowActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.WindowActivatedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IWindowActivatedEventArgs[] = L"Windows.UI.Core.IWindowActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("179D65E7-4658-4CB6-AA13-41D094EA255E"), exclusiveto, contract] */
                MIDL_INTERFACE("179D65E7-4658-4CB6-AA13-41D094EA255E")
                IWindowActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowActivationState(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreWindowActivationState * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWindowActivatedEventArgs=_uuidof(IWindowActivatedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IWindowSizeChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.WindowSizeChangedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IWindowSizeChangedEventArgs[] = L"Windows.UI.Core.IWindowSizeChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                /* [object, uuid("5A200EC7-0426-47DC-B86C-6F475915E451"), exclusiveto, contract] */
                MIDL_INTERFACE("5A200EC7-0426-47DC-B86C-6F475915E451")
                IWindowSizeChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWindowSizeChangedEventArgs=_uuidof(IWindowSizeChangedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AcceleratorKeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IAcceleratorKeyEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *    Windows.UI.Core.IAcceleratorKeyEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AcceleratorKeyEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AcceleratorKeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AcceleratorKeyEventArgs[] = L"Windows.UI.Core.AcceleratorKeyEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AutomationProviderRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IAutomationProviderRequestedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AutomationProviderRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AutomationProviderRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AutomationProviderRequestedEventArgs[] = L"Windows.UI.Core.AutomationProviderRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.BackRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IBackRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_BackRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_BackRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_BackRequestedEventArgs[] = L"Windows.UI.Core.BackRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CharacterReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICharacterReceivedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CharacterReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CharacterReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CharacterReceivedEventArgs[] = L"Windows.UI.Core.CharacterReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Core_ClosestInteractiveBoundsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_ClosestInteractiveBoundsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_ClosestInteractiveBoundsRequestedEventArgs[] = L"Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Core.CoreAcceleratorKeys
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreAcceleratorKeys ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreAcceleratorKeys_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreAcceleratorKeys_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreAcceleratorKeys[] = L"Windows.UI.Core.CoreAcceleratorKeys";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreComponentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreInputSourceBase ** Default Interface **
 *    Windows.UI.Core.ICorePointerInputSource
 *    Windows.UI.Core.ICoreKeyboardInputSource
 *    Windows.UI.Core.ICoreComponentFocusable
 *    Windows.UI.Core.ICoreTouchHitTesting
 *    Windows.UI.Core.ICoreClosestInteractiveBoundsRequested
 *    Windows.UI.Core.ICoreKeyboardInputSource2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreComponentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreComponentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreComponentInputSource[] = L"Windows.UI.Core.CoreComponentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreCursor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.ICoreCursorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreCursor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreCursor_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreCursor[] = L"Windows.UI.Core.CoreCursor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreDispatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreDispatcher ** Default Interface **
 *    Windows.UI.Core.ICoreAcceleratorKeys
 *    Windows.UI.Core.ICoreDispatcherWithTaskPriority
 *    Windows.UI.Core.ICoreDispatcher2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreDispatcher_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreDispatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreDispatcher[] = L"Windows.UI.Core.CoreDispatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreInputSourceBase ** Default Interface **
 *    Windows.UI.Core.ICorePointerInputSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreIndependentInputSource[] = L"Windows.UI.Core.CoreIndependentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindow
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Core.ICoreWindowStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindow ** Default Interface **
 *    Windows.UI.Core.ICoreWindow2
 *    Windows.UI.Core.ICorePointerRedirector
 *    Windows.UI.Core.ICoreWindow3
 *    Windows.UI.Core.ICoreWindow4
 *    Windows.UI.Core.ICoreWindow5
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindow_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindow_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindow[] = L"Windows.UI.Core.CoreWindow";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowDialog
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.ICoreWindowDialogFactory interface starting with version 1.0 of the Windows.UI.Core.CoreWindowDialogsContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.UI.Core.CoreWindowDialogsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowDialog ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowDialog_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowDialog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowDialog[] = L"Windows.UI.Core.CoreWindowDialog";
#endif
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowEventArgs[] = L"Windows.UI.Core.CoreWindowEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowFlyout
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.ICoreWindowFlyoutFactory interface starting with version 1.0 of the Windows.UI.Core.CoreWindowDialogsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowFlyout ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowFlyout_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowFlyout_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowFlyout[] = L"Windows.UI.Core.CoreWindowFlyout";
#endif
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowPopupShowingEventArgs
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowPopupShowingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowPopupShowingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowPopupShowingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowPopupShowingEventArgs[] = L"Windows.UI.Core.CoreWindowPopupShowingEventArgs";
#endif
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowResizeManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Core.ICoreWindowResizeManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowResizeManager ** Default Interface **
 *    Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowResizeManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowResizeManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowResizeManager[] = L"Windows.UI.Core.CoreWindowResizeManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.IdleDispatchedHandlerArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IIdleDispatchedHandlerArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_IdleDispatchedHandlerArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_IdleDispatchedHandlerArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_IdleDispatchedHandlerArgs[] = L"Windows.UI.Core.IdleDispatchedHandlerArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.InputEnabledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IInputEnabledEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_InputEnabledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_InputEnabledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_InputEnabledEventArgs[] = L"Windows.UI.Core.InputEnabledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.KeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IKeyEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *    Windows.UI.Core.IKeyEventArgs2
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_KeyEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_KeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_KeyEventArgs[] = L"Windows.UI.Core.KeyEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.PointerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IPointerEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_PointerEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_PointerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_PointerEventArgs[] = L"Windows.UI.Core.PointerEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.SystemNavigationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Core.ISystemNavigationManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ISystemNavigationManager ** Default Interface **
 *    Windows.UI.Core.ISystemNavigationManager2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_SystemNavigationManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_SystemNavigationManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_SystemNavigationManager[] = L"Windows.UI.Core.SystemNavigationManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.TouchHitTestingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ITouchHitTestingEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_TouchHitTestingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_TouchHitTestingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_TouchHitTestingEventArgs[] = L"Windows.UI.Core.TouchHitTestingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.VisibilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IVisibilityChangedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_VisibilityChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_VisibilityChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_VisibilityChangedEventArgs[] = L"Windows.UI.Core.VisibilityChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.WindowActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IWindowActivatedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_WindowActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_WindowActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_WindowActivatedEventArgs[] = L"Windows.UI.Core.WindowActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.WindowSizeChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IWindowSizeChangedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_WindowSizeChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_WindowSizeChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_WindowSizeChangedEventArgs[] = L"Windows.UI.Core.WindowSizeChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler;

#endif // ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler;

#endif // ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreCursor __x_ABI_CWindows_CUI_CCore_CICoreCursor;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher __x_ABI_CWindows_CUI_CCore_CICoreDispatcher;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource;

#endif // ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector;

#endif // ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow2 __x_ABI_CWindows_CUI_CCore_CICoreWindow2;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow3 __x_ABI_CWindows_CUI_CCore_CICoreWindow3;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow4 __x_ABI_CWindows_CUI_CCore_CICoreWindow4;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow5 __x_ABI_CWindows_CUI_CCore_CICoreWindow5;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow;

#endif // ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager;

#endif // ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2;

#endif // ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs;

typedef struct __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor;

#endif // ____x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor_FWD_DEFINED__



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


#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommand __x_ABI_CWindows_CUI_CPopups_CIUICommand;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand __FIIterator_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand __FIIterable_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CPopups__CIUICommand;

typedef  struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CPopups__CIUICommand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand __FIVectorView_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [in] */ __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CPopups__CIUICommand __FIVector_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CPopups__CIUICommand **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIVector_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;




#ifndef ____x_ABI_CWindows_CSystem_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIDispatcherQueue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;

#endif // ____x_ABI_CWindows_CSystem_CIDispatcherQueue_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;


typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;





















#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreCursorType __x_ABI_CWindows_CUI_CCore_CCoreCursorType;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption __x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluationScore __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluationScore;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection;


typedef struct __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus;


typedef struct __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation;





















































































/*
 *
 * Struct Windows.UI.Core.AppViewBackButtonVisibility
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility
{
    AppViewBackButtonVisibility_Visible = 0,
    AppViewBackButtonVisibility_Collapsed = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreAcceleratorKeyEventType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType
{
    CoreAcceleratorKeyEventType_Character = 2,
    CoreAcceleratorKeyEventType_DeadCharacter = 3,
    CoreAcceleratorKeyEventType_KeyDown = 0,
    CoreAcceleratorKeyEventType_KeyUp = 1,
    CoreAcceleratorKeyEventType_SystemCharacter = 6,
    CoreAcceleratorKeyEventType_SystemDeadCharacter = 7,
    CoreAcceleratorKeyEventType_SystemKeyDown = 4,
    CoreAcceleratorKeyEventType_SystemKeyUp = 5,
    CoreAcceleratorKeyEventType_UnicodeCharacter = 8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreCursorType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreCursorType
{
    CoreCursorType_Arrow = 0,
    CoreCursorType_Cross = 1,
    CoreCursorType_Custom = 2,
    CoreCursorType_Hand = 3,
    CoreCursorType_Help = 4,
    CoreCursorType_IBeam = 5,
    CoreCursorType_SizeAll = 6,
    CoreCursorType_SizeNortheastSouthwest = 7,
    CoreCursorType_SizeNorthSouth = 8,
    CoreCursorType_SizeNorthwestSoutheast = 9,
    CoreCursorType_SizeWestEast = 10,
    CoreCursorType_UniversalNo = 11,
    CoreCursorType_UpArrow = 12,
    CoreCursorType_Wait = 13,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    CoreCursorType_Pin = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    CoreCursorType_Person = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreDispatcherPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority
{
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    CoreDispatcherPriority_Idle = -2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    CoreDispatcherPriority_Low = -1,
    CoreDispatcherPriority_Normal = 0,
    CoreDispatcherPriority_High = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreInputDeviceTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes
{
    CoreInputDeviceTypes_None = 0,
    CoreInputDeviceTypes_Touch = 0x1,
    CoreInputDeviceTypes_Pen = 0x2,
    CoreInputDeviceTypes_Mouse = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreProcessEventsOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption
{
    CoreProcessEventsOption_ProcessOneAndAllPending = 0,
    CoreProcessEventsOption_ProcessOneIfPresent = 1,
    CoreProcessEventsOption_ProcessUntilQuit = 2,
    CoreProcessEventsOption_ProcessAllIfPresent = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreProximityEvaluationScore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluationScore
{
    CoreProximityEvaluationScore_Closest = 0,
    CoreProximityEvaluationScore_Farthest = 2147483647,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreVirtualKeyStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates
{
    CoreVirtualKeyStates_None = 0,
    CoreVirtualKeyStates_Down = 0x1,
    CoreVirtualKeyStates_Locked = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreWindowActivationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode
{
    CoreWindowActivationMode_None = 0,
    CoreWindowActivationMode_Deactivated = 1,
    CoreWindowActivationMode_ActivatedNotForeground = 2,
    CoreWindowActivationMode_ActivatedInForeground = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreWindowActivationState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState
{
    CoreWindowActivationState_CodeActivated = 0,
    CoreWindowActivationState_Deactivated = 1,
    CoreWindowActivationState_PointerActivated = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreWindowFlowDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection
{
    CoreWindowFlowDirection_LeftToRight = 0,
    CoreWindowFlowDirection_RightToLeft = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CorePhysicalKeyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus
{
    UINT32 RepeatCount;
    UINT32 ScanCode;
    boolean IsExtendedKey;
    boolean IsMenuKeyDown;
    boolean WasKeyDown;
    boolean IsKeyReleased;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.CoreProximityEvaluation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation
{
    INT32 Score;
    __x_ABI_CWindows_CFoundation_CPoint AdjustedPoint;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Core.DispatchedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_INTERFACE_DEFINED__
/* [object, uuid("D1F276C4-98D8-4636-BF49-EB79507548E9"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIDispatchedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIDispatchedHandlerVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIDispatchedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_Invoke(This) \
    ( (This)->lpVtbl->Invoke(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIDispatchedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIDispatchedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Core.IdleDispatchedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_INTERFACE_DEFINED__
/* [object, uuid("A42B0C24-7F21-4ABC-99C1-8F01007F0880"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_Invoke(This,e) \
    ( (This)->lpVtbl->Invoke(This,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IAcceleratorKeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AcceleratorKeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAcceleratorKeyEventArgs[] = L"Windows.UI.Core.IAcceleratorKeyEventArgs";
/* [object, uuid("FF1C4C4A-9287-470B-836E-9086E3126ADE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EventType )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_get_EventType(This,value) \
    ( (This)->lpVtbl->get_EventType(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_get_VirtualKey(This,value) \
    ( (This)->lpVtbl->get_VirtualKey(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_get_KeyStatus(This,value) \
    ( (This)->lpVtbl->get_KeyStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IAcceleratorKeyEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AcceleratorKeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAcceleratorKeyEventArgs2[] = L"Windows.UI.Core.IAcceleratorKeyEventArgs2";
/* [object, uuid("D300A9F6-2F7E-4873-A555-166E596EE1C5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.IAutomationProviderRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AutomationProviderRequestedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAutomationProviderRequestedEventArgs[] = L"Windows.UI.Core.IAutomationProviderRequestedEventArgs";
/* [object, uuid("961FF258-21BF-4B42-A298-FA479D4C52E2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )(
        __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutomationProvider )(
        __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_get_AutomationProvider(This,value) \
    ( (This)->lpVtbl->get_AutomationProvider(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_put_AutomationProvider(This,value) \
    ( (This)->lpVtbl->put_AutomationProvider(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IBackRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.BackRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IBackRequestedEventArgs[] = L"Windows.UI.Core.IBackRequestedEventArgs";
/* [object, uuid("D603D28A-E411-4A4E-BA41-6A327A8675BC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICharacterReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CharacterReceivedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICharacterReceivedEventArgs[] = L"Windows.UI.Core.ICharacterReceivedEventArgs";
/* [object, uuid("C584659F-99B2-4BCC-BD33-04E63F42902E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyCode )(
        __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_get_KeyCode(This,value) \
    ( (This)->lpVtbl->get_KeyCode(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_get_KeyStatus(This,value) \
    ( (This)->lpVtbl->get_KeyStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs[] = L"Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs";
/* [object, uuid("347C11D7-F6F8-40E3-B29F-AE50D3E86486"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SearchBounds )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClosestInteractiveBounds )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClosestInteractiveBounds )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_get_PointerPosition(This,value) \
    ( (This)->lpVtbl->get_PointerPosition(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_get_SearchBounds(This,value) \
    ( (This)->lpVtbl->get_SearchBounds(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_get_ClosestInteractiveBounds(This,value) \
    ( (This)->lpVtbl->get_ClosestInteractiveBounds(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_put_ClosestInteractiveBounds(This,value) \
    ( (This)->lpVtbl->put_ClosestInteractiveBounds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICoreAcceleratorKeys
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreAcceleratorKeys[] = L"Windows.UI.Core.ICoreAcceleratorKeys";
/* [object, uuid("9FFDF7F5-B8C9-4EF0-B7D2-1DE626561FC8"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeysVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AcceleratorKeyActivated )(
        __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AcceleratorKeyActivated )(
        __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeysVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeysVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_add_AcceleratorKeyActivated(This,handler,pCookie) \
    ( (This)->lpVtbl->add_AcceleratorKeyActivated(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_remove_AcceleratorKeyActivated(This,cookie) \
    ( (This)->lpVtbl->remove_AcceleratorKeyActivated(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreClosestInteractiveBoundsRequested
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested[] = L"Windows.UI.Core.ICoreClosestInteractiveBoundsRequested";
/* [object, uuid("F303043A-E8BF-4E8E-AE69-C9DADD57A114"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequestedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequestedVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequestedVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_add_ClosestInteractiveBoundsRequested(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ClosestInteractiveBoundsRequested(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_remove_ClosestInteractiveBoundsRequested(This,cookie) \
    ( (This)->lpVtbl->remove_ClosestInteractiveBoundsRequested(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICoreComponentFocusable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreComponentFocusable[] = L"Windows.UI.Core.ICoreComponentFocusable";
/* [object, uuid("52F96FA3-8742-4411-AE69-79A85F29AC8B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusableVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_get_HasFocus(This,value) \
    ( (This)->lpVtbl->get_HasFocus(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_add_GotFocus(This,handler,pCookie) \
    ( (This)->lpVtbl->add_GotFocus(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_remove_GotFocus(This,cookie) \
    ( (This)->lpVtbl->remove_GotFocus(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_add_LostFocus(This,handler,pCookie) \
    ( (This)->lpVtbl->add_LostFocus(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_remove_LostFocus(This,cookie) \
    ( (This)->lpVtbl->remove_LostFocus(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreCursor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreCursor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreCursor[] = L"Windows.UI.Core.ICoreCursor";
/* [object, uuid("96893ACF-111D-442C-8A77-B87992F8E2D6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreCursorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreCursorType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreCursorVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreCursor
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreCursorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursor_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreCursor;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreCursorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreCursor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreCursorFactory[] = L"Windows.UI.Core.ICoreCursorFactory";
/* [object, uuid("F6359621-A79D-4ED3-8C32-A9EF9D6B76A4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreCursorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCursor )(
        __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreCursorType type,
        /* [in] */UINT32 id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * * cursor
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreCursorFactoryVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreCursorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_CreateCursor(This,type,id,cursor) \
    ( (This)->lpVtbl->CreateCursor(This,type,id,cursor) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreCursorFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreCursorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreDispatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreDispatcher
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreAcceleratorKeys
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcher[] = L"Windows.UI.Core.ICoreDispatcher";
/* [object, uuid("60DB2FA8-B705-4FDE-A7D6-EBBB1891D39E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasThreadAccess )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessEvents )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption options
        );
    HRESULT ( STDMETHODCALLTYPE *RunAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority priority,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler  * agileCallback,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *RunIdleAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler  * agileCallback,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreDispatcherVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_get_HasThreadAccess(This,value) \
    ( (This)->lpVtbl->get_HasThreadAccess(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_ProcessEvents(This,options) \
    ( (This)->lpVtbl->ProcessEvents(This,options) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_RunAsync(This,priority,agileCallback,asyncAction) \
    ( (This)->lpVtbl->RunAsync(This,priority,agileCallback,asyncAction) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher_RunIdleAsync(This,agileCallback,asyncAction) \
    ( (This)->lpVtbl->RunIdleAsync(This,agileCallback,asyncAction) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreDispatcher2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreDispatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcher2[] = L"Windows.UI.Core.ICoreDispatcher2";
/* [object, uuid("6F5E63C7-E3AA-4EAE-B0E0-DCF321CA4B2F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryRunAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority priority,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler  * agileCallback,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryRunIdleAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler  * agileCallback,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_TryRunAsync(This,priority,agileCallback,asyncOperation) \
    ( (This)->lpVtbl->TryRunAsync(This,priority,agileCallback,asyncOperation) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_TryRunIdleAsync(This,agileCallback,asyncOperation) \
    ( (This)->lpVtbl->TryRunIdleAsync(This,agileCallback,asyncOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcher2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcher2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreDispatcherWithTaskPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreDispatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcherWithTaskPriority[] = L"Windows.UI.Core.ICoreDispatcherWithTaskPriority";
/* [object, uuid("BAFAECAD-484D-41BE-BA80-1D58C65263EA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriorityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentPriority )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CurrentPriority )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShouldYield )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShouldYieldToPriority )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority priority,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopProcessEvents )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriorityVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriorityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_get_CurrentPriority(This,value) \
    ( (This)->lpVtbl->get_CurrentPriority(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_put_CurrentPriority(This,value) \
    ( (This)->lpVtbl->put_CurrentPriority(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_ShouldYield(This,value) \
    ( (This)->lpVtbl->ShouldYield(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_ShouldYieldToPriority(This,priority,value) \
    ( (This)->lpVtbl->ShouldYieldToPriority(This,priority,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_StopProcessEvents(This) \
    ( (This)->lpVtbl->StopProcessEvents(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreInputSourceBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreInputSourceBase[] = L"Windows.UI.Core.ICoreInputSourceBase";
/* [object, uuid("9F488807-4580-4BE8-BE68-92A9311713BB"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
        /* [in] */boolean value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBaseVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_get_Dispatcher(This,value) \
    ( (This)->lpVtbl->get_Dispatcher(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_get_IsInputEnabled(This,value) \
    ( (This)->lpVtbl->get_IsInputEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_put_IsInputEnabled(This,value) \
    ( (This)->lpVtbl->put_IsInputEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_add_InputEnabled(This,handler,pCookie) \
    ( (This)->lpVtbl->add_InputEnabled(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_remove_InputEnabled(This,cookie) \
    ( (This)->lpVtbl->remove_InputEnabled(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreKeyboardInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreKeyboardInputSource[] = L"Windows.UI.Core.ICoreKeyboardInputSource";
/* [object, uuid("231C9088-E469-4DF1-B208-6E490D71CB90"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyState )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * KeyState
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSourceVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_GetCurrentKeyState(This,virtualKey,KeyState) \
    ( (This)->lpVtbl->GetCurrentKeyState(This,virtualKey,KeyState) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_add_CharacterReceived(This,handler,pCookie) \
    ( (This)->lpVtbl->add_CharacterReceived(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_remove_CharacterReceived(This,cookie) \
    ( (This)->lpVtbl->remove_CharacterReceived(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_add_KeyDown(This,handler,pCookie) \
    ( (This)->lpVtbl->add_KeyDown(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_remove_KeyDown(This,cookie) \
    ( (This)->lpVtbl->remove_KeyDown(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_add_KeyUp(This,handler,pCookie) \
    ( (This)->lpVtbl->add_KeyUp(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_remove_KeyUp(This,cookie) \
    ( (This)->lpVtbl->remove_KeyUp(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreKeyboardInputSource2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreKeyboardInputSource2[] = L"Windows.UI.Core.ICoreKeyboardInputSource2";
/* [object, uuid("FA24CB94-F963-47A5-8778-207C482B0AFD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyEventDeviceId )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_GetCurrentKeyEventDeviceId(This,value) \
    ( (This)->lpVtbl->GetCurrentKeyEventDeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICorePointerInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICorePointerInputSource[] = L"Windows.UI.Core.ICorePointerInputSource";
/* [object, uuid("BBF1BB18-E47A-48EB-8807-F8F8D3EA4551"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICorePointerInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReleasePointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetPointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasCapture )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICorePointerInputSourceVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICorePointerInputSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_ReleasePointerCapture(This) \
    ( (This)->lpVtbl->ReleasePointerCapture(This) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_SetPointerCapture(This) \
    ( (This)->lpVtbl->SetPointerCapture(This) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_get_HasCapture(This,value) \
    ( (This)->lpVtbl->get_HasCapture(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_get_PointerPosition(This,value) \
    ( (This)->lpVtbl->get_PointerPosition(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_get_PointerCursor(This,value) \
    ( (This)->lpVtbl->get_PointerCursor(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_put_PointerCursor(This,value) \
    ( (This)->lpVtbl->put_PointerCursor(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_add_PointerCaptureLost(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerCaptureLost(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_remove_PointerCaptureLost(This,cookie) \
    ( (This)->lpVtbl->remove_PointerCaptureLost(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_add_PointerEntered(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerEntered(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_remove_PointerEntered(This,cookie) \
    ( (This)->lpVtbl->remove_PointerEntered(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_add_PointerExited(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerExited(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_remove_PointerExited(This,cookie) \
    ( (This)->lpVtbl->remove_PointerExited(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_add_PointerMoved(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerMoved(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_remove_PointerMoved(This,cookie) \
    ( (This)->lpVtbl->remove_PointerMoved(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_add_PointerPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerPressed(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_remove_PointerPressed(This,cookie) \
    ( (This)->lpVtbl->remove_PointerPressed(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_add_PointerReleased(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerReleased(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_remove_PointerReleased(This,cookie) \
    ( (This)->lpVtbl->remove_PointerReleased(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_add_PointerWheelChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerWheelChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_remove_PointerWheelChanged(This,cookie) \
    ( (This)->lpVtbl->remove_PointerWheelChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICorePointerInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICorePointerRedirector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICorePointerRedirector[] = L"Windows.UI.Core.ICorePointerRedirector";
/* [object, uuid("8F9D0C94-5688-4B0C-A9F1-F931F7FA3DC3"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICorePointerRedirectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedAway )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedAway )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedTo )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedTo )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICorePointerRedirectorVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICorePointerRedirectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_add_PointerRoutedAway(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerRoutedAway(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_remove_PointerRoutedAway(This,cookie) \
    ( (This)->lpVtbl->remove_PointerRoutedAway(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_add_PointerRoutedTo(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerRoutedTo(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_remove_PointerRoutedTo(This,cookie) \
    ( (This)->lpVtbl->remove_PointerRoutedTo(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_add_PointerRoutedReleased(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerRoutedReleased(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_remove_PointerRoutedReleased(This,cookie) \
    ( (This)->lpVtbl->remove_PointerRoutedReleased(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICorePointerRedirector;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICorePointerRedirector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Core.ICoreTouchHitTesting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreComponentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreTouchHitTesting[] = L"Windows.UI.Core.ICoreTouchHitTesting";
/* [object, uuid("B1D8A289-3ACF-4124-9FA3-EA8ABA353C21"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTestingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTestingVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTestingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_add_TouchHitTesting(This,handler,pCookie) \
    ( (This)->lpVtbl->add_TouchHitTesting(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_remove_TouchHitTesting(This,cookie) \
    ( (This)->lpVtbl->remove_TouchHitTesting(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow[] = L"Windows.UI.Core.ICoreWindow";
/* [object, uuid("79B9D5F2-879E-4B89-B798-79E47598030C"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationHostProvider )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CustomProperties )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowDirection )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FlowDirection )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Activate )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsyncKeyState )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * KeyState
        );
    HRESULT ( STDMETHODCALLTYPE *GetKeyState )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * KeyState
        );
    HRESULT ( STDMETHODCALLTYPE *ReleasePointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetPointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AutomationProviderRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AutomationProviderRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SizeChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SizeChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_VisibilityChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_VisibilityChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_AutomationHostProvider(This,value) \
    ( (This)->lpVtbl->get_AutomationHostProvider(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_Bounds(This,value) \
    ( (This)->lpVtbl->get_Bounds(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_CustomProperties(This,value) \
    ( (This)->lpVtbl->get_CustomProperties(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_Dispatcher(This,value) \
    ( (This)->lpVtbl->get_Dispatcher(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_FlowDirection(This,value) \
    ( (This)->lpVtbl->get_FlowDirection(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_put_FlowDirection(This,value) \
    ( (This)->lpVtbl->put_FlowDirection(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_IsInputEnabled(This,value) \
    ( (This)->lpVtbl->get_IsInputEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_put_IsInputEnabled(This,value) \
    ( (This)->lpVtbl->put_IsInputEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_PointerCursor(This,value) \
    ( (This)->lpVtbl->get_PointerCursor(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_put_PointerCursor(This,value) \
    ( (This)->lpVtbl->put_PointerCursor(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_PointerPosition(This,value) \
    ( (This)->lpVtbl->get_PointerPosition(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_get_Visible(This,value) \
    ( (This)->lpVtbl->get_Visible(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_Activate(This) \
    ( (This)->lpVtbl->Activate(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_Close(This) \
    ( (This)->lpVtbl->Close(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_GetAsyncKeyState(This,virtualKey,KeyState) \
    ( (This)->lpVtbl->GetAsyncKeyState(This,virtualKey,KeyState) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_GetKeyState(This,virtualKey,KeyState) \
    ( (This)->lpVtbl->GetKeyState(This,virtualKey,KeyState) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_ReleasePointerCapture(This) \
    ( (This)->lpVtbl->ReleasePointerCapture(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_SetPointerCapture(This) \
    ( (This)->lpVtbl->SetPointerCapture(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_Activated(This,handler,pCookie) \
    ( (This)->lpVtbl->add_Activated(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_Activated(This,cookie) \
    ( (This)->lpVtbl->remove_Activated(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_AutomationProviderRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_AutomationProviderRequested(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_AutomationProviderRequested(This,cookie) \
    ( (This)->lpVtbl->remove_AutomationProviderRequested(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_CharacterReceived(This,handler,pCookie) \
    ( (This)->lpVtbl->add_CharacterReceived(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_CharacterReceived(This,cookie) \
    ( (This)->lpVtbl->remove_CharacterReceived(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_Closed(This,handler,pCookie) \
    ( (This)->lpVtbl->add_Closed(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_Closed(This,cookie) \
    ( (This)->lpVtbl->remove_Closed(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_InputEnabled(This,handler,pCookie) \
    ( (This)->lpVtbl->add_InputEnabled(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_InputEnabled(This,cookie) \
    ( (This)->lpVtbl->remove_InputEnabled(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_KeyDown(This,handler,pCookie) \
    ( (This)->lpVtbl->add_KeyDown(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_KeyDown(This,cookie) \
    ( (This)->lpVtbl->remove_KeyDown(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_KeyUp(This,handler,pCookie) \
    ( (This)->lpVtbl->add_KeyUp(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_KeyUp(This,cookie) \
    ( (This)->lpVtbl->remove_KeyUp(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_PointerCaptureLost(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerCaptureLost(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_PointerCaptureLost(This,cookie) \
    ( (This)->lpVtbl->remove_PointerCaptureLost(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_PointerEntered(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerEntered(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_PointerEntered(This,cookie) \
    ( (This)->lpVtbl->remove_PointerEntered(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_PointerExited(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerExited(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_PointerExited(This,cookie) \
    ( (This)->lpVtbl->remove_PointerExited(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_PointerMoved(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerMoved(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_PointerMoved(This,cookie) \
    ( (This)->lpVtbl->remove_PointerMoved(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_PointerPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerPressed(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_PointerPressed(This,cookie) \
    ( (This)->lpVtbl->remove_PointerPressed(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_PointerReleased(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerReleased(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_PointerReleased(This,cookie) \
    ( (This)->lpVtbl->remove_PointerReleased(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_TouchHitTesting(This,handler,pCookie) \
    ( (This)->lpVtbl->add_TouchHitTesting(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_TouchHitTesting(This,cookie) \
    ( (This)->lpVtbl->remove_TouchHitTesting(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_PointerWheelChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerWheelChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_PointerWheelChanged(This,cookie) \
    ( (This)->lpVtbl->remove_PointerWheelChanged(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_SizeChanged(This,handler,pCookie) \
    ( (This)->lpVtbl->add_SizeChanged(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_SizeChanged(This,cookie) \
    ( (This)->lpVtbl->remove_SizeChanged(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_add_VisibilityChanged(This,handler,pCookie) \
    ( (This)->lpVtbl->add_VisibilityChanged(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow_remove_VisibilityChanged(This,cookie) \
    ( (This)->lpVtbl->remove_VisibilityChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow2[] = L"Windows.UI.Core.ICoreWindow2";
/* [object, uuid("7C2B1B85-6917-4361-9C02-0D9E3A420B95"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindow2Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindow2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow2_put_PointerPosition(This,value) \
    ( (This)->lpVtbl->put_PointerPosition(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow3[] = L"Windows.UI.Core.ICoreWindow3";
/* [object, uuid("32C20DD8-FAEF-4375-A2AB-32640E4815C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyEventDeviceId )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindow3Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindow3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_add_ClosestInteractiveBoundsRequested(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ClosestInteractiveBoundsRequested(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_remove_ClosestInteractiveBoundsRequested(This,cookie) \
    ( (This)->lpVtbl->remove_ClosestInteractiveBoundsRequested(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow3_GetCurrentKeyEventDeviceId(This,value) \
    ( (This)->lpVtbl->GetCurrentKeyEventDeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow3;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow4[] = L"Windows.UI.Core.ICoreWindow4";
/* [object, uuid("35CAF0D0-47F0-436C-AF97-0DD88F6F5F02"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ResizeStarted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ResizeStarted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ResizeCompleted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ResizeCompleted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindow4Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindow4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_add_ResizeStarted(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ResizeStarted(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_remove_ResizeStarted(This,cookie) \
    ( (This)->lpVtbl->remove_ResizeStarted(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_add_ResizeCompleted(This,handler,pCookie) \
    ( (This)->lpVtbl->add_ResizeCompleted(This,handler,pCookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow4_remove_ResizeCompleted(This,cookie) \
    ( (This)->lpVtbl->remove_ResizeCompleted(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow4;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Core.ICoreWindow5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow5[] = L"Windows.UI.Core.ICoreWindow5";
/* [object, uuid("4B4AE1E1-2E6D-4EAA-BDA1-1C5CC1BEE141"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivationMode )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindow5Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindow5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_get_DispatcherQueue(This,value) \
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindow5_get_ActivationMode(This,value) \
    ( (This)->lpVtbl->get_ActivationMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow5;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindow5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowDialog
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowDialog
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowDialog[] = L"Windows.UI.Core.ICoreWindowDialog";
/* [object, uuid("E7392CE0-C78D-427E-8B2C-01FF420C69D5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_add_Showing(This,handler,cookie) \
    ( (This)->lpVtbl->add_Showing(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_remove_Showing(This,cookie) \
    ( (This)->lpVtbl->remove_Showing(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_MaxSize(This,value) \
    ( (This)->lpVtbl->get_MaxSize(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_MinSize(This,value) \
    ( (This)->lpVtbl->get_MinSize(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_IsInteractionDelayed(This,value) \
    ( (This)->lpVtbl->get_IsInteractionDelayed(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_put_IsInteractionDelayed(This,value) \
    ( (This)->lpVtbl->put_IsInteractionDelayed(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_Commands(This,value) \
    ( (This)->lpVtbl->get_Commands(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_DefaultCommandIndex(This,value) \
    ( (This)->lpVtbl->get_DefaultCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_put_DefaultCommandIndex(This,value) \
    ( (This)->lpVtbl->put_DefaultCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_CancelCommandIndex(This,value) \
    ( (This)->lpVtbl->get_CancelCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_put_CancelCommandIndex(This,value) \
    ( (This)->lpVtbl->put_CancelCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_get_BackButtonCommand(This,value) \
    ( (This)->lpVtbl->get_BackButtonCommand(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_put_BackButtonCommand(This,value) \
    ( (This)->lpVtbl->put_BackButtonCommand(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_ShowAsync(This,asyncInfo) \
    ( (This)->lpVtbl->ShowAsync(This,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowDialog;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialog_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowDialogFactory
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowDialog
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowDialogFactory[] = L"Windows.UI.Core.ICoreWindowDialogFactory";
/* [object, uuid("CFB2A855-1C59-4B13-B1E5-16E29805F7C4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithTitle )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
        /* [in] */__RPC__in HSTRING title,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * * coreWindowDialog
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactoryVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_CreateWithTitle(This,title,coreWindowDialog) \
    ( (This)->lpVtbl->CreateWithTitle(This,title,coreWindowDialog) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowEventArgs[] = L"Windows.UI.Core.ICoreWindowEventArgs";
/* [object, uuid("272B1EF3-C633-4DA5-A26C-C6D0F56B29DA"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowFlyout
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowFlyout
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFlyout[] = L"Windows.UI.Core.ICoreWindowFlyout";
/* [object, uuid("E89D854D-2050-40BB-B344-F6F355EEB314"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_add_Showing(This,handler,cookie) \
    ( (This)->lpVtbl->add_Showing(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_remove_Showing(This,cookie) \
    ( (This)->lpVtbl->remove_Showing(This,cookie) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_get_MaxSize(This,value) \
    ( (This)->lpVtbl->get_MaxSize(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_get_MinSize(This,value) \
    ( (This)->lpVtbl->get_MinSize(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_get_IsInteractionDelayed(This,value) \
    ( (This)->lpVtbl->get_IsInteractionDelayed(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_put_IsInteractionDelayed(This,value) \
    ( (This)->lpVtbl->put_IsInteractionDelayed(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_get_Commands(This,value) \
    ( (This)->lpVtbl->get_Commands(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_get_DefaultCommandIndex(This,value) \
    ( (This)->lpVtbl->get_DefaultCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_put_DefaultCommandIndex(This,value) \
    ( (This)->lpVtbl->put_DefaultCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_get_BackButtonCommand(This,value) \
    ( (This)->lpVtbl->get_BackButtonCommand(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_put_BackButtonCommand(This,value) \
    ( (This)->lpVtbl->put_BackButtonCommand(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_ShowAsync(This,asyncInfo) \
    ( (This)->lpVtbl->ShowAsync(This,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowFlyoutFactory
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowFlyout
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFlyoutFactory[] = L"Windows.UI.Core.ICoreWindowFlyoutFactory";
/* [object, uuid("DEC4C6C4-93E8-4F7C-BE27-CEFAA1AF68A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint position,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * * coreWindowFlyout
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTitle )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint position,
        /* [in] */__RPC__in HSTRING title,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * * coreWindowFlyout
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactoryVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_Create(This,position,coreWindowFlyout) \
    ( (This)->lpVtbl->Create(This,position,coreWindowFlyout) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_CreateWithTitle(This,position,title,coreWindowFlyout) \
    ( (This)->lpVtbl->CreateWithTitle(This,position,title,coreWindowFlyout) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowPopupShowingEventArgs
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowPopupShowingEventArgs
 *
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowPopupShowingEventArgs[] = L"Windows.UI.Core.ICoreWindowPopupShowingEventArgs";
/* [object, uuid("26155FA2-5BA5-4EA4-A3B4-2DC7D63C8E26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDesiredSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_SetDesiredSize(This,value) \
    ( (This)->lpVtbl->SetDesiredSize(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowResizeManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowResizeManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManager[] = L"Windows.UI.Core.ICoreWindowResizeManager";
/* [object, uuid("B8F0B925-B350-48B3-A198-5C1A84700243"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyLayoutCompleted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_NotifyLayoutCompleted(This) \
    ( (This)->lpVtbl->NotifyLayoutCompleted(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowResizeManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability[] = L"Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability";
/* [object, uuid("BB74F27B-A544-4301-80E6-0AE033EF4536"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShouldWaitForLayoutCompletion )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShouldWaitForLayoutCompletion )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapabilityVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapabilityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_put_ShouldWaitForLayoutCompletion(This,value) \
    ( (This)->lpVtbl->put_ShouldWaitForLayoutCompletion(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_get_ShouldWaitForLayoutCompletion(This,value) \
    ( (This)->lpVtbl->get_ShouldWaitForLayoutCompletion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowResizeManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindowResizeManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManagerStatics[] = L"Windows.UI.Core.ICoreWindowResizeManagerStatics";
/* [object, uuid("AE4A9045-6D70-49DB-8E68-46FFBD17D38D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * * CoreWindowResizeManager
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_GetForCurrentView(This,CoreWindowResizeManager) \
    ( (This)->lpVtbl->GetForCurrentView(This,CoreWindowResizeManager) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ICoreWindowStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.CoreWindow
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowStatic[] = L"Windows.UI.Core.ICoreWindowStatic";
/* [object, uuid("4D239005-3C2A-41B1-9022-536BB9CF93B1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentThread )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * * ppWindow
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CICoreWindowStaticVtbl;

interface __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowStaticVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_GetForCurrentThread(This,ppWindow) \
    ( (This)->lpVtbl->GetForCurrentThread(This,ppWindow) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowStatic;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IIdleDispatchedHandlerArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.IdleDispatchedHandlerArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IIdleDispatchedHandlerArgs[] = L"Windows.UI.Core.IIdleDispatchedHandlerArgs";
/* [object, uuid("98BB6A24-DC1C-43CB-B4ED-D1C0EB2391F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDispatcherIdle )(
        __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_get_IsDispatcherIdle(This,value) \
    ( (This)->lpVtbl->get_IsDispatcherIdle(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IInitializeWithCoreWindow
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IInitializeWithCoreWindow[] = L"Windows.UI.Core.IInitializeWithCoreWindow";
/* [object, uuid("188F20D6-9873-464A-ACE5-57E010F465E6"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Initialize )(
        __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * window
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindowVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindowVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_Initialize(This,window) \
    ( (This)->lpVtbl->Initialize(This,window) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IInputEnabledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.InputEnabledEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IInputEnabledEventArgs[] = L"Windows.UI.Core.IInputEnabledEventArgs";
/* [object, uuid("80371D4F-2FD8-4C24-AA86-3163A87B4E5A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_get_InputEnabled(This,value) \
    ( (This)->lpVtbl->get_InputEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IKeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.KeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IKeyEventArgs[] = L"Windows.UI.Core.IKeyEventArgs";
/* [object, uuid("5FF5E930-2544-4A17-BD78-1F2FDEBB106B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIKeyEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_get_VirtualKey(This,value) \
    ( (This)->lpVtbl->get_VirtualKey(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_get_KeyStatus(This,value) \
    ( (This)->lpVtbl->get_KeyStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IKeyEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.KeyEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IKeyEventArgs2[] = L"Windows.UI.Core.IKeyEventArgs2";
/* [object, uuid("583ADD98-0790-4571-9B12-645EF9D79E42"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Core.IPointerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.PointerEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IPointerEventArgs[] = L"Windows.UI.Core.IPointerEventArgs";
/* [object, uuid("920D9CB1-A5FC-4A21-8C09-49DFE6FFE25F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentPoint )(
        __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyModifiers )(
        __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIPointerEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_get_CurrentPoint(This,value) \
    ( (This)->lpVtbl->get_CurrentPoint(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_get_KeyModifiers(This,value) \
    ( (This)->lpVtbl->get_KeyModifiers(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_GetIntermediatePoints(This,value) \
    ( (This)->lpVtbl->GetIntermediatePoints(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ISystemNavigationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.SystemNavigationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManager[] = L"Windows.UI.Core.ISystemNavigationManager";
/* [object, uuid("93023118-CF50-42A6-9706-69107FA122E1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_BackRequested )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_BackRequested )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerVtbl;

interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_add_BackRequested(This,handler,token) \
    ( (This)->lpVtbl->add_BackRequested(This,handler,token) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_remove_BackRequested(This,token) \
    ( (This)->lpVtbl->remove_BackRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ISystemNavigationManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.SystemNavigationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManager2[] = L"Windows.UI.Core.ISystemNavigationManager2";
/* [object, uuid("8C510401-67BE-49AE-9509-671C1E54A389"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppViewBackButtonVisibility )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppViewBackButtonVisibility )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2Vtbl;

interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_get_AppViewBackButtonVisibility(This,value) \
    ( (This)->lpVtbl->get_AppViewBackButtonVisibility(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_put_AppViewBackButtonVisibility(This,value) \
    ( (This)->lpVtbl->put_AppViewBackButtonVisibility(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ISystemNavigationManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.SystemNavigationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManagerStatics[] = L"Windows.UI.Core.ISystemNavigationManagerStatics";
/* [object, uuid("DC52B5CE-BEE0-4305-8C54-68228ED683B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * * loader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_GetForCurrentView(This,loader) \
    ( (This)->lpVtbl->GetForCurrentView(This,loader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.ITouchHitTestingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.TouchHitTestingEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ITouchHitTestingEventArgs[] = L"Windows.UI.Core.ITouchHitTestingEventArgs";
/* [object, uuid("22F3B823-0B7C-424E-9DF7-33D4F962931B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProximityEvaluation )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProximityEvaluation )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *EvaluateProximityToRect )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect controlBoundingBox,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation * proximityEvaluation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *EvaluateProximityToPolygon )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
        /* [in] */UINT32 __controlVerticesSize,
        /* [size_is(__controlVerticesSize), in] */__RPC__in_ecount_full(__controlVerticesSize) __x_ABI_CWindows_CFoundation_CPoint * controlVertices,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation * proximityEvaluation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_get_ProximityEvaluation(This,value) \
    ( (This)->lpVtbl->get_ProximityEvaluation(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_put_ProximityEvaluation(This,value) \
    ( (This)->lpVtbl->put_ProximityEvaluation(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_get_Point(This,value) \
    ( (This)->lpVtbl->get_Point(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_get_BoundingBox(This,value) \
    ( (This)->lpVtbl->get_BoundingBox(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_EvaluateProximityToRect(This,controlBoundingBox,proximityEvaluation) \
    ( (This)->lpVtbl->EvaluateProximityToRect(This,controlBoundingBox,proximityEvaluation) )

#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_EvaluateProximityToPolygon(This,__controlVerticesSize,controlVertices,proximityEvaluation) \
    ( (This)->lpVtbl->EvaluateProximityToPolygon(This,__controlVerticesSize,controlVertices,proximityEvaluation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IVisibilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.VisibilityChangedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IVisibilityChangedEventArgs[] = L"Windows.UI.Core.IVisibilityChangedEventArgs";
/* [object, uuid("BF9918EA-D801-4564-A495-B1E84F8AD085"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_get_Visible(This,value) \
    ( (This)->lpVtbl->get_Visible(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IWindowActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.WindowActivatedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IWindowActivatedEventArgs[] = L"Windows.UI.Core.IWindowActivatedEventArgs";
/* [object, uuid("179D65E7-4658-4CB6-AA13-41D094EA255E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowActivationState )(
        __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_get_WindowActivationState(This,value) \
    ( (This)->lpVtbl->get_WindowActivationState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.IWindowSizeChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.WindowSizeChangedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.ICoreWindowEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IWindowSizeChangedEventArgs[] = L"Windows.UI.Core.IWindowSizeChangedEventArgs";
/* [object, uuid("5A200EC7-0426-47DC-B86C-6F475915E451"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AcceleratorKeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IAcceleratorKeyEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *    Windows.UI.Core.IAcceleratorKeyEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AcceleratorKeyEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AcceleratorKeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AcceleratorKeyEventArgs[] = L"Windows.UI.Core.AcceleratorKeyEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AutomationProviderRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IAutomationProviderRequestedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AutomationProviderRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AutomationProviderRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AutomationProviderRequestedEventArgs[] = L"Windows.UI.Core.AutomationProviderRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.BackRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IBackRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_BackRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_BackRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_BackRequestedEventArgs[] = L"Windows.UI.Core.BackRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CharacterReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICharacterReceivedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CharacterReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CharacterReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CharacterReceivedEventArgs[] = L"Windows.UI.Core.CharacterReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Core_ClosestInteractiveBoundsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_ClosestInteractiveBoundsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_ClosestInteractiveBoundsRequestedEventArgs[] = L"Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Core.CoreAcceleratorKeys
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreAcceleratorKeys ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreAcceleratorKeys_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreAcceleratorKeys_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreAcceleratorKeys[] = L"Windows.UI.Core.CoreAcceleratorKeys";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreComponentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreInputSourceBase ** Default Interface **
 *    Windows.UI.Core.ICorePointerInputSource
 *    Windows.UI.Core.ICoreKeyboardInputSource
 *    Windows.UI.Core.ICoreComponentFocusable
 *    Windows.UI.Core.ICoreTouchHitTesting
 *    Windows.UI.Core.ICoreClosestInteractiveBoundsRequested
 *    Windows.UI.Core.ICoreKeyboardInputSource2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreComponentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreComponentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreComponentInputSource[] = L"Windows.UI.Core.CoreComponentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreCursor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.ICoreCursorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreCursor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreCursor_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreCursor[] = L"Windows.UI.Core.CoreCursor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreDispatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreDispatcher ** Default Interface **
 *    Windows.UI.Core.ICoreAcceleratorKeys
 *    Windows.UI.Core.ICoreDispatcherWithTaskPriority
 *    Windows.UI.Core.ICoreDispatcher2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreDispatcher_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreDispatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreDispatcher[] = L"Windows.UI.Core.CoreDispatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreInputSourceBase ** Default Interface **
 *    Windows.UI.Core.ICorePointerInputSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreIndependentInputSource[] = L"Windows.UI.Core.CoreIndependentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindow
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Core.ICoreWindowStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindow ** Default Interface **
 *    Windows.UI.Core.ICoreWindow2
 *    Windows.UI.Core.ICorePointerRedirector
 *    Windows.UI.Core.ICoreWindow3
 *    Windows.UI.Core.ICoreWindow4
 *    Windows.UI.Core.ICoreWindow5
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindow_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindow_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindow[] = L"Windows.UI.Core.CoreWindow";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowDialog
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.ICoreWindowDialogFactory interface starting with version 1.0 of the Windows.UI.Core.CoreWindowDialogsContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.UI.Core.CoreWindowDialogsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowDialog ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowDialog_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowDialog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowDialog[] = L"Windows.UI.Core.CoreWindowDialog";
#endif
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowEventArgs[] = L"Windows.UI.Core.CoreWindowEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowFlyout
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.ICoreWindowFlyoutFactory interface starting with version 1.0 of the Windows.UI.Core.CoreWindowDialogsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowFlyout ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowFlyout_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowFlyout_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowFlyout[] = L"Windows.UI.Core.CoreWindowFlyout";
#endif
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowPopupShowingEventArgs
 *
 * Introduced to Windows.UI.Core.CoreWindowDialogsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowPopupShowingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowPopupShowingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowPopupShowingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowPopupShowingEventArgs[] = L"Windows.UI.Core.CoreWindowPopupShowingEventArgs";
#endif
#endif // WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.CoreWindowResizeManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Core.ICoreWindowResizeManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ICoreWindowResizeManager ** Default Interface **
 *    Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_CoreWindowResizeManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_CoreWindowResizeManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowResizeManager[] = L"Windows.UI.Core.CoreWindowResizeManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.IdleDispatchedHandlerArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IIdleDispatchedHandlerArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_IdleDispatchedHandlerArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_IdleDispatchedHandlerArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_IdleDispatchedHandlerArgs[] = L"Windows.UI.Core.IdleDispatchedHandlerArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.InputEnabledEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IInputEnabledEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_InputEnabledEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_InputEnabledEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_InputEnabledEventArgs[] = L"Windows.UI.Core.InputEnabledEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.KeyEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IKeyEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *    Windows.UI.Core.IKeyEventArgs2
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_KeyEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_KeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_KeyEventArgs[] = L"Windows.UI.Core.KeyEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.PointerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IPointerEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_PointerEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_PointerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_PointerEventArgs[] = L"Windows.UI.Core.PointerEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.SystemNavigationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Core.ISystemNavigationManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ISystemNavigationManager ** Default Interface **
 *    Windows.UI.Core.ISystemNavigationManager2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_SystemNavigationManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_SystemNavigationManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_SystemNavigationManager[] = L"Windows.UI.Core.SystemNavigationManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.TouchHitTestingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.ITouchHitTestingEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_TouchHitTestingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_TouchHitTestingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_TouchHitTestingEventArgs[] = L"Windows.UI.Core.TouchHitTestingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.VisibilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IVisibilityChangedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_VisibilityChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_VisibilityChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_VisibilityChangedEventArgs[] = L"Windows.UI.Core.VisibilityChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.WindowActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IWindowActivatedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_WindowActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_WindowActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_WindowActivatedEventArgs[] = L"Windows.UI.Core.WindowActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.WindowSizeChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.IWindowSizeChangedEventArgs ** Default Interface **
 *    Windows.UI.Core.ICoreWindowEventArgs
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_WindowSizeChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_WindowSizeChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_WindowSizeChangedEventArgs[] = L"Windows.UI.Core.WindowSizeChangedEventArgs";
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
#endif // __windows2Eui2Ecore_p_h__

#endif // __windows2Eui2Ecore_h__
