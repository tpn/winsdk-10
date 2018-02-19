/* Header file automatically generated from windows.ui.viewmanagement.idl */
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
#ifndef __windows2Eui2Eviewmanagement_h__
#define __windows2Eui2Eviewmanagement_h__
#ifndef __windows2Eui2Eviewmanagement_p_h__
#define __windows2Eui2Eviewmanagement_p_h__


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
#include "Windows.Devices.Enumeration.h"
#include "Windows.UI.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IAccessibilitySettings;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings ABI::Windows::UI::ViewManagement::IAccessibilitySettings

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IActivationViewSwitcher;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher ABI::Windows::UI::ViewManagement::IActivationViewSwitcher

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationView;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView ABI::Windows::UI::ViewManagement::IApplicationView

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationView2;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 ABI::Windows::UI::ViewManagement::IApplicationView2

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationView3;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 ABI::Windows::UI::ViewManagement::IApplicationView3

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationView4;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 ABI::Windows::UI::ViewManagement::IApplicationView4

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewConsolidatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs ABI::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewConsolidatedEventArgs2;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 ABI::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewFullscreenStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics ABI::Windows::UI::ViewManagement::IApplicationViewFullscreenStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewInteropStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics ABI::Windows::UI::ViewManagement::IApplicationViewInteropStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewScaling;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling ABI::Windows::UI::ViewManagement::IApplicationViewScaling

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewScalingStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics ABI::Windows::UI::ViewManagement::IApplicationViewScalingStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics ABI::Windows::UI::ViewManagement::IApplicationViewStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewStatics2;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 ABI::Windows::UI::ViewManagement::IApplicationViewStatics2

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewStatics3;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 ABI::Windows::UI::ViewManagement::IApplicationViewStatics3

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewSwitcherStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics ABI::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewSwitcherStatics2;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 ABI::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewSwitcherStatics3;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 ABI::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewTitleBar;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar ABI::Windows::UI::ViewManagement::IApplicationViewTitleBar

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewTransferContext;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext ABI::Windows::UI::ViewManagement::IApplicationViewTransferContext

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IApplicationViewTransferContextStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics ABI::Windows::UI::ViewManagement::IApplicationViewTransferContextStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IInputPane;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane ABI::Windows::UI::ViewManagement::IInputPane

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IInputPane2;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 ABI::Windows::UI::ViewManagement::IInputPane2

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IInputPaneControl;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl ABI::Windows::UI::ViewManagement::IInputPaneControl

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IInputPaneStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics ABI::Windows::UI::ViewManagement::IInputPaneStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IInputPaneVisibilityEventArgs;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs ABI::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IProjectionManagerStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics ABI::Windows::UI::ViewManagement::IProjectionManagerStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IProjectionManagerStatics2;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 ABI::Windows::UI::ViewManagement::IProjectionManagerStatics2

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IUISettings;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings ABI::Windows::UI::ViewManagement::IUISettings

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IUISettings2;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 ABI::Windows::UI::ViewManagement::IUISettings2

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IUISettings3;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 ABI::Windows::UI::ViewManagement::IUISettings3

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IUISettings4;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 ABI::Windows::UI::ViewManagement::IUISettings4

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IUIViewSettings;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings ABI::Windows::UI::ViewManagement::IUIViewSettings

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IUIViewSettingsStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics ABI::Windows::UI::ViewManagement::IUIViewSettingsStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IViewModePreferences;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences ABI::Windows::UI::ViewManagement::IViewModePreferences

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IViewModePreferencesStatics;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics ABI::Windows::UI::ViewManagement::IViewModePreferencesStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                enum UIElementType : int;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CUI__CViewManagement__CUIElementType_USE
#define DEF___FIReference_1_Windows__CUI__CViewManagement__CUIElementType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e17e08c9-7deb-51d1-8487-334eb3fe4691"))
IReference<enum ABI::Windows::UI::ViewManagement::UIElementType> : IReference_impl<enum ABI::Windows::UI::ViewManagement::UIElementType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.UI.ViewManagement.UIElementType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::UI::ViewManagement::UIElementType> __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_t;
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType ABI::Windows::Foundation::__FIReference_1_Windows__CUI__CViewManagement__CUIElementType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType ABI::Windows::Foundation::IReference<ABI::Windows::UI::ViewManagement::UIElementType>
//#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_t ABI::Windows::Foundation::IReference<ABI::Windows::UI::ViewManagement::UIElementType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CUI__CViewManagement__CUIElementType_USE */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class AccessibilitySettings;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f5917e6f-5abf-5e65-b5b4-1b9c8d94e788"))
ITypedEventHandler<ABI::Windows::UI::ViewManagement::AccessibilitySettings*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::AccessibilitySettings*, ABI::Windows::UI::ViewManagement::IAccessibilitySettings*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.AccessibilitySettings, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ViewManagement::AccessibilitySettings*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IAccessibilitySettings*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IAccessibilitySettings*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class ApplicationView;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("00c1f983-c836-565c-8bbf-7053055bdb4c"))
ITypedEventHandler<ABI::Windows::UI::ViewManagement::ApplicationView*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::ApplicationView*, ABI::Windows::UI::ViewManagement::IApplicationView*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.ApplicationView, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ViewManagement::ApplicationView*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IApplicationView*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IApplicationView*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class ApplicationViewConsolidatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("463c606a-8c82-5a29-a2bd-040781f25348"))
ITypedEventHandler<ABI::Windows::UI::ViewManagement::ApplicationView*,ABI::Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::ApplicationView*, ABI::Windows::UI::ViewManagement::IApplicationView*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs*, ABI::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.ApplicationView, Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ViewManagement::ApplicationView*,ABI::Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IApplicationView*,ABI::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IApplicationView*,ABI::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class InputPane;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class InputPaneVisibilityEventArgs;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b813d684-d953-5a8a-9b30-78b79fb9147b"))
ITypedEventHandler<ABI::Windows::UI::ViewManagement::InputPane*,ABI::Windows::UI::ViewManagement::InputPaneVisibilityEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::InputPane*, ABI::Windows::UI::ViewManagement::IInputPane*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::InputPaneVisibilityEventArgs*, ABI::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane, Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ViewManagement::InputPane*,ABI::Windows::UI::ViewManagement::InputPaneVisibilityEventArgs*> __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IInputPane*,ABI::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IInputPane*,ABI::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class UISettings;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2dbdba9d-20da-519d-9078-09f835bc5bc7"))
ITypedEventHandler<ABI::Windows::UI::ViewManagement::UISettings*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::UISettings*, ABI::Windows::UI::ViewManagement::IUISettings*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.UISettings, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ViewManagement::UISettings*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IUISettings*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::IUISettings*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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



namespace ABI {
    namespace Windows {
        namespace UI {
            struct Color;
            
        } /* Windows */
    } /* UI */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CUI__CColor_USE
#define DEF___FIReference_1_Windows__CUI__CColor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ab8e5d11-b0c1-5a21-95ae-f16bf3a37624"))
IReference<struct ABI::Windows::UI::Color> : IReference_impl<struct ABI::Windows::UI::Color> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.UI.Color>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::UI::Color> __FIReference_1_Windows__CUI__CColor_t;
#define __FIReference_1_Windows__CUI__CColor ABI::Windows::Foundation::__FIReference_1_Windows__CUI__CColor_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CUI__CColor ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>
//#define __FIReference_1_Windows__CUI__CColor_t ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CUI__CColor_USE */





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
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation ABI::Windows::Devices::Enumeration::IDeviceInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



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





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                
                typedef enum Placement : int Placement;
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum ApplicationViewBoundsMode : int ApplicationViewBoundsMode;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum ApplicationViewMode : int ApplicationViewMode;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum ApplicationViewOrientation : int ApplicationViewOrientation;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum ApplicationViewState : int ApplicationViewState;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum ApplicationViewSwitchingOptions : unsigned int ApplicationViewSwitchingOptions;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum ApplicationViewWindowingMode : int ApplicationViewWindowingMode;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum FullScreenSystemOverlayMode : int FullScreenSystemOverlayMode;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum HandPreference : int HandPreference;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum UIColorType : int UIColorType;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum UIElementType : int UIElementType;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum UserInteractionMode : int UserInteractionMode;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum ViewSizePreference : int ViewSizePreference;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */






































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class ActivationViewSwitcher;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class ApplicationViewScaling;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class ApplicationViewTitleBar;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class ApplicationViewTransferContext;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class UIViewSettings;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                class ViewModePreferences;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */











/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewBoundsMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum ApplicationViewBoundsMode : int
                {
                    ApplicationViewBoundsMode_UseVisible = 0,
                    ApplicationViewBoundsMode_UseCoreWindow = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum ApplicationViewMode : int
                {
                    ApplicationViewMode_Default = 0,
                    ApplicationViewMode_CompactOverlay = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewOrientation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum ApplicationViewOrientation : int
                {
                    ApplicationViewOrientation_Landscape = 0,
                    ApplicationViewOrientation_Portrait = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, deprecated, contract] */
                enum 
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("ApplicationViewState may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                ApplicationViewState : int
                {
                    ApplicationViewState_FullScreenLandscape = 0,
                    ApplicationViewState_Filled = 1,
                    ApplicationViewState_Snapped = 2,
                    ApplicationViewState_FullScreenPortrait = 3,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewSwitchingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, flags, contract] */
                enum ApplicationViewSwitchingOptions : unsigned int
                {
                    ApplicationViewSwitchingOptions_Default = 0,
                    ApplicationViewSwitchingOptions_SkipAnimation = 0x1,
                    ApplicationViewSwitchingOptions_ConsolidateViews = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(ApplicationViewSwitchingOptions)
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewWindowingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum ApplicationViewWindowingMode : int
                {
                    ApplicationViewWindowingMode_Auto = 0,
                    ApplicationViewWindowingMode_PreferredLaunchViewSize = 1,
                    ApplicationViewWindowingMode_FullScreen = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.FullScreenSystemOverlayMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum FullScreenSystemOverlayMode : int
                {
                    FullScreenSystemOverlayMode_Standard = 0,
                    FullScreenSystemOverlayMode_Minimal = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.HandPreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum HandPreference : int
                {
                    HandPreference_LeftHanded = 0,
                    HandPreference_RightHanded = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.UIColorType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum UIColorType : int
                {
                    UIColorType_Background = 0,
                    UIColorType_Foreground = 1,
                    UIColorType_AccentDark3 = 2,
                    UIColorType_AccentDark2 = 3,
                    UIColorType_AccentDark1 = 4,
                    UIColorType_Accent = 5,
                    UIColorType_AccentLight1 = 6,
                    UIColorType_AccentLight2 = 7,
                    UIColorType_AccentLight3 = 8,
                    UIColorType_Complement = 9,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.UIElementType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum UIElementType : int
                {
                    UIElementType_ActiveCaption = 0,
                    UIElementType_Background = 1,
                    UIElementType_ButtonFace = 2,
                    UIElementType_ButtonText = 3,
                    UIElementType_CaptionText = 4,
                    UIElementType_GrayText = 5,
                    UIElementType_Highlight = 6,
                    UIElementType_HighlightText = 7,
                    UIElementType_Hotlight = 8,
                    UIElementType_InactiveCaption = 9,
                    UIElementType_InactiveCaptionText = 10,
                    UIElementType_Window = 11,
                    UIElementType_WindowText = 12,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_AccentColor = 1000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_TextHigh = 1001,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_TextMedium = 1002,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_TextLow = 1003,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_TextContrastWithHigh = 1004,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_NonTextHigh = 1005,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_NonTextMediumHigh = 1006,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_NonTextMedium = 1007,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_NonTextMediumLow = 1008,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_NonTextLow = 1009,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_PageBackground = 1010,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_PopupBackground = 1011,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    UIElementType_OverlayOutsidePopup = 1012,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.UserInteractionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum UserInteractionMode : int
                {
                    UserInteractionMode_Mouse = 0,
                    UserInteractionMode_Touch = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ViewSizePreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [v1_enum, contract] */
                enum ViewSizePreference : int
                {
                    ViewSizePreference_Default = 0,
                    ViewSizePreference_UseLess = 1,
                    ViewSizePreference_UseHalf = 2,
                    ViewSizePreference_UseMore = 3,
                    ViewSizePreference_UseMinimum = 4,
                    ViewSizePreference_UseNone = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    ViewSizePreference_Custom = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                };
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IAccessibilitySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.AccessibilitySettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IAccessibilitySettings[] = L"Windows.UI.ViewManagement.IAccessibilitySettings";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("FE0E8147-C4C0-4562-B962-1327B52AD5B9"), exclusiveto, contract] */
                MIDL_INTERFACE("FE0E8147-C4C0-4562-B962-1327B52AD5B9")
                IAccessibilitySettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HighContrast(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HighContrastScheme(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HighContrastChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HighContrastChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAccessibilitySettings=_uuidof(IAccessibilitySettings);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IActivationViewSwitcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ActivationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IActivationViewSwitcher[] = L"Windows.UI.ViewManagement.IActivationViewSwitcher";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("DCA71BB6-7350-492B-AAC7-C8A13D7224AD"), exclusiveto, contract] */
                MIDL_INTERFACE("DCA71BB6-7350-492B-AAC7-C8A13D7224AD")
                IActivationViewSwitcher : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAsStandaloneAsync(
                        /* [in] */INT32 viewId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAsStandaloneWithSizePreferenceAsync(
                        /* [in] */INT32 viewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ViewSizePreference sizePreference,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsViewPresentedOnActivationVirtualDesktop(
                        /* [in] */INT32 viewId,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IActivationViewSwitcher=_uuidof(IActivationViewSwitcher);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView[] = L"Windows.UI.ViewManagement.IApplicationView";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("D222D519-4361-451E-96C4-60F4F9742DB0"), exclusiveto, contract] */
                MIDL_INTERFACE("D222D519-4361-451E-96C4-60F4F9742DB0")
                IApplicationView : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::ApplicationViewOrientation * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdjacentToLeftDisplayEdge(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdjacentToRightDisplayEdge(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("To check full screen mode, use IsFullScreenMode. To check if the view is adjacent to both edges, use AdjacentToLeftDisplayEdge and AdjacentToRightDisplayEdge. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_IsFullScreen(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOnLockScreen(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsScreenCaptureEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsScreenCaptureEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Consolidated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Consolidated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationView=_uuidof(IApplicationView);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView2[] = L"Windows.UI.ViewManagement.IApplicationView2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("E876B196-A545-40DC-B594-450CBA68CC00"), exclusiveto, contract] */
                MIDL_INTERFACE("E876B196-A545-40DC-B594-450CBA68CC00")
                IApplicationView2 : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SuppressSystemOverlays(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_SuppressSystemOverlays(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisibleBounds(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_VisibleBoundsChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_VisibleBoundsChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDesiredBoundsMode(
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewBoundsMode boundsMode,
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredBoundsMode(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::ApplicationViewBoundsMode * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationView2=_uuidof(IApplicationView2);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView3[] = L"Windows.UI.ViewManagement.IApplicationView3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("903C9CE5-793A-4FDF-A2B2-AF1AC21E3108"), exclusiveto, contract] */
                MIDL_INTERFACE("903C9CE5-793A-4FDF-A2B2-AF1AC21E3108")
                IApplicationView3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TitleBar(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ViewManagement::IApplicationViewTitleBar * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullScreenSystemOverlayMode(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::FullScreenSystemOverlayMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FullScreenSystemOverlayMode(
                        /* [in] */ABI::Windows::UI::ViewManagement::FullScreenSystemOverlayMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsFullScreenMode(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryEnterFullScreenMode(
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ExitFullScreenMode(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowStandardSystemOverlays(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryResizeView(
                        /* [in] */ABI::Windows::Foundation::Size value,
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPreferredMinSize(
                        /* [in] */ABI::Windows::Foundation::Size minSize
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationView3=_uuidof(IApplicationView3);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView4[] = L"Windows.UI.ViewManagement.IApplicationView4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("15E5CBEC-9E0F-46B5-BC3F-9BF653E74B5E"), exclusiveto, contract] */
                MIDL_INTERFACE("15E5CBEC-9E0F-46B5-BC3F-9BF653E74B5E")
                IApplicationView4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewMode(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::ApplicationViewMode * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsViewModeSupported(
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewMode viewMode,
                        /* [retval, out] */__RPC__out boolean * isViewModeSupported
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryEnterViewModeAsync(
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewMode viewMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryEnterViewModeWithPreferencesAsync(
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewMode viewMode,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ViewManagement::IViewModePreferences * viewModePreferences,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryConsolidateAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationView4=_uuidof(IApplicationView4);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs[] = L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("514449EC-7EA2-4DE7-A6A6-7DFBAAEBB6FB"), exclusiveto, contract] */
                MIDL_INTERFACE("514449EC-7EA2-4DE7-A6A6-7DFBAAEBB6FB")
                IApplicationViewConsolidatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUserInitiated(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewConsolidatedEventArgs=_uuidof(IApplicationViewConsolidatedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2[] = L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("1C199ECC-6DC1-40F4-AFEE-07D9EA296430"), exclusiveto, contract] */
                MIDL_INTERFACE("1C199ECC-6DC1-40F4-AFEE-07D9EA296430")
                IApplicationViewConsolidatedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAppInitiated(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewConsolidatedEventArgs2=_uuidof(IApplicationViewConsolidatedEventArgs2);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics[] = L"Windows.UI.ViewManagement.IApplicationViewFullscreenStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("BC792EBD-64FE-4B65-A0C0-901CE2B68636"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("BC792EBD-64FE-4B65-A0C0-901CE2B68636")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IApplicationViewFullscreenStatics : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE TryUnsnapToFullscreen(
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewFullscreenStatics=_uuidof(IApplicationViewFullscreenStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewInteropStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewInteropStatics[] = L"Windows.UI.ViewManagement.IApplicationViewInteropStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("C446FB5D-4793-4896-A8E2-BE57A8BB0F50"), exclusiveto, contract] */
                MIDL_INTERFACE("C446FB5D-4793-4896-A8E2-BE57A8BB0F50")
                IApplicationViewInteropStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetApplicationViewIdForWindow(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::ICoreWindow * window,
                        /* [retval, out] */__RPC__out INT32 * id
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewInteropStatics=_uuidof(IApplicationViewInteropStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewScaling
 *
 * Introduced to Windows.UI.ViewManagement.ViewManagementViewScalingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewScaling
 *
 *
 */
#if WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewScaling[] = L"Windows.UI.ViewManagement.IApplicationViewScaling";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("1D0DDC23-23F3-4B2D-84FE-74BF37B48B66"), exclusiveto, contract] */
                MIDL_INTERFACE("1D0DDC23-23F3-4B2D-84FE-74BF37B48B66")
                IApplicationViewScaling : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewScaling=_uuidof(IApplicationViewScaling);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewScalingStatics
 *
 * Introduced to Windows.UI.ViewManagement.ViewManagementViewScalingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewScaling
 *
 *
 */
#if WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewScalingStatics[] = L"Windows.UI.ViewManagement.IApplicationViewScalingStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("B08FECF0-B946-45C8-A5E3-71F5AA78F861"), exclusiveto, contract] */
                MIDL_INTERFACE("B08FECF0-B946-45C8-A5E3-71F5AA78F861")
                IApplicationViewScalingStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisableLayoutScaling(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySetDisableLayoutScaling(
                        /* [in] */boolean disableLayoutScaling,
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewScalingStatics=_uuidof(IApplicationViewScalingStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics[] = L"Windows.UI.ViewManagement.IApplicationViewStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("010A6306-C433-44E5-A9F2-BD84D4030A95"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("010A6306-C433-44E5-A9F2-BD84D4030A95")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("ApplicationView static methods may be altered or unavailable for releases after Windows 8.1. Instead, use ApplicationView.GetForCurrentView to get an instance of ApplicationView.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IApplicationViewStatics : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Value may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::ApplicationViewState * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("TryUnsnap may be altered or unavailable for releases after Windows 8.1. Apps can be continuously resized, but cannot be snapped, starting in Windows 8.1.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE TryUnsnap(
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewStatics=_uuidof(IApplicationViewStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics2[] = L"Windows.UI.ViewManagement.IApplicationViewStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("AF338AE5-CF64-423C-85E5-F3E72448FB23"), exclusiveto, contract] */
                MIDL_INTERFACE("AF338AE5-CF64-423C-85E5-F3E72448FB23")
                IApplicationViewStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ViewManagement::IApplicationView * * current
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TerminateAppOnFinalViewClose(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TerminateAppOnFinalViewClose(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewStatics2=_uuidof(IApplicationViewStatics2);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics3[] = L"Windows.UI.ViewManagement.IApplicationViewStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("A28D7594-8C41-4E13-9719-5164796FE4C7"), exclusiveto, contract] */
                MIDL_INTERFACE("A28D7594-8C41-4E13-9719-5164796FE4C7")
                IApplicationViewStatics3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferredLaunchWindowingMode(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::ApplicationViewWindowingMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PreferredLaunchWindowingMode(
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewWindowingMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferredLaunchViewSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PreferredLaunchViewSize(
                        /* [in] */ABI::Windows::Foundation::Size value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewStatics3=_uuidof(IApplicationViewStatics3);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("975F2F1E-E656-4C5E-A0A1-717C6FFA7D64"), exclusiveto, contract] */
                MIDL_INTERFACE("975F2F1E-E656-4C5E-A0A1-717C6FFA7D64")
                IApplicationViewSwitcherStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE DisableShowingMainViewOnActivation(void) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryShowAsStandaloneAsync(
                        /* [in] */INT32 viewId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryShowAsStandaloneWithSizePreferenceAsync(
                        /* [in] */INT32 viewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ViewSizePreference sizePreference,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(
                        /* [in] */INT32 viewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ViewSizePreference sizePreference,
                        /* [in] */INT32 anchorViewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ViewSizePreference anchorSizePreference,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SwitchAsync(
                        /* [in] */INT32 viewId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SwitchFromViewAsync(
                        /* [in] */INT32 toViewId,
                        /* [in] */INT32 fromViewId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SwitchFromViewWithOptionsAsync(
                        /* [in] */INT32 toViewId,
                        /* [in] */INT32 fromViewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PrepareForCustomAnimatedSwitchAsync(
                        /* [in] */INT32 toViewId,
                        /* [in] */INT32 fromViewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewSwitcherStatics=_uuidof(IApplicationViewSwitcherStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("60E995CD-4FC2-48C4-B8E3-395F2B9F0FC1"), exclusiveto, contract] */
                MIDL_INTERFACE("60E995CD-4FC2-48C4-B8E3-395F2B9F0FC1")
                IApplicationViewSwitcherStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE DisableSystemViewActivationPolicy(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewSwitcherStatics2=_uuidof(IApplicationViewSwitcherStatics2);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("92059420-80A7-486D-B21F-C7A4A242A383"), exclusiveto, contract] */
                MIDL_INTERFACE("92059420-80A7-486D-B21F-C7A4A242A383")
                IApplicationViewSwitcherStatics3 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryShowAsViewModeAsync(
                        /* [in] */INT32 viewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewMode viewMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryShowAsViewModeWithPreferencesAsync(
                        /* [in] */INT32 viewId,
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewMode viewMode,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ViewManagement::IViewModePreferences * viewModePreferences,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewSwitcherStatics3=_uuidof(IApplicationViewSwitcherStatics3);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewTitleBar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewTitleBar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTitleBar[] = L"Windows.UI.ViewManagement.IApplicationViewTitleBar";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("00924AC0-932B-4A6B-9C4B-DC38C82478CE"), exclusiveto, contract] */
                MIDL_INTERFACE("00924AC0-932B-4A6B-9C4B-DC38C82478CE")
                IApplicationViewTitleBar : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ForegroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonForegroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonForegroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonBackgroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonBackgroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonHoverForegroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonHoverForegroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonHoverBackgroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonHoverBackgroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonPressedForegroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonPressedForegroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonPressedBackgroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonPressedBackgroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InactiveForegroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InactiveForegroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InactiveBackgroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InactiveBackgroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonInactiveForegroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonInactiveForegroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonInactiveBackgroundColor(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonInactiveBackgroundColor(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewTitleBar=_uuidof(IApplicationViewTitleBar);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewTransferContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewTransferContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTransferContext[] = L"Windows.UI.ViewManagement.IApplicationViewTransferContext";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("8574BC63-3C17-408E-9408-8A1A9EA81BFA"), exclusiveto, contract] */
                MIDL_INTERFACE("8574BC63-3C17-408E-9408-8A1A9EA81BFA")
                IApplicationViewTransferContext : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewId(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ViewId(
                        /* [in] */INT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewTransferContext=_uuidof(IApplicationViewTransferContext);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewTransferContextStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewTransferContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics[] = L"Windows.UI.ViewManagement.IApplicationViewTransferContextStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("15A89D92-DD79-4B0B-BC47-D5F195F14661"), exclusiveto, contract] */
                MIDL_INTERFACE("15A89D92-DD79-4B0B-BC47-D5F195F14661")
                IApplicationViewTransferContextStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataPackageFormatId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewTransferContextStatics=_uuidof(IApplicationViewTransferContextStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPane[] = L"Windows.UI.ViewManagement.IInputPane";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("640ADA70-06F3-4C87-A678-9829C9127C28"), exclusiveto, contract] */
                MIDL_INTERFACE("640ADA70-06F3-4C87-A678-9829C9127C28")
                IInputPane : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Showing(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Showing(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Hiding(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Hiding(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OccludedRect(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputPane=_uuidof(IInputPane);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPane;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPane2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPane2[] = L"Windows.UI.ViewManagement.IInputPane2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("8A6B3F26-7090-4793-944C-C3F2CDE26276"), exclusiveto, contract] */
                MIDL_INTERFACE("8A6B3F26-7090-4793-944C-C3F2CDE26276")
                IInputPane2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryShow(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryHide(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputPane2=_uuidof(IInputPane2);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPane2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPaneControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneControl[] = L"Windows.UI.ViewManagement.IInputPaneControl";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("088BB24F-962F-489D-AA6E-C6BE1A0A6E52"), exclusiveto, contract] */
                MIDL_INTERFACE("088BB24F-962F-489D-AA6E-C6BE1A0A6E52")
                IInputPaneControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Visible(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Visible(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputPaneControl=_uuidof(IInputPaneControl);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPaneStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneStatics[] = L"Windows.UI.ViewManagement.IInputPaneStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("95F4AF3A-EF47-424A-9741-FD2815EBA2BD"), exclusiveto, contract] */
                MIDL_INTERFACE("95F4AF3A-EF47-424A-9741-FD2815EBA2BD")
                IInputPaneStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ViewManagement::IInputPane * * inputPane
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputPaneStatics=_uuidof(IInputPaneStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs[] = L"Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("D243E016-D907-4FCC-BB8D-F77BAA5028F1"), exclusiveto, contract] */
                MIDL_INTERFACE("D243E016-D907-4FCC-BB8D-F77BAA5028F1")
                IInputPaneVisibilityEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OccludedRect(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EnsuredFocusedElementInView(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnsuredFocusedElementInView(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputPaneVisibilityEventArgs=_uuidof(IInputPaneVisibilityEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IProjectionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ProjectionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IProjectionManagerStatics[] = L"Windows.UI.ViewManagement.IProjectionManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("B65F913D-E2F0-4FFD-BA95-34241647E45C"), exclusiveto, contract] */
                MIDL_INTERFACE("B65F913D-E2F0-4FFD-BA95-34241647E45C")
                IProjectionManagerStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartProjectingAsync(
                        /* [in] */INT32 projectionViewId,
                        /* [in] */INT32 anchorViewId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SwapDisplaysForViewsAsync(
                        /* [in] */INT32 projectionViewId,
                        /* [in] */INT32 anchorViewId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StopProjectingAsync(
                        /* [in] */INT32 projectionViewId,
                        /* [in] */INT32 anchorViewId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProjectionDisplayAvailable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProjectionDisplayAvailableChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProjectionDisplayAvailableChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProjectionManagerStatics=_uuidof(IProjectionManagerStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IProjectionManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ProjectionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IProjectionManagerStatics2[] = L"Windows.UI.ViewManagement.IProjectionManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("F33D2F43-2749-4CDE-B977-C0C41E7415D1"), exclusiveto, contract] */
                MIDL_INTERFACE("F33D2F43-2749-4CDE-B977-C0C41E7415D1")
                IProjectionManagerStatics2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartProjectingWithDeviceInfoAsync(
                        /* [in] */INT32 projectionViewId,
                        /* [in] */INT32 anchorViewId,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * displayDeviceInfo,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestStartProjectingAsync(
                        /* [in] */INT32 projectionViewId,
                        /* [in] */INT32 anchorViewId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestStartProjectingWithPlacementAsync(
                        /* [in] */INT32 projectionViewId,
                        /* [in] */INT32 anchorViewId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement prefferedPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProjectionManagerStatics2=_uuidof(IProjectionManagerStatics2);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings[] = L"Windows.UI.ViewManagement.IUISettings";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("85361600-1C63-4627-BCB1-3A89E0BC9C55"), exclusiveto, contract] */
                MIDL_INTERFACE("85361600-1C63-4627-BCB1-3A89E0BC9C55")
                IUISettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HandPreference(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::HandPreference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CursorSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScrollBarSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScrollBarArrowSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScrollBarThumbBoxSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MessageDuration(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnimationsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CaretBrowsingEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CaretBlinkRate(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CaretWidth(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DoubleClickTime(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseHoverTime(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UIElementColor(
                        /* [in] */ABI::Windows::UI::ViewManagement::UIElementType desiredElement,
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUISettings=_uuidof(IUISettings);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings2[] = L"Windows.UI.ViewManagement.IUISettings2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("BAD82401-2721-44F9-BB91-2BB228BE442F"), exclusiveto, contract] */
                MIDL_INTERFACE("BAD82401-2721-44F9-BB91-2BB228BE442F")
                IUISettings2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextScaleFactor(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TextScaleFactorChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TextScaleFactorChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUISettings2=_uuidof(IUISettings2);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings3[] = L"Windows.UI.ViewManagement.IUISettings3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("03021BE4-5254-4781-8194-5168F7D06D7B"), exclusiveto, contract] */
                MIDL_INTERFACE("03021BE4-5254-4781-8194-5168F7D06D7B")
                IUISettings3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetColorValue(
                        /* [in] */ABI::Windows::UI::ViewManagement::UIColorType desiredColor,
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ColorValuesChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ColorValuesChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUISettings3=_uuidof(IUISettings3);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings4[] = L"Windows.UI.ViewManagement.IUISettings4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("52BB3002-919B-4D6B-9B78-8DD66FF4B93B"), exclusiveto, contract] */
                MIDL_INTERFACE("52BB3002-919B-4D6B-9B78-8DD66FF4B93B")
                IUISettings4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvancedEffectsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AdvancedEffectsEnabledChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AdvancedEffectsEnabledChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUISettings4=_uuidof(IUISettings4);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings4;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IUIViewSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UIViewSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUIViewSettings[] = L"Windows.UI.ViewManagement.IUIViewSettings";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("C63657F6-8850-470D-88F8-455E16EA2C26"), exclusiveto, contract] */
                MIDL_INTERFACE("C63657F6-8850-470D-88F8-455E16EA2C26")
                IUIViewSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserInteractionMode(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::UserInteractionMode * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUIViewSettings=_uuidof(IUIViewSettings);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUIViewSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UIViewSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUIViewSettingsStatics[] = L"Windows.UI.ViewManagement.IUIViewSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("595C97A5-F8F6-41CF-B0FB-AACDB81FD5F6"), exclusiveto, contract] */
                MIDL_INTERFACE("595C97A5-F8F6-41CF-B0FB-AACDB81FD5F6")
                IUIViewSettingsStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ViewManagement::IUIViewSettings * * current
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUIViewSettingsStatics=_uuidof(IUIViewSettingsStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IViewModePreferences
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ViewModePreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IViewModePreferences[] = L"Windows.UI.ViewManagement.IViewModePreferences";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("878FCD3A-0B99-42C9-84D0-D3F1D403554B"), exclusiveto, contract] */
                MIDL_INTERFACE("878FCD3A-0B99-42C9-84D0-D3F1D403554B")
                IViewModePreferences : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewSizePreference(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::ViewSizePreference * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ViewSizePreference(
                        /* [in] */ABI::Windows::UI::ViewManagement::ViewSizePreference value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CustomSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CustomSize(
                        /* [in] */ABI::Windows::Foundation::Size value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IViewModePreferences=_uuidof(IViewModePreferences);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IViewModePreferencesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ViewModePreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IViewModePreferencesStatics[] = L"Windows.UI.ViewManagement.IViewModePreferencesStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                /* [object, uuid("69B60A65-5DE5-40D8-8306-3833DF7A2274"), exclusiveto, contract] */
                MIDL_INTERFACE("69B60A65-5DE5-40D8-8306-3833DF7A2274")
                IViewModePreferencesStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateDefault(
                        /* [in] */ABI::Windows::UI::ViewManagement::ApplicationViewMode mode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ViewManagement::IViewModePreferences * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IViewModePreferencesStatics=_uuidof(IViewModePreferencesStatics);
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.ViewManagement.AccessibilitySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IAccessibilitySettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_AccessibilitySettings_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_AccessibilitySettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_AccessibilitySettings[] = L"Windows.UI.ViewManagement.AccessibilitySettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ActivationViewSwitcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IActivationViewSwitcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ActivationViewSwitcher_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ActivationViewSwitcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ActivationViewSwitcher[] = L"Windows.UI.ViewManagement.ActivationViewSwitcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewInteropStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewFullscreenStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationView ** Default Interface **
 *    Windows.UI.ViewManagement.IApplicationView2
 *    Windows.UI.ViewManagement.IApplicationView3
 *    Windows.UI.ViewManagement.IApplicationView4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationView_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationView[] = L"Windows.UI.ViewManagement.ApplicationView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs ** Default Interface **
 *    Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewConsolidatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewConsolidatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewConsolidatedEventArgs[] = L"Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewScaling
 *
 * Introduced to Windows.UI.ViewManagement.ViewManagementViewScalingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewScalingStatics interface starting with version 1.0 of the Windows.UI.ViewManagement.ViewManagementViewScalingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewScaling ** Default Interface **
 *
 */
#if WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewScaling_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewScaling_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewScaling[] = L"Windows.UI.ViewManagement.ApplicationViewScaling";
#endif
#endif // WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewSwitcherStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewSwitcher_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewSwitcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewSwitcher[] = L"Windows.UI.ViewManagement.ApplicationViewSwitcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewTitleBar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewTitleBar ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTitleBar_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTitleBar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewTitleBar[] = L"Windows.UI.ViewManagement.ApplicationViewTitleBar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewTransferContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewTransferContextStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewTransferContext ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTransferContext_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTransferContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewTransferContext[] = L"Windows.UI.ViewManagement.ApplicationViewTransferContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.ViewManagement.InputPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IInputPaneStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IInputPane ** Default Interface **
 *    Windows.UI.ViewManagement.IInputPane2
 *    Windows.UI.ViewManagement.IInputPaneControl
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_InputPane_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_InputPane_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_InputPane[] = L"Windows.UI.ViewManagement.InputPane";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_InputPaneVisibilityEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_InputPaneVisibilityEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_InputPaneVisibilityEventArgs[] = L"Windows.UI.ViewManagement.InputPaneVisibilityEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ProjectionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IProjectionManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IProjectionManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ProjectionManager_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ProjectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ProjectionManager[] = L"Windows.UI.ViewManagement.ProjectionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.UISettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IUISettings ** Default Interface **
 *    Windows.UI.ViewManagement.IUISettings2
 *    Windows.UI.ViewManagement.IUISettings3
 *    Windows.UI.ViewManagement.IUISettings4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_UISettings_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_UISettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_UISettings[] = L"Windows.UI.ViewManagement.UISettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.UIViewSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IUIViewSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IUIViewSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_UIViewSettings_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_UIViewSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_UIViewSettings[] = L"Windows.UI.ViewManagement.UIViewSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ViewModePreferences
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IViewModePreferencesStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IViewModePreferences ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ViewModePreferences_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ViewModePreferences_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ViewModePreferences[] = L"Windows.UI.ViewManagement.ViewModePreferences";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane __x_ABI_CWindows_CUI_CViewManagement_CIInputPane;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings __x_ABI_CWindows_CUI_CViewManagement_CIUISettings;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;
#if !defined(____FIReference_1_Windows__CUI__CViewManagement__CUIElementType_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CUI__CViewManagement__CUIElementType_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType __FIReference_1_Windows__CUI__CViewManagement__CUIElementType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CViewManagement__CUIElementType;

typedef struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl;

interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CUI__CViewManagement__CUIElementType_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


struct __x_ABI_CWindows_CUI_CColor;

#if !defined(____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;

typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;

interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CUI__CColor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CUI__CColor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CUI__CColor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CUI__CColor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CUI__CColor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CUI__CColor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CUI__CColor_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__



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



#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;





typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;



#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;






typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CHandPreference __x_ABI_CWindows_CUI_CViewManagement_CHandPreference;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUIColorType __x_ABI_CWindows_CUI_CViewManagement_CUIColorType;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode;


typedef enum __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference;




























































/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewBoundsMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode
{
    ApplicationViewBoundsMode_UseVisible = 0,
    ApplicationViewBoundsMode_UseCoreWindow = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode
{
    ApplicationViewMode_Default = 0,
    ApplicationViewMode_CompactOverlay = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewOrientation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation
{
    ApplicationViewOrientation_Landscape = 0,
    ApplicationViewOrientation_Portrait = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ApplicationViewState may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState
{
    ApplicationViewState_FullScreenLandscape = 0,
    ApplicationViewState_Filled = 1,
    ApplicationViewState_Snapped = 2,
    ApplicationViewState_FullScreenPortrait = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewSwitchingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions
{
    ApplicationViewSwitchingOptions_Default = 0,
    ApplicationViewSwitchingOptions_SkipAnimation = 0x1,
    ApplicationViewSwitchingOptions_ConsolidateViews = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ApplicationViewWindowingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode
{
    ApplicationViewWindowingMode_Auto = 0,
    ApplicationViewWindowingMode_PreferredLaunchViewSize = 1,
    ApplicationViewWindowingMode_FullScreen = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.FullScreenSystemOverlayMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode
{
    FullScreenSystemOverlayMode_Standard = 0,
    FullScreenSystemOverlayMode_Minimal = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.HandPreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CHandPreference
{
    HandPreference_LeftHanded = 0,
    HandPreference_RightHanded = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.UIColorType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CUIColorType
{
    UIColorType_Background = 0,
    UIColorType_Foreground = 1,
    UIColorType_AccentDark3 = 2,
    UIColorType_AccentDark2 = 3,
    UIColorType_AccentDark1 = 4,
    UIColorType_Accent = 5,
    UIColorType_AccentLight1 = 6,
    UIColorType_AccentLight2 = 7,
    UIColorType_AccentLight3 = 8,
    UIColorType_Complement = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.UIElementType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType
{
    UIElementType_ActiveCaption = 0,
    UIElementType_Background = 1,
    UIElementType_ButtonFace = 2,
    UIElementType_ButtonText = 3,
    UIElementType_CaptionText = 4,
    UIElementType_GrayText = 5,
    UIElementType_Highlight = 6,
    UIElementType_HighlightText = 7,
    UIElementType_Hotlight = 8,
    UIElementType_InactiveCaption = 9,
    UIElementType_InactiveCaptionText = 10,
    UIElementType_Window = 11,
    UIElementType_WindowText = 12,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_AccentColor = 1000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_TextHigh = 1001,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_TextMedium = 1002,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_TextLow = 1003,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_TextContrastWithHigh = 1004,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_NonTextHigh = 1005,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_NonTextMediumHigh = 1006,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_NonTextMedium = 1007,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_NonTextMediumLow = 1008,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_NonTextLow = 1009,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_PageBackground = 1010,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_PopupBackground = 1011,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    UIElementType_OverlayOutsidePopup = 1012,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.UserInteractionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode
{
    UserInteractionMode_Mouse = 0,
    UserInteractionMode_Touch = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ViewManagement.ViewSizePreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference
{
    ViewSizePreference_Default = 0,
    ViewSizePreference_UseLess = 1,
    ViewSizePreference_UseHalf = 2,
    ViewSizePreference_UseMore = 3,
    ViewSizePreference_UseMinimum = 4,
    ViewSizePreference_UseNone = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    ViewSizePreference_Custom = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IAccessibilitySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.AccessibilitySettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IAccessibilitySettings[] = L"Windows.UI.ViewManagement.IAccessibilitySettings";
/* [object, uuid("FE0E8147-C4C0-4562-B962-1327B52AD5B9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HighContrast )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HighContrastScheme )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HighContrastChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HighContrastChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettingsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_get_HighContrast(This,value) \
    ( (This)->lpVtbl->get_HighContrast(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_get_HighContrastScheme(This,value) \
    ( (This)->lpVtbl->get_HighContrastScheme(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_add_HighContrastChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_HighContrastChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_remove_HighContrastChanged(This,cookie) \
    ( (This)->lpVtbl->remove_HighContrastChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IActivationViewSwitcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ActivationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IActivationViewSwitcher[] = L"Windows.UI.ViewManagement.IActivationViewSwitcher";
/* [object, uuid("DCA71BB6-7350-492B-AAC7-C8A13D7224AD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAsStandaloneAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
        /* [in] */INT32 viewId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAsStandaloneWithSizePreferenceAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
        /* [in] */INT32 viewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference sizePreference,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *IsViewPresentedOnActivationVirtualDesktop )(
        __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
        /* [in] */INT32 viewId,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcherVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_ShowAsStandaloneAsync(This,viewId,operation) \
    ( (This)->lpVtbl->ShowAsStandaloneAsync(This,viewId,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_ShowAsStandaloneWithSizePreferenceAsync(This,viewId,sizePreference,operation) \
    ( (This)->lpVtbl->ShowAsStandaloneWithSizePreferenceAsync(This,viewId,sizePreference,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_IsViewPresentedOnActivationVirtualDesktop(This,viewId,value) \
    ( (This)->lpVtbl->IsViewPresentedOnActivationVirtualDesktop(This,viewId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView[] = L"Windows.UI.ViewManagement.IApplicationView";
/* [object, uuid("D222D519-4361-451E-96C4-60F4F9742DB0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdjacentToLeftDisplayEdge )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdjacentToRightDisplayEdge )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("To check full screen mode, use IsFullScreenMode. To check if the view is adjacent to both edges, use AdjacentToLeftDisplayEdge and AdjacentToRightDisplayEdge. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_IsFullScreen )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOnLockScreen )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsScreenCaptureEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsScreenCaptureEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [in] */boolean value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Consolidated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Consolidated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_AdjacentToLeftDisplayEdge(This,value) \
    ( (This)->lpVtbl->get_AdjacentToLeftDisplayEdge(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_AdjacentToRightDisplayEdge(This,value) \
    ( (This)->lpVtbl->get_AdjacentToRightDisplayEdge(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("To check full screen mode, use IsFullScreenMode. To check if the view is adjacent to both edges, use AdjacentToLeftDisplayEdge and AdjacentToRightDisplayEdge. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_IsFullScreen(This,value) \
    ( (This)->lpVtbl->get_IsFullScreen(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_IsOnLockScreen(This,value) \
    ( (This)->lpVtbl->get_IsOnLockScreen(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_IsScreenCaptureEnabled(This,value) \
    ( (This)->lpVtbl->get_IsScreenCaptureEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_put_IsScreenCaptureEnabled(This,value) \
    ( (This)->lpVtbl->put_IsScreenCaptureEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_add_Consolidated(This,handler,token) \
    ( (This)->lpVtbl->add_Consolidated(This,handler,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_remove_Consolidated(This,token) \
    ( (This)->lpVtbl->remove_Consolidated(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView2[] = L"Windows.UI.ViewManagement.IApplicationView2";
/* [object, uuid("E876B196-A545-40DC-B594-450CBA68CC00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SuppressSystemOverlays )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_SuppressSystemOverlays )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisibleBounds )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_VisibleBoundsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_VisibleBoundsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetDesiredBoundsMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode boundsMode,
        /* [retval, out] */__RPC__out boolean * success
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredBoundsMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_get_SuppressSystemOverlays(This,value) \
    ( (This)->lpVtbl->get_SuppressSystemOverlays(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_put_SuppressSystemOverlays(This,value) \
    ( (This)->lpVtbl->put_SuppressSystemOverlays(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_get_VisibleBounds(This,value) \
    ( (This)->lpVtbl->get_VisibleBounds(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_add_VisibleBoundsChanged(This,handler,token) \
    ( (This)->lpVtbl->add_VisibleBoundsChanged(This,handler,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_remove_VisibleBoundsChanged(This,token) \
    ( (This)->lpVtbl->remove_VisibleBoundsChanged(This,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_SetDesiredBoundsMode(This,boundsMode,success) \
    ( (This)->lpVtbl->SetDesiredBoundsMode(This,boundsMode,success) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_get_DesiredBoundsMode(This,value) \
    ( (This)->lpVtbl->get_DesiredBoundsMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView3[] = L"Windows.UI.ViewManagement.IApplicationView3";
/* [object, uuid("903C9CE5-793A-4FDF-A2B2-AF1AC21E3108"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TitleBar )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullScreenSystemOverlayMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FullScreenSystemOverlayMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsFullScreenMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryEnterFullScreenMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
        /* [retval, out] */__RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *ExitFullScreenMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *ShowStandardSystemOverlays )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *TryResizeView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value,
        /* [retval, out] */__RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreferredMinSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize minSize
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_get_TitleBar(This,value) \
    ( (This)->lpVtbl->get_TitleBar(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_get_FullScreenSystemOverlayMode(This,value) \
    ( (This)->lpVtbl->get_FullScreenSystemOverlayMode(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_put_FullScreenSystemOverlayMode(This,value) \
    ( (This)->lpVtbl->put_FullScreenSystemOverlayMode(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_get_IsFullScreenMode(This,value) \
    ( (This)->lpVtbl->get_IsFullScreenMode(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_TryEnterFullScreenMode(This,success) \
    ( (This)->lpVtbl->TryEnterFullScreenMode(This,success) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_ExitFullScreenMode(This) \
    ( (This)->lpVtbl->ExitFullScreenMode(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_ShowStandardSystemOverlays(This) \
    ( (This)->lpVtbl->ShowStandardSystemOverlays(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_TryResizeView(This,value,success) \
    ( (This)->lpVtbl->TryResizeView(This,value,success) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_SetPreferredMinSize(This,minSize) \
    ( (This)->lpVtbl->SetPreferredMinSize(This,minSize) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationView4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView4[] = L"Windows.UI.ViewManagement.IApplicationView4";
/* [object, uuid("15E5CBEC-9E0F-46B5-BC3F-9BF653E74B5E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsViewModeSupported )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
        /* [retval, out] */__RPC__out boolean * isViewModeSupported
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryEnterViewModeAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryEnterViewModeWithPreferencesAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * viewModePreferences,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryConsolidateAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_get_ViewMode(This,value) \
    ( (This)->lpVtbl->get_ViewMode(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_IsViewModeSupported(This,viewMode,isViewModeSupported) \
    ( (This)->lpVtbl->IsViewModeSupported(This,viewMode,isViewModeSupported) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_TryEnterViewModeAsync(This,viewMode,operation) \
    ( (This)->lpVtbl->TryEnterViewModeAsync(This,viewMode,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_TryEnterViewModeWithPreferencesAsync(This,viewMode,viewModePreferences,operation) \
    ( (This)->lpVtbl->TryEnterViewModeWithPreferencesAsync(This,viewMode,viewModePreferences,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_TryConsolidateAsync(This,operation) \
    ( (This)->lpVtbl->TryConsolidateAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs[] = L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs";
/* [object, uuid("514449EC-7EA2-4DE7-A6A6-7DFBAAEBB6FB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUserInitiated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_get_IsUserInitiated(This,value) \
    ( (This)->lpVtbl->get_IsUserInitiated(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2[] = L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2";
/* [object, uuid("1C199ECC-6DC1-40F4-AFEE-07D9EA296430"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAppInitiated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_get_IsAppInitiated(This,value) \
    ( (This)->lpVtbl->get_IsAppInitiated(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics[] = L"Windows.UI.ViewManagement.IApplicationViewFullscreenStatics";
/* [object, uuid("BC792EBD-64FE-4B65-A0C0-901CE2B68636"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *TryUnsnapToFullscreen )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
        /* [retval, out] */__RPC__out boolean * success
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_TryUnsnapToFullscreen(This,success) \
    ( (This)->lpVtbl->TryUnsnapToFullscreen(This,success) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewInteropStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewInteropStatics[] = L"Windows.UI.ViewManagement.IApplicationViewInteropStatics";
/* [object, uuid("C446FB5D-4793-4896-A8E2-BE57A8BB0F50"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetApplicationViewIdForWindow )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * window,
        /* [retval, out] */__RPC__out INT32 * id
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_GetApplicationViewIdForWindow(This,window,id) \
    ( (This)->lpVtbl->GetApplicationViewIdForWindow(This,window,id) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewScaling
 *
 * Introduced to Windows.UI.ViewManagement.ViewManagementViewScalingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewScaling
 *
 *
 */
#if WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewScaling[] = L"Windows.UI.ViewManagement.IApplicationViewScaling";
/* [object, uuid("1D0DDC23-23F3-4B2D-84FE-74BF37B48B66"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewScalingStatics
 *
 * Introduced to Windows.UI.ViewManagement.ViewManagementViewScalingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewScaling
 *
 *
 */
#if WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewScalingStatics[] = L"Windows.UI.ViewManagement.IApplicationViewScalingStatics";
/* [object, uuid("B08FECF0-B946-45C8-A5E3-71F5AA78F861"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisableLayoutScaling )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetDisableLayoutScaling )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
        /* [in] */boolean disableLayoutScaling,
        /* [retval, out] */__RPC__out boolean * success
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_get_DisableLayoutScaling(This,value) \
    ( (This)->lpVtbl->get_DisableLayoutScaling(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_TrySetDisableLayoutScaling(This,disableLayoutScaling,success) \
    ( (This)->lpVtbl->TrySetDisableLayoutScaling(This,disableLayoutScaling,success) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics[] = L"Windows.UI.ViewManagement.IApplicationViewStatics";
/* [object, uuid("010A6306-C433-44E5-A9F2-BD84D4030A95"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ApplicationView static methods may be altered or unavailable for releases after Windows 8.1. Instead, use ApplicationView.GetForCurrentView to get an instance of ApplicationView.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Value may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("TryUnsnap may be altered or unavailable for releases after Windows 8.1. Apps can be continuously resized, but cannot be snapped, starting in Windows 8.1.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *TryUnsnap )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
        /* [retval, out] */__RPC__out boolean * success
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Value may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("TryUnsnap may be altered or unavailable for releases after Windows 8.1. Apps can be continuously resized, but cannot be snapped, starting in Windows 8.1.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_TryUnsnap(This,success) \
    ( (This)->lpVtbl->TryUnsnap(This,success) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics2[] = L"Windows.UI.ViewManagement.IApplicationViewStatics2";
/* [object, uuid("AF338AE5-CF64-423C-85E5-F3E72448FB23"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * * current
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TerminateAppOnFinalViewClose )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TerminateAppOnFinalViewClose )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_GetForCurrentView(This,current) \
    ( (This)->lpVtbl->GetForCurrentView(This,current) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_get_TerminateAppOnFinalViewClose(This,value) \
    ( (This)->lpVtbl->get_TerminateAppOnFinalViewClose(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_put_TerminateAppOnFinalViewClose(This,value) \
    ( (This)->lpVtbl->put_TerminateAppOnFinalViewClose(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics3[] = L"Windows.UI.ViewManagement.IApplicationViewStatics3";
/* [object, uuid("A28D7594-8C41-4E13-9719-5164796FE4C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferredLaunchWindowingMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PreferredLaunchWindowingMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferredLaunchViewSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PreferredLaunchViewSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_get_PreferredLaunchWindowingMode(This,value) \
    ( (This)->lpVtbl->get_PreferredLaunchWindowingMode(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_put_PreferredLaunchWindowingMode(This,value) \
    ( (This)->lpVtbl->put_PreferredLaunchWindowingMode(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_get_PreferredLaunchViewSize(This,value) \
    ( (This)->lpVtbl->get_PreferredLaunchViewSize(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_put_PreferredLaunchViewSize(This,value) \
    ( (This)->lpVtbl->put_PreferredLaunchViewSize(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics";
/* [object, uuid("975F2F1E-E656-4C5E-A0A1-717C6FFA7D64"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DisableShowingMainViewOnActivation )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryShowAsStandaloneAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
        /* [in] */INT32 viewId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryShowAsStandaloneWithSizePreferenceAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
        /* [in] */INT32 viewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference sizePreference,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
        /* [in] */INT32 viewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference sizePreference,
        /* [in] */INT32 anchorViewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference anchorSizePreference,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SwitchAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
        /* [in] */INT32 viewId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SwitchFromViewAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
        /* [in] */INT32 toViewId,
        /* [in] */INT32 fromViewId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SwitchFromViewWithOptionsAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
        /* [in] */INT32 toViewId,
        /* [in] */INT32 fromViewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareForCustomAnimatedSwitchAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
        /* [in] */INT32 toViewId,
        /* [in] */INT32 fromViewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_DisableShowingMainViewOnActivation(This) \
    ( (This)->lpVtbl->DisableShowingMainViewOnActivation(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_TryShowAsStandaloneAsync(This,viewId,operation) \
    ( (This)->lpVtbl->TryShowAsStandaloneAsync(This,viewId,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_TryShowAsStandaloneWithSizePreferenceAsync(This,viewId,sizePreference,operation) \
    ( (This)->lpVtbl->TryShowAsStandaloneWithSizePreferenceAsync(This,viewId,sizePreference,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(This,viewId,sizePreference,anchorViewId,anchorSizePreference,operation) \
    ( (This)->lpVtbl->TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(This,viewId,sizePreference,anchorViewId,anchorSizePreference,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_SwitchAsync(This,viewId,operation) \
    ( (This)->lpVtbl->SwitchAsync(This,viewId,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_SwitchFromViewAsync(This,toViewId,fromViewId,operation) \
    ( (This)->lpVtbl->SwitchFromViewAsync(This,toViewId,fromViewId,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_SwitchFromViewWithOptionsAsync(This,toViewId,fromViewId,options,operation) \
    ( (This)->lpVtbl->SwitchFromViewWithOptionsAsync(This,toViewId,fromViewId,options,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_PrepareForCustomAnimatedSwitchAsync(This,toViewId,fromViewId,options,operation) \
    ( (This)->lpVtbl->PrepareForCustomAnimatedSwitchAsync(This,toViewId,fromViewId,options,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2";
/* [object, uuid("60E995CD-4FC2-48C4-B8E3-395F2B9F0FC1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DisableSystemViewActivationPolicy )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_DisableSystemViewActivationPolicy(This) \
    ( (This)->lpVtbl->DisableSystemViewActivationPolicy(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3";
/* [object, uuid("92059420-80A7-486D-B21F-C7A4A242A383"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *TryShowAsViewModeAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
        /* [in] */INT32 viewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryShowAsViewModeWithPreferencesAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
        /* [in] */INT32 viewId,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * viewModePreferences,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_TryShowAsViewModeAsync(This,viewId,viewMode,operation) \
    ( (This)->lpVtbl->TryShowAsViewModeAsync(This,viewId,viewMode,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_TryShowAsViewModeWithPreferencesAsync(This,viewId,viewMode,viewModePreferences,operation) \
    ( (This)->lpVtbl->TryShowAsViewModeWithPreferencesAsync(This,viewId,viewMode,viewModePreferences,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewTitleBar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewTitleBar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTitleBar[] = L"Windows.UI.ViewManagement.IApplicationViewTitleBar";
/* [object, uuid("00924AC0-932B-4A6B-9C4B-DC38C82478CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonHoverForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonHoverForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonHoverBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonHoverBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonPressedForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonPressedForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonPressedBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonPressedBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonInactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonInactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonInactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonInactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBarVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBarVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonBackgroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonHoverForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonHoverForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonHoverForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonHoverForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonHoverBackgroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonHoverBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonHoverBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonHoverBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonPressedForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonPressedForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonPressedForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonPressedForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonPressedBackgroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonPressedBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonPressedBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonPressedBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_InactiveForegroundColor(This,value) \
    ( (This)->lpVtbl->put_InactiveForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_InactiveForegroundColor(This,value) \
    ( (This)->lpVtbl->get_InactiveForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_InactiveBackgroundColor(This,value) \
    ( (This)->lpVtbl->put_InactiveBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_InactiveBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_InactiveBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonInactiveForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonInactiveForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonInactiveForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonInactiveForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_put_ButtonInactiveBackgroundColor(This,value) \
    ( (This)->lpVtbl->put_ButtonInactiveBackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_get_ButtonInactiveBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_ButtonInactiveBackgroundColor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewTransferContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewTransferContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTransferContext[] = L"Windows.UI.ViewManagement.IApplicationViewTransferContext";
/* [object, uuid("8574BC63-3C17-408E-9408-8A1A9EA81BFA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ViewId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_get_ViewId(This,value) \
    ( (This)->lpVtbl->get_ViewId(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_put_ViewId(This,value) \
    ( (This)->lpVtbl->put_ViewId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.ViewManagement.IApplicationViewTransferContextStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ApplicationViewTransferContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics[] = L"Windows.UI.ViewManagement.IApplicationViewTransferContextStatics";
/* [object, uuid("15A89D92-DD79-4B0B-BC47-D5F195F14661"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataPackageFormatId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_get_DataPackageFormatId(This,value) \
    ( (This)->lpVtbl->get_DataPackageFormatId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPane[] = L"Windows.UI.ViewManagement.IInputPane";
/* [object, uuid("640ADA70-06F3-4C87-A678-9829C9127C28"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Showing )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Showing )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Hiding )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Hiding )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OccludedRect )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_add_Showing(This,handler,token) \
    ( (This)->lpVtbl->add_Showing(This,handler,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_remove_Showing(This,token) \
    ( (This)->lpVtbl->remove_Showing(This,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_add_Hiding(This,handler,token) \
    ( (This)->lpVtbl->add_Hiding(This,handler,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_remove_Hiding(This,token) \
    ( (This)->lpVtbl->remove_Hiding(This,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane_get_OccludedRect(This,value) \
    ( (This)->lpVtbl->get_OccludedRect(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPane;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPane2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPane2[] = L"Windows.UI.ViewManagement.IInputPane2";
/* [object, uuid("8A6B3F26-7090-4793-944C-C3F2CDE26276"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryShow )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryHide )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_TryShow(This,result) \
    ( (This)->lpVtbl->TryShow(This,result) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_TryHide(This,result) \
    ( (This)->lpVtbl->TryHide(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPane2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPane2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPaneControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneControl[] = L"Windows.UI.ViewManagement.IInputPaneControl";
/* [object, uuid("088BB24F-962F-489D-AA6E-C6BE1A0A6E52"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Visible )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControlVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_get_Visible(This,value) \
    ( (This)->lpVtbl->get_Visible(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_put_Visible(This,value) \
    ( (This)->lpVtbl->put_Visible(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPaneStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneStatics[] = L"Windows.UI.ViewManagement.IInputPaneStatics";
/* [object, uuid("95F4AF3A-EF47-424A-9741-FD2815EBA2BD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * * inputPane
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_GetForCurrentView(This,inputPane) \
    ( (This)->lpVtbl->GetForCurrentView(This,inputPane) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs[] = L"Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs";
/* [object, uuid("D243E016-D907-4FCC-BB8D-F77BAA5028F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OccludedRect )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EnsuredFocusedElementInView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnsuredFocusedElementInView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_get_OccludedRect(This,value) \
    ( (This)->lpVtbl->get_OccludedRect(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_put_EnsuredFocusedElementInView(This,value) \
    ( (This)->lpVtbl->put_EnsuredFocusedElementInView(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_get_EnsuredFocusedElementInView(This,value) \
    ( (This)->lpVtbl->get_EnsuredFocusedElementInView(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IProjectionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ProjectionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IProjectionManagerStatics[] = L"Windows.UI.ViewManagement.IProjectionManagerStatics";
/* [object, uuid("B65F913D-E2F0-4FFD-BA95-34241647E45C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *StartProjectingAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
        /* [in] */INT32 projectionViewId,
        /* [in] */INT32 anchorViewId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SwapDisplaysForViewsAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
        /* [in] */INT32 projectionViewId,
        /* [in] */INT32 anchorViewId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopProjectingAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
        /* [in] */INT32 projectionViewId,
        /* [in] */INT32 anchorViewId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProjectionDisplayAvailable )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProjectionDisplayAvailableChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProjectionDisplayAvailableChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_StartProjectingAsync(This,projectionViewId,anchorViewId,operation) \
    ( (This)->lpVtbl->StartProjectingAsync(This,projectionViewId,anchorViewId,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_SwapDisplaysForViewsAsync(This,projectionViewId,anchorViewId,operation) \
    ( (This)->lpVtbl->SwapDisplaysForViewsAsync(This,projectionViewId,anchorViewId,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_StopProjectingAsync(This,projectionViewId,anchorViewId,operation) \
    ( (This)->lpVtbl->StopProjectingAsync(This,projectionViewId,anchorViewId,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_get_ProjectionDisplayAvailable(This,value) \
    ( (This)->lpVtbl->get_ProjectionDisplayAvailable(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_add_ProjectionDisplayAvailableChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ProjectionDisplayAvailableChanged(This,handler,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_remove_ProjectionDisplayAvailableChanged(This,token) \
    ( (This)->lpVtbl->remove_ProjectionDisplayAvailableChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IProjectionManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ProjectionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IProjectionManagerStatics2[] = L"Windows.UI.ViewManagement.IProjectionManagerStatics2";
/* [object, uuid("F33D2F43-2749-4CDE-B977-C0C41E7415D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *StartProjectingWithDeviceInfoAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
        /* [in] */INT32 projectionViewId,
        /* [in] */INT32 anchorViewId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * displayDeviceInfo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestStartProjectingAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
        /* [in] */INT32 projectionViewId,
        /* [in] */INT32 anchorViewId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestStartProjectingWithPlacementAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
        /* [in] */INT32 projectionViewId,
        /* [in] */INT32 anchorViewId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement prefferedPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_StartProjectingWithDeviceInfoAsync(This,projectionViewId,anchorViewId,displayDeviceInfo,operation) \
    ( (This)->lpVtbl->StartProjectingWithDeviceInfoAsync(This,projectionViewId,anchorViewId,displayDeviceInfo,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_RequestStartProjectingAsync(This,projectionViewId,anchorViewId,selection,operation) \
    ( (This)->lpVtbl->RequestStartProjectingAsync(This,projectionViewId,anchorViewId,selection,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_RequestStartProjectingWithPlacementAsync(This,projectionViewId,anchorViewId,selection,prefferedPlacement,operation) \
    ( (This)->lpVtbl->RequestStartProjectingWithPlacementAsync(This,projectionViewId,anchorViewId,selection,prefferedPlacement,operation) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_GetDeviceSelector(This,selector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings[] = L"Windows.UI.ViewManagement.IUISettings";
/* [object, uuid("85361600-1C63-4627-BCB1-3A89E0BC9C55"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HandPreference )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CHandPreference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CursorSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScrollBarSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScrollBarArrowSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScrollBarThumbBoxSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MessageDuration )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnimationsEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CaretBrowsingEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CaretBlinkRate )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CaretWidth )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DoubleClickTime )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseHoverTime )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *UIElementColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CUIElementType desiredElement,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_HandPreference(This,value) \
    ( (This)->lpVtbl->get_HandPreference(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_CursorSize(This,value) \
    ( (This)->lpVtbl->get_CursorSize(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_ScrollBarSize(This,value) \
    ( (This)->lpVtbl->get_ScrollBarSize(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_ScrollBarArrowSize(This,value) \
    ( (This)->lpVtbl->get_ScrollBarArrowSize(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_ScrollBarThumbBoxSize(This,value) \
    ( (This)->lpVtbl->get_ScrollBarThumbBoxSize(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_MessageDuration(This,value) \
    ( (This)->lpVtbl->get_MessageDuration(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_AnimationsEnabled(This,value) \
    ( (This)->lpVtbl->get_AnimationsEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_CaretBrowsingEnabled(This,value) \
    ( (This)->lpVtbl->get_CaretBrowsingEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_CaretBlinkRate(This,value) \
    ( (This)->lpVtbl->get_CaretBlinkRate(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_CaretWidth(This,value) \
    ( (This)->lpVtbl->get_CaretWidth(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_DoubleClickTime(This,value) \
    ( (This)->lpVtbl->get_DoubleClickTime(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_get_MouseHoverTime(This,value) \
    ( (This)->lpVtbl->get_MouseHoverTime(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings_UIElementColor(This,desiredElement,value) \
    ( (This)->lpVtbl->UIElementColor(This,desiredElement,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings2[] = L"Windows.UI.ViewManagement.IUISettings2";
/* [object, uuid("BAD82401-2721-44F9-BB91-2BB228BE442F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextScaleFactor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TextScaleFactorChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TextScaleFactorChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_get_TextScaleFactor(This,value) \
    ( (This)->lpVtbl->get_TextScaleFactor(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_add_TextScaleFactorChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_TextScaleFactorChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_remove_TextScaleFactorChanged(This,cookie) \
    ( (This)->lpVtbl->remove_TextScaleFactorChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings2;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings3[] = L"Windows.UI.ViewManagement.IUISettings3";
/* [object, uuid("03021BE4-5254-4781-8194-5168F7D06D7B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetColorValue )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CUIColorType desiredColor,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ColorValuesChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ColorValuesChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_GetColorValue(This,desiredColor,value) \
    ( (This)->lpVtbl->GetColorValue(This,desiredColor,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_add_ColorValuesChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_ColorValuesChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_remove_ColorValuesChanged(This,cookie) \
    ( (This)->lpVtbl->remove_ColorValuesChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings3;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUISettings4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UISettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings4[] = L"Windows.UI.ViewManagement.IUISettings4";
/* [object, uuid("52BB3002-919B-4D6B-9B78-8DD66FF4B93B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvancedEffectsEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AdvancedEffectsEnabledChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AdvancedEffectsEnabledChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4Vtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_get_AdvancedEffectsEnabled(This,value) \
    ( (This)->lpVtbl->get_AdvancedEffectsEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_add_AdvancedEffectsEnabledChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_AdvancedEffectsEnabledChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_remove_AdvancedEffectsEnabledChanged(This,cookie) \
    ( (This)->lpVtbl->remove_AdvancedEffectsEnabledChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings4;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUISettings4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IUIViewSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UIViewSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUIViewSettings[] = L"Windows.UI.ViewManagement.IUIViewSettings";
/* [object, uuid("C63657F6-8850-470D-88F8-455E16EA2C26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserInteractionMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_get_UserInteractionMode(This,value) \
    ( (This)->lpVtbl->get_UserInteractionMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IUIViewSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.UIViewSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUIViewSettingsStatics[] = L"Windows.UI.ViewManagement.IUIViewSettingsStatics";
/* [object, uuid("595C97A5-F8F6-41CF-B0FB-AACDB81FD5F6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * * current
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_GetForCurrentView(This,current) \
    ( (This)->lpVtbl->GetForCurrentView(This,current) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ViewManagement.IViewModePreferences
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ViewModePreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IViewModePreferences[] = L"Windows.UI.ViewManagement.IViewModePreferences";
/* [object, uuid("878FCD3A-0B99-42C9-84D0-D3F1D403554B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewSizePreference )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ViewSizePreference )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CustomSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CustomSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_get_ViewSizePreference(This,value) \
    ( (This)->lpVtbl->get_ViewSizePreference(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_put_ViewSizePreference(This,value) \
    ( (This)->lpVtbl->put_ViewSizePreference(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_get_CustomSize(This,value) \
    ( (This)->lpVtbl->get_CustomSize(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_put_CustomSize(This,value) \
    ( (This)->lpVtbl->put_CustomSize(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.ViewManagement.IViewModePreferencesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.ViewModePreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IViewModePreferencesStatics[] = L"Windows.UI.ViewManagement.IViewModePreferencesStatics";
/* [object, uuid("69B60A65-5DE5-40D8-8306-3833DF7A2274"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDefault )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
        /* [in] */__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode mode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_CreateDefault(This,mode,result) \
    ( (This)->lpVtbl->CreateDefault(This,mode,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.ViewManagement.AccessibilitySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IAccessibilitySettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_AccessibilitySettings_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_AccessibilitySettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_AccessibilitySettings[] = L"Windows.UI.ViewManagement.AccessibilitySettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ActivationViewSwitcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IActivationViewSwitcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ActivationViewSwitcher_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ActivationViewSwitcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ActivationViewSwitcher[] = L"Windows.UI.ViewManagement.ActivationViewSwitcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewInteropStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewFullscreenStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationView ** Default Interface **
 *    Windows.UI.ViewManagement.IApplicationView2
 *    Windows.UI.ViewManagement.IApplicationView3
 *    Windows.UI.ViewManagement.IApplicationView4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationView_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationView[] = L"Windows.UI.ViewManagement.ApplicationView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs ** Default Interface **
 *    Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewConsolidatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewConsolidatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewConsolidatedEventArgs[] = L"Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewScaling
 *
 * Introduced to Windows.UI.ViewManagement.ViewManagementViewScalingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewScalingStatics interface starting with version 1.0 of the Windows.UI.ViewManagement.ViewManagementViewScalingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewScaling ** Default Interface **
 *
 */
#if WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewScaling_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewScaling_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewScaling[] = L"Windows.UI.ViewManagement.ApplicationViewScaling";
#endif
#endif // WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewSwitcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewSwitcherStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewSwitcher_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewSwitcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewSwitcher[] = L"Windows.UI.ViewManagement.ApplicationViewSwitcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewTitleBar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewTitleBar ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTitleBar_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTitleBar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewTitleBar[] = L"Windows.UI.ViewManagement.ApplicationViewTitleBar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ApplicationViewTransferContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IApplicationViewTransferContextStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IApplicationViewTransferContext ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTransferContext_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ApplicationViewTransferContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewTransferContext[] = L"Windows.UI.ViewManagement.ApplicationViewTransferContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.ViewManagement.InputPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IInputPaneStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IInputPane ** Default Interface **
 *    Windows.UI.ViewManagement.IInputPane2
 *    Windows.UI.ViewManagement.IInputPaneControl
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_InputPane_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_InputPane_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_InputPane[] = L"Windows.UI.ViewManagement.InputPane";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_InputPaneVisibilityEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_InputPaneVisibilityEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_InputPaneVisibilityEventArgs[] = L"Windows.UI.ViewManagement.InputPaneVisibilityEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ProjectionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IProjectionManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ViewManagement.IProjectionManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ProjectionManager_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ProjectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ProjectionManager[] = L"Windows.UI.ViewManagement.ProjectionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.UISettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IUISettings ** Default Interface **
 *    Windows.UI.ViewManagement.IUISettings2
 *    Windows.UI.ViewManagement.IUISettings3
 *    Windows.UI.ViewManagement.IUISettings4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_UISettings_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_UISettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_UISettings[] = L"Windows.UI.ViewManagement.UISettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.UIViewSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IUIViewSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IUIViewSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_UIViewSettings_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_UIViewSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_UIViewSettings[] = L"Windows.UI.ViewManagement.UIViewSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ViewManagement.ViewModePreferences
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.IViewModePreferencesStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.IViewModePreferences ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_ViewModePreferences_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_ViewModePreferences_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ViewModePreferences[] = L"Windows.UI.ViewManagement.ViewModePreferences";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Eviewmanagement_p_h__

#endif // __windows2Eui2Eviewmanagement_h__
