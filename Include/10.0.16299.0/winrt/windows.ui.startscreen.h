/* Header file automatically generated from windows.ui.startscreen.idl */
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
#ifndef __windows2Eui2Estartscreen_h__
#define __windows2Eui2Estartscreen_h__
#ifndef __windows2Eui2Estartscreen_p_h__
#define __windows2Eui2Estartscreen_p_h__


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
#include "Windows.ApplicationModel.Core.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IJumpList;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList ABI::Windows::UI::StartScreen::IJumpList

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IJumpListItem;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem ABI::Windows::UI::StartScreen::IJumpListItem

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IJumpListItemStatics;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics ABI::Windows::UI::StartScreen::IJumpListItemStatics

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IJumpListStatics;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics ABI::Windows::UI::StartScreen::IJumpListStatics

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTile;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile ABI::Windows::UI::StartScreen::ISecondaryTile

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTile2;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 ABI::Windows::UI::StartScreen::ISecondaryTile2

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTileFactory;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory ABI::Windows::UI::StartScreen::ISecondaryTileFactory

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTileFactory2;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 ABI::Windows::UI::StartScreen::ISecondaryTileFactory2

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTileStatics;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics ABI::Windows::UI::StartScreen::ISecondaryTileStatics

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTileVisualElements;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTileVisualElements2;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements2

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTileVisualElements3;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements3

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ISecondaryTileVisualElements4;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements4

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IStartScreenManager;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager ABI::Windows::UI::StartScreen::IStartScreenManager

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IStartScreenManagerStatics;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics ABI::Windows::UI::StartScreen::IStartScreenManagerStatics

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface ITileMixedRealityModel;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel ABI::Windows::UI::StartScreen::ITileMixedRealityModel

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IVisualElementsRequest;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest ABI::Windows::UI::StartScreen::IVisualElementsRequest

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IVisualElementsRequestDeferral;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral ABI::Windows::UI::StartScreen::IVisualElementsRequestDeferral

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                interface IVisualElementsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs ABI::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class JumpListItem;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#define DEF___FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f69f5cc4-004f-53eb-89e6-786e460588a4"))
IIterator<ABI::Windows::UI::StartScreen::JumpListItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::JumpListItem*, ABI::Windows::UI::StartScreen::IJumpListItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.StartScreen.JumpListItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::StartScreen::JumpListItem*> __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_t;
#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::StartScreen::IJumpListItem*>
//#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::StartScreen::IJumpListItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#define DEF___FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("130a7274-1afb-5c10-abea-61d81692a496"))
IIterable<ABI::Windows::UI::StartScreen::JumpListItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::JumpListItem*, ABI::Windows::UI::StartScreen::IJumpListItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.StartScreen.JumpListItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::StartScreen::JumpListItem*> __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_t;
#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::StartScreen::IJumpListItem*>
//#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::StartScreen::IJumpListItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class SecondaryTile;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#define DEF___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("391f7579-a90e-5352-9d01-fda995d7912f"))
IIterator<ABI::Windows::UI::StartScreen::SecondaryTile*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::SecondaryTile*, ABI::Windows::UI::StartScreen::ISecondaryTile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.StartScreen.SecondaryTile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::StartScreen::SecondaryTile*> __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_t;
#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::StartScreen::ISecondaryTile*>
//#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::StartScreen::ISecondaryTile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#define DEF___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("75651af0-014a-5593-bc48-836ba3d1d5d4"))
IIterable<ABI::Windows::UI::StartScreen::SecondaryTile*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::SecondaryTile*, ABI::Windows::UI::StartScreen::ISecondaryTile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.StartScreen.SecondaryTile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::StartScreen::SecondaryTile*> __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_t;
#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::StartScreen::ISecondaryTile*>
//#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::StartScreen::ISecondaryTile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class SecondaryTileVisualElements;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE
#define DEF___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bbc6e16c-cace-5230-8804-2298375168ac"))
IIterator<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*, ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.StartScreen.SecondaryTileVisualElements>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*> __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t;
#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>
//#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE
#define DEF___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6ef7c354-f153-5b53-99c2-e045c78cce08"))
IIterable<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*, ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.StartScreen.SecondaryTileVisualElements>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*> __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t;
#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>
//#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#define DEF___FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("be418be9-ab72-56b0-b6d3-ec70ef11f663"))
IVectorView<ABI::Windows::UI::StartScreen::JumpListItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::JumpListItem*, ABI::Windows::UI::StartScreen::IJumpListItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.StartScreen.JumpListItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::StartScreen::JumpListItem*> __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_t;
#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::IJumpListItem*>
//#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::IJumpListItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#define DEF___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("16f89727-d811-5051-9ab5-0cb86a0f0ac3"))
IVectorView<ABI::Windows::UI::StartScreen::SecondaryTile*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::SecondaryTile*, ABI::Windows::UI::StartScreen::ISecondaryTile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.StartScreen.SecondaryTile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::StartScreen::SecondaryTile*> __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t;
#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTile*>
//#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE
#define DEF___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1cd2cc9b-a41c-5dc7-9d95-4cef69a293f4"))
IVectorView<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*, ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.StartScreen.SecondaryTileVisualElements>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::StartScreen::SecondaryTileVisualElements*> __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t;
#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>
//#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#define DEF___FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("af8f3fb2-f179-5f0a-aa09-28942eedf625"))
IVector<ABI::Windows::UI::StartScreen::JumpListItem*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::JumpListItem*, ABI::Windows::UI::StartScreen::IJumpListItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.StartScreen.JumpListItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::StartScreen::JumpListItem*> __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_t;
#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::StartScreen::IJumpListItem*>
//#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::StartScreen::IJumpListItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b9d6d973-a089-550a-83b7-f659ea0dea04"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.StartScreen.SecondaryTile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTile*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f72d55b2-b004-5e35-b5c4-22e87619b30a"))
IAsyncOperation<__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.StartScreen.SecondaryTile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile*> __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTile*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::StartScreen::ISecondaryTile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class JumpList;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c047c6a-c55b-5485-b673-8d4bd7c342e2"))
IAsyncOperationCompletedHandler<ABI::Windows::UI::StartScreen::JumpList*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::JumpList*, ABI::Windows::UI::StartScreen::IJumpList*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.StartScreen.JumpList>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::UI::StartScreen::JumpList*> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::StartScreen::IJumpList*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::StartScreen::IJumpList*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1c008c58-733b-5b42-962a-b33328236cd3"))
IAsyncOperation<ABI::Windows::UI::StartScreen::JumpList*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::JumpList*, ABI::Windows::UI::StartScreen::IJumpList*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.StartScreen.JumpList>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::UI::StartScreen::JumpList*> __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_t;
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::StartScreen::IJumpList*>
//#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::StartScreen::IJumpList*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class VisualElementsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("02d9f968-fa76-5d77-934b-665e7c3be7cf"))
ITypedEventHandler<ABI::Windows::UI::StartScreen::SecondaryTile*,ABI::Windows::UI::StartScreen::VisualElementsRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::SecondaryTile*, ABI::Windows::UI::StartScreen::ISecondaryTile*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::StartScreen::VisualElementsRequestedEventArgs*, ABI::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.StartScreen.SecondaryTile, Windows.UI.StartScreen.VisualElementsRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::StartScreen::SecondaryTile*,ABI::Windows::UI::StartScreen::VisualElementsRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::StartScreen::ISecondaryTile*,ABI::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::StartScreen::ISecondaryTile*,ABI::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_USE */


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
        namespace Perception {
            namespace Spatial {
                struct SpatialBoundingBox;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_USE
#define DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ab3274d9-9b82-5396-bb00-d70c539796b3"))
IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingBox> : IReference_impl<struct ABI::Windows::Perception::Spatial::SpatialBoundingBox> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialBoundingBox>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingBox> __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_t;
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox ABI::Windows::Foundation::__FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingBox>
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_t ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingBox>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                class AppListEntry;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                interface IAppListEntry;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry ABI::Windows::ApplicationModel::Core::IAppListEntry

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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
        namespace Perception {
            namespace Spatial {
                
                typedef struct SpatialBoundingBox SpatialBoundingBox;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */




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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



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
            namespace StartScreen {
                
                typedef enum ForegroundText : int ForegroundText;
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                
                typedef enum JumpListItemKind : int JumpListItemKind;
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                
                typedef enum JumpListSystemGroupKind : int JumpListSystemGroupKind;
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                
                typedef enum TileOptions : unsigned int TileOptions;
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                
                typedef enum TileSize : int TileSize;
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
























namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class StartScreenManager;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class TileMixedRealityModel;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class VisualElementsRequest;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                class VisualElementsRequestDeferral;
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */











/*
 *
 * Struct Windows.UI.StartScreen.ForegroundText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [v1_enum, contract] */
                enum ForegroundText : int
                {
                    ForegroundText_Dark = 0,
                    ForegroundText_Light = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.StartScreen.JumpListItemKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [v1_enum, contract] */
                enum JumpListItemKind : int
                {
                    JumpListItemKind_Arguments = 0,
                    JumpListItemKind_Separator = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.StartScreen.JumpListSystemGroupKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [v1_enum, contract] */
                enum JumpListSystemGroupKind : int
                {
                    JumpListSystemGroupKind_None = 0,
                    JumpListSystemGroupKind_Frequent = 1,
                    JumpListSystemGroupKind_Recent = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.StartScreen.TileOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [v1_enum, flags, contract] */
                enum TileOptions : unsigned int
                {
                    TileOptions_None
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("TileOptions.None may be altered or unavailable for release after Windows Phone 8.1.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 0,
                    TileOptions_ShowNameOnLogo
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("TileOptions.ShowNameOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnSquare150x150Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 0x1,
                    TileOptions_ShowNameOnWideLogo
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("TileOptions.ShowNameWideOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnWide310x150Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 0x2,
                    TileOptions_CopyOnDeployment
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("TileOptions.CopyOnDeployment may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.RoamingEnabled to control roaming behavior.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 0x4,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(TileOptions)
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.StartScreen.TileSize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [v1_enum, contract] */
                enum TileSize : int
                {
                    TileSize_Default = 0,
                    TileSize_Square30x30
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("TileSize.Square30x30 may be altered or unavailable for release after Windows 10.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 1,
                    TileSize_Square70x70
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("TileSize.Square70x70 may be altered or unavailable for release after Windows Phone 8.1.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 2,
                    TileSize_Square150x150 = 3,
                    TileSize_Wide310x150 = 4,
                    TileSize_Square310x310 = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    TileSize_Square71x71 = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    TileSize_Square44x44 = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpList[] = L"Windows.UI.StartScreen.IJumpList";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("B0234C3E-CD6F-4CB6-A611-61FD505F3ED1"), exclusiveto, contract] */
                MIDL_INTERFACE("B0234C3E-CD6F-4CB6-A611-61FD505F3ED1")
                IJumpList : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Items(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemGroupKind(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::StartScreen::JumpListSystemGroupKind * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SystemGroupKind(
                        /* [in] */ABI::Windows::UI::StartScreen::JumpListSystemGroupKind value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJumpList=_uuidof(IJumpList);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpList;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpListItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpListItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListItem[] = L"Windows.UI.StartScreen.IJumpListItem";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("7ADB6717-8B5D-4820-995B-9B418DBE48B0"), exclusiveto, contract] */
                MIDL_INTERFACE("7ADB6717-8B5D-4820-995B-9B418DBE48B0")
                IJumpListItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::StartScreen::JumpListItemKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arguments(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemovedByUser(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Description(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GroupName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GroupName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJumpListItem=_uuidof(IJumpListItem);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpListItemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpListItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListItemStatics[] = L"Windows.UI.StartScreen.IJumpListItemStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("F1BFC4E8-C7AA-49CB-8DDE-ECFCCD7AD7E4"), exclusiveto, contract] */
                MIDL_INTERFACE("F1BFC4E8-C7AA-49CB-8DDE-ECFCCD7AD7E4")
                IJumpListItemStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithArguments(
                        /* [in] */__RPC__in HSTRING arguments,
                        /* [in] */__RPC__in HSTRING displayName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::IJumpListItem * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSeparator(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::IJumpListItem * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJumpListItemStatics=_uuidof(IJumpListItemStatics);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpListStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListStatics[] = L"Windows.UI.StartScreen.IJumpListStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("A7E0C681-E67E-4B74-8250-3F322C4D92C3"), exclusiveto, contract] */
                MIDL_INTERFACE("A7E0C681-E67E-4B74-8250-3F322C4D92C3")
                IJumpListStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE LoadCurrentAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJumpListStatics=_uuidof(IJumpListStatics);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTile[] = L"Windows.UI.StartScreen.ISecondaryTile";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("9E9E51E0-2BB5-4BC0-BB8D-42B23ABCC88D"), exclusiveto, contract] */
                MIDL_INTERFACE("9E9E51E0-2BB5-4BC0-BB8D-42B23ABCC88D")
                ISecondaryTile : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TileId(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TileId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Arguments(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arguments(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("ShortName may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayName.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_ShortName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("ShortName may be altered or unavailable for releases after Windows 8.1. Instead, use DisplayName.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ShortName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_SmallLogo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SmallLogo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_WideLogo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_WideLogo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LockScreenBadgeLogo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LockScreenBadgeLogo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LockScreenDisplayBadgeAndTileText(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LockScreenDisplayBadgeAndTileText(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TileOptions(
                        /* [in] */ABI::Windows::UI::StartScreen::TileOptions value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TileOptions(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::StartScreen::TileOptions * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_ForegroundText(
                        /* [in] */ABI::Windows::UI::StartScreen::ForegroundText value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("ForegroundText may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ForegroundText.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundText(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::StartScreen::ForegroundText * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestCreateAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestCreateAsyncWithPoint(
                        /* [in] */ABI::Windows::Foundation::Point invocationPoint,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestCreateAsyncWithRect(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestCreateAsyncWithRectAndPlacement(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestDeleteAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestDeleteAsyncWithPoint(
                        /* [in] */ABI::Windows::Foundation::Point invocationPoint,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestDeleteAsyncWithRect(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestDeleteAsyncWithRectAndPlacement(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTile=_uuidof(ISecondaryTile);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.StartScreen.ISecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTile2[] = L"Windows.UI.StartScreen.ISecondaryTile2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("B2F6CC35-3250-4990-923C-294AB4B694DD"), exclusiveto, contract] */
                MIDL_INTERFACE("B2F6CC35-3250-4990-923C-294AB4B694DD")
                ISecondaryTile2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PhoneticName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhoneticName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualElements(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoamingEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoamingEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_VisualElementsRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_VisualElementsRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTile2=_uuidof(ISecondaryTile2);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileFactory[] = L"Windows.UI.StartScreen.ISecondaryTileFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("57F52CA0-51BC-4ABF-8EBF-627A0398B05A"), exclusiveto, contract] */
                MIDL_INTERFACE("57F52CA0-51BC-4ABF-8EBF-627A0398B05A")
                ISecondaryTileFactory : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateTile(
                        /* [in] */__RPC__in HSTRING tileId,
                        /* [in] */__RPC__in HSTRING shortName,
                        /* [in] */__RPC__in HSTRING displayName,
                        /* [in] */__RPC__in HSTRING arguments,
                        /* [in] */ABI::Windows::UI::StartScreen::TileOptions tileOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * logoReference,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::ISecondaryTile * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateWideTile(
                        /* [in] */__RPC__in HSTRING tileId,
                        /* [in] */__RPC__in HSTRING shortName,
                        /* [in] */__RPC__in HSTRING displayName,
                        /* [in] */__RPC__in HSTRING arguments,
                        /* [in] */ABI::Windows::UI::StartScreen::TileOptions tileOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * logoReference,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * wideLogoReference,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::ISecondaryTile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithId(
                        /* [in] */__RPC__in HSTRING tileId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::ISecondaryTile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTileFactory=_uuidof(ISecondaryTileFactory);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.StartScreen.ISecondaryTileFactory
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileFactory2[] = L"Windows.UI.StartScreen.ISecondaryTileFactory2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("274B8A3B-522D-448E-9EB2-D0672AB345C8"), exclusiveto, contract] */
                MIDL_INTERFACE("274B8A3B-522D-448E-9EB2-D0672AB345C8")
                ISecondaryTileFactory2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMinimalTile(
                        /* [in] */__RPC__in HSTRING tileId,
                        /* [in] */__RPC__in HSTRING displayName,
                        /* [in] */__RPC__in HSTRING arguments,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * square150x150Logo,
                        /* [in] */ABI::Windows::UI::StartScreen::TileSize desiredSize,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::ISecondaryTile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTileFactory2=_uuidof(ISecondaryTileFactory2);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileStatics[] = L"Windows.UI.StartScreen.ISecondaryTileStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("99908DAE-D051-4676-87FE-9EC242D83C74"), exclusiveto, contract] */
                MIDL_INTERFACE("99908DAE-D051-4676-87FE-9EC242D83C74")
                ISecondaryTileStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Exists(
                        /* [in] */__RPC__in HSTRING tileId,
                        /* [retval, out] */__RPC__out boolean * exists
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllForApplicationAsync(
                        /* [in] */__RPC__in HSTRING applicationId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindAllForPackageAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTileStatics=_uuidof(ISecondaryTileStatics);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("1D8DF333-815E-413F-9F50-A81DA70A96B2"), exclusiveto, contract] */
                MIDL_INTERFACE("1D8DF333-815E-413F-9F50-A81DA70A96B2")
                ISecondaryTileVisualElements : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Square30x30Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Square30x30Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Square70x70Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Square70x70Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Square150x150Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Square150x150Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Wide310x150Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wide310x150Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Square310x310Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Square310x310Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ForegroundText(
                        /* [in] */ABI::Windows::UI::StartScreen::ForegroundText value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundText(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::StartScreen::ForegroundText * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowNameOnSquare150x150Logo(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowNameOnSquare150x150Logo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowNameOnWide310x150Logo(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowNameOnWide310x150Logo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowNameOnSquare310x310Logo(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowNameOnSquare310x310Logo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTileVisualElements=_uuidof(ISecondaryTileVisualElements);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements2[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("FD2E31D0-57DC-4794-8ECF-5682F5F3E6EF"), exclusiveto, contract] */
                MIDL_INTERFACE("FD2E31D0-57DC-4794-8ECF-5682F5F3E6EF")
                ISecondaryTileVisualElements2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Square71x71Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Square71x71Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTileVisualElements2=_uuidof(ISecondaryTileVisualElements2);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements3[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("56B55AD6-D15C-40F4-81E7-57FFD8F8A4E9"), exclusiveto, contract] */
                MIDL_INTERFACE("56B55AD6-D15C-40F4-81E7-57FFD8F8A4E9")
                ISecondaryTileVisualElements3 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Square44x44Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Square44x44Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTileVisualElements3=_uuidof(ISecondaryTileVisualElements3);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements4[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("66566117-B544-40D2-8D12-74D4EC24D04C"), exclusiveto, contract] */
                MIDL_INTERFACE("66566117-B544-40D2-8D12-74D4EC24D04C")
                ISecondaryTileVisualElements4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MixedRealityModel(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::ITileMixedRealityModel * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryTileVisualElements4=_uuidof(ISecondaryTileVisualElements4);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.StartScreen.IStartScreenManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.StartScreenManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IStartScreenManager[] = L"Windows.UI.StartScreen.IStartScreenManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("4A1DCBCB-26E9-4EB4-8933-859EB6ECDB29"), exclusiveto, contract] */
                MIDL_INTERFACE("4A1DCBCB-26E9-4EB4-8933-859EB6ECDB29")
                IStartScreenManager : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SupportsAppListEntry(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Core::IAppListEntry * appListEntry,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ContainsAppListEntryAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Core::IAppListEntry * appListEntry,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAddAppListEntryAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Core::IAppListEntry * appListEntry,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStartScreenManager=_uuidof(IStartScreenManager);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.StartScreen.IStartScreenManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.StartScreenManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IStartScreenManagerStatics[] = L"Windows.UI.StartScreen.IStartScreenManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("7865EF0F-B585-464E-8993-34E8F8738D48"), exclusiveto, contract] */
                MIDL_INTERFACE("7865EF0F-B585-464E-8993-34E8F8738D48")
                IStartScreenManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::IStartScreenManager * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::IStartScreenManager * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStartScreenManagerStatics=_uuidof(IStartScreenManagerStatics);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.StartScreen.ITileMixedRealityModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.TileMixedRealityModel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ITileMixedRealityModel[] = L"Windows.UI.StartScreen.ITileMixedRealityModel";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("B0764E5B-887D-4242-9A19-3D0A4EA78031"), exclusiveto, contract] */
                MIDL_INTERFACE("B0764E5B-887D-4242-9A19-3D0A4EA78031")
                ITileMixedRealityModel : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BoundingBox(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingBox(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITileMixedRealityModel=_uuidof(ITileMixedRealityModel);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.StartScreen.IVisualElementsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.VisualElementsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequest[] = L"Windows.UI.StartScreen.IVisualElementsRequest";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("C138333A-9308-4072-88CC-D068DB347C68"), exclusiveto, contract] */
                MIDL_INTERFACE("C138333A-9308-4072-88CC-D068DB347C68")
                IVisualElementsRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualElements(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlternateVisualElements(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::IVisualElementsRequestDeferral * * deferral
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualElementsRequest=_uuidof(IVisualElementsRequest);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.IVisualElementsRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.VisualElementsRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequestDeferral[] = L"Windows.UI.StartScreen.IVisualElementsRequestDeferral";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("A1656EB0-0126-4357-8204-BD82BB2A046D"), exclusiveto, contract] */
                MIDL_INTERFACE("A1656EB0-0126-4357-8204-BD82BB2A046D")
                IVisualElementsRequestDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualElementsRequestDeferral=_uuidof(IVisualElementsRequestDeferral);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.IVisualElementsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.VisualElementsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs[] = L"Windows.UI.StartScreen.IVisualElementsRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace StartScreen {
                /* [object, uuid("7B6FC982-3A0D-4ECE-AF96-CD17E1B00B2D"), exclusiveto, contract] */
                MIDL_INTERFACE("7B6FC982-3A0D-4ECE-AF96-CD17E1B00B2D")
                IVisualElementsRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::StartScreen::IVisualElementsRequest * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualElementsRequestedEventArgs=_uuidof(IVisualElementsRequestedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* StartScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.JumpList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.IJumpListStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IJumpList ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_JumpList_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_JumpList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_JumpList[] = L"Windows.UI.StartScreen.JumpList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.StartScreen.JumpListItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.IJumpListItemStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IJumpListItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_JumpListItem_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_JumpListItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_JumpListItem[] = L"Windows.UI.StartScreen.JumpListItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.StartScreen.SecondaryTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.StartScreen.ISecondaryTileFactory2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.UI.StartScreen.ISecondaryTileFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.ISecondaryTileStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.ISecondaryTile ** Default Interface **
 *    Windows.UI.StartScreen.ISecondaryTile2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTile_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_SecondaryTile[] = L"Windows.UI.StartScreen.SecondaryTile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements ** Default Interface **
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements2
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements3
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements4
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTileVisualElements_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTileVisualElements_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_SecondaryTileVisualElements[] = L"Windows.UI.StartScreen.SecondaryTileVisualElements";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.StartScreenManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.IStartScreenManagerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IStartScreenManager ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_StartScreenManager_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_StartScreenManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_StartScreenManager[] = L"Windows.UI.StartScreen.StartScreenManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.StartScreen.TileMixedRealityModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.ITileMixedRealityModel ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_TileMixedRealityModel_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_TileMixedRealityModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_TileMixedRealityModel[] = L"Windows.UI.StartScreen.TileMixedRealityModel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.StartScreen.VisualElementsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IVisualElementsRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequest[] = L"Windows.UI.StartScreen.VisualElementsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.VisualElementsRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IVisualElementsRequestDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequestDeferral[] = L"Windows.UI.StartScreen.VisualElementsRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.VisualElementsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IVisualElementsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequestedEventArgs[] = L"Windows.UI.StartScreen.VisualElementsRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpList __x_ABI_CWindows_CUI_CStartScreen_CIJumpList;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem;

typedef struct __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;

interface __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem;

typedef  struct __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;

interface __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile;

typedef struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;

interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile;

typedef  struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;

interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;

typedef struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl;

interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;

typedef  struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl;

interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem;

typedef struct __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
            /* [in] */ __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;

interface __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;

typedef struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
            /* [in] */ __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;

interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;

typedef struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
            /* [in] */ __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl;

interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CStartScreen__CJumpListItem;

typedef struct __FIVector_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;

interface __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CStartScreen__CJumpListItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpListVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpListVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList;

typedef struct __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpListVtbl;

interface __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs_INTERFACE_DEFINED__

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


struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;

#if !defined(____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;

typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl;

interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;




#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;





typedef enum __x_ABI_CWindows_CUI_CStartScreen_CForegroundText __x_ABI_CWindows_CUI_CStartScreen_CForegroundText;


typedef enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind;


typedef enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind;


typedef enum __x_ABI_CWindows_CUI_CStartScreen_CTileOptions __x_ABI_CWindows_CUI_CStartScreen_CTileOptions;


typedef enum __x_ABI_CWindows_CUI_CStartScreen_CTileSize __x_ABI_CWindows_CUI_CStartScreen_CTileSize;





































/*
 *
 * Struct Windows.UI.StartScreen.ForegroundText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CStartScreen_CForegroundText
{
    ForegroundText_Dark = 0,
    ForegroundText_Light = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.StartScreen.JumpListItemKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind
{
    JumpListItemKind_Arguments = 0,
    JumpListItemKind_Separator = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.StartScreen.JumpListSystemGroupKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind
{
    JumpListSystemGroupKind_None = 0,
    JumpListSystemGroupKind_Frequent = 1,
    JumpListSystemGroupKind_Recent = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.StartScreen.TileOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CStartScreen_CTileOptions
{
    TileOptions_None
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("TileOptions.None may be altered or unavailable for release after Windows Phone 8.1.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 0,
    TileOptions_ShowNameOnLogo
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("TileOptions.ShowNameOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnSquare150x150Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 0x1,
    TileOptions_ShowNameOnWideLogo
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("TileOptions.ShowNameWideOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnWide310x150Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 0x2,
    TileOptions_CopyOnDeployment
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("TileOptions.CopyOnDeployment may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.RoamingEnabled to control roaming behavior.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.StartScreen.TileSize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CStartScreen_CTileSize
{
    TileSize_Default = 0,
    TileSize_Square30x30
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("TileSize.Square30x30 may be altered or unavailable for release after Windows 10.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 1,
    TileSize_Square70x70
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("TileSize.Square70x70 may be altered or unavailable for release after Windows Phone 8.1.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 2,
    TileSize_Square150x150 = 3,
    TileSize_Wide310x150 = 4,
    TileSize_Square310x310 = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    TileSize_Square71x71 = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    TileSize_Square44x44 = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpList[] = L"Windows.UI.StartScreen.IJumpList";
/* [object, uuid("B0234C3E-CD6F-4CB6-A611-61FD505F3ED1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemGroupKind )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SystemGroupKind )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
        /* [in] */__x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpList
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_get_Items(This,value) \
    ( (This)->lpVtbl->get_Items(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_get_SystemGroupKind(This,value) \
    ( (This)->lpVtbl->get_SystemGroupKind(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_put_SystemGroupKind(This,value) \
    ( (This)->lpVtbl->put_SystemGroupKind(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpList_SaveAsync(This,result) \
    ( (This)->lpVtbl->SaveAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpList;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpListItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpListItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListItem[] = L"Windows.UI.StartScreen.IJumpListItem";
/* [object, uuid("7ADB6717-8B5D-4820-995B-9B418DBE48B0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemovedByUser )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GroupName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GroupName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_get_Arguments(This,value) \
    ( (This)->lpVtbl->get_Arguments(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_get_RemovedByUser(This,value) \
    ( (This)->lpVtbl->get_RemovedByUser(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_put_Description(This,value) \
    ( (This)->lpVtbl->put_Description(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_get_GroupName(This,value) \
    ( (This)->lpVtbl->get_GroupName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_put_GroupName(This,value) \
    ( (This)->lpVtbl->put_GroupName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_get_Logo(This,value) \
    ( (This)->lpVtbl->get_Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_put_Logo(This,value) \
    ( (This)->lpVtbl->put_Logo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpListItemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpListItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListItemStatics[] = L"Windows.UI.StartScreen.IJumpListItemStatics";
/* [object, uuid("F1BFC4E8-C7AA-49CB-8DDE-ECFCCD7AD7E4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithArguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
        /* [in] */__RPC__in HSTRING arguments,
        /* [in] */__RPC__in HSTRING displayName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSeparator )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStaticsVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_CreateWithArguments(This,arguments,displayName,result) \
    ( (This)->lpVtbl->CreateWithArguments(This,arguments,displayName,result) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_CreateSeparator(This,result) \
    ( (This)->lpVtbl->CreateSeparator(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.IJumpListStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.JumpList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListStatics[] = L"Windows.UI.StartScreen.IJumpListStatics";
/* [object, uuid("A7E0C681-E67E-4B74-8250-3F322C4D92C3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadCurrentAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStaticsVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_LoadCurrentAsync(This,result) \
    ( (This)->lpVtbl->LoadCurrentAsync(This,result) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTile[] = L"Windows.UI.StartScreen.ISecondaryTile";
/* [object, uuid("9E9E51E0-2BB5-4BC0-BB8D-42B23ABCC88D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TileId )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TileId )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Arguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("ShortName may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayName.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_ShortName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("ShortName may be altered or unavailable for releases after Windows 8.1. Instead, use DisplayName.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ShortName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_SmallLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SmallLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_WideLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_WideLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LockScreenBadgeLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LockScreenBadgeLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LockScreenDisplayBadgeAndTileText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LockScreenDisplayBadgeAndTileText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TileOptions )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CUI_CStartScreen_CTileOptions value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TileOptions )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CStartScreen_CTileOptions * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CUI_CStartScreen_CForegroundText value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("ForegroundText may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ForegroundText.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CStartScreen_CForegroundText * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestCreateAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestCreateAsyncWithPoint )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint invocationPoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestCreateAsyncWithRect )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestCreateAsyncWithRectAndPlacement )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsyncWithPoint )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint invocationPoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsyncWithRect )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsyncWithRectAndPlacement )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_TileId(This,value) \
    ( (This)->lpVtbl->put_TileId(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_TileId(This,value) \
    ( (This)->lpVtbl->get_TileId(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_Arguments(This,value) \
    ( (This)->lpVtbl->put_Arguments(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_Arguments(This,value) \
    ( (This)->lpVtbl->get_Arguments(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ShortName may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayName.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_ShortName(This,value) \
    ( (This)->lpVtbl->put_ShortName(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ShortName may be altered or unavailable for releases after Windows 8.1. Instead, use DisplayName.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_ShortName(This,value) \
    ( (This)->lpVtbl->get_ShortName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_Logo(This,value) \
    ( (This)->lpVtbl->put_Logo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_Logo(This,value) \
    ( (This)->lpVtbl->get_Logo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_SmallLogo(This,value) \
    ( (This)->lpVtbl->put_SmallLogo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_SmallLogo(This,value) \
    ( (This)->lpVtbl->get_SmallLogo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_WideLogo(This,value) \
    ( (This)->lpVtbl->put_WideLogo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_WideLogo(This,value) \
    ( (This)->lpVtbl->get_WideLogo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_LockScreenBadgeLogo(This,value) \
    ( (This)->lpVtbl->put_LockScreenBadgeLogo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_LockScreenBadgeLogo(This,value) \
    ( (This)->lpVtbl->get_LockScreenBadgeLogo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_LockScreenDisplayBadgeAndTileText(This,value) \
    ( (This)->lpVtbl->put_LockScreenDisplayBadgeAndTileText(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_LockScreenDisplayBadgeAndTileText(This,value) \
    ( (This)->lpVtbl->get_LockScreenDisplayBadgeAndTileText(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_TileOptions(This,value) \
    ( (This)->lpVtbl->put_TileOptions(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_TileOptions(This,value) \
    ( (This)->lpVtbl->get_TileOptions(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_ForegroundText(This,value) \
    ( (This)->lpVtbl->put_ForegroundText(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ForegroundText may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ForegroundText.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_ForegroundText(This,value) \
    ( (This)->lpVtbl->get_ForegroundText(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestCreateAsync(This,operation) \
    ( (This)->lpVtbl->RequestCreateAsync(This,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestCreateAsyncWithPoint(This,invocationPoint,operation) \
    ( (This)->lpVtbl->RequestCreateAsyncWithPoint(This,invocationPoint,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestCreateAsyncWithRect(This,selection,operation) \
    ( (This)->lpVtbl->RequestCreateAsyncWithRect(This,selection,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestCreateAsyncWithRectAndPlacement(This,selection,preferredPlacement,operation) \
    ( (This)->lpVtbl->RequestCreateAsyncWithRectAndPlacement(This,selection,preferredPlacement,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestDeleteAsync(This,operation) \
    ( (This)->lpVtbl->RequestDeleteAsync(This,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestDeleteAsyncWithPoint(This,invocationPoint,operation) \
    ( (This)->lpVtbl->RequestDeleteAsyncWithPoint(This,invocationPoint,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestDeleteAsyncWithRect(This,selection,operation) \
    ( (This)->lpVtbl->RequestDeleteAsyncWithRect(This,selection,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_RequestDeleteAsyncWithRectAndPlacement(This,selection,preferredPlacement,operation) \
    ( (This)->lpVtbl->RequestDeleteAsyncWithRectAndPlacement(This,selection,preferredPlacement,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_UpdateAsync(This,operation) \
    ( (This)->lpVtbl->UpdateAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.StartScreen.ISecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTile2[] = L"Windows.UI.StartScreen.ISecondaryTile2";
/* [object, uuid("B2F6CC35-3250-4990-923C-294AB4B694DD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PhoneticName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhoneticName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualElements )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoamingEnabled )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoamingEnabled )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_VisualElementsRequested )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_VisualElementsRequested )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2Vtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_put_PhoneticName(This,value) \
    ( (This)->lpVtbl->put_PhoneticName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_get_PhoneticName(This,value) \
    ( (This)->lpVtbl->get_PhoneticName(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_get_VisualElements(This,value) \
    ( (This)->lpVtbl->get_VisualElements(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_put_RoamingEnabled(This,value) \
    ( (This)->lpVtbl->put_RoamingEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_get_RoamingEnabled(This,value) \
    ( (This)->lpVtbl->get_RoamingEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_add_VisualElementsRequested(This,handler,token) \
    ( (This)->lpVtbl->add_VisualElementsRequested(This,handler,token) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_remove_VisualElementsRequested(This,token) \
    ( (This)->lpVtbl->remove_VisualElementsRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileFactory[] = L"Windows.UI.StartScreen.ISecondaryTileFactory";
/* [object, uuid("57F52CA0-51BC-4ABF-8EBF-627A0398B05A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateTile )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
        /* [in] */__RPC__in HSTRING tileId,
        /* [in] */__RPC__in HSTRING shortName,
        /* [in] */__RPC__in HSTRING displayName,
        /* [in] */__RPC__in HSTRING arguments,
        /* [in] */__x_ABI_CWindows_CUI_CStartScreen_CTileOptions tileOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * logoReference,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateWideTile )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
        /* [in] */__RPC__in HSTRING tileId,
        /* [in] */__RPC__in HSTRING shortName,
        /* [in] */__RPC__in HSTRING displayName,
        /* [in] */__RPC__in HSTRING arguments,
        /* [in] */__x_ABI_CWindows_CUI_CStartScreen_CTileOptions tileOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * logoReference,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * wideLogoReference,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithId )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
        /* [in] */__RPC__in HSTRING tileId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactoryVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_CreateTile(This,tileId,shortName,displayName,arguments,tileOptions,logoReference,value) \
    ( (This)->lpVtbl->CreateTile(This,tileId,shortName,displayName,arguments,tileOptions,logoReference,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_CreateWideTile(This,tileId,shortName,displayName,arguments,tileOptions,logoReference,wideLogoReference,value) \
    ( (This)->lpVtbl->CreateWideTile(This,tileId,shortName,displayName,arguments,tileOptions,logoReference,wideLogoReference,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_CreateWithId(This,tileId,value) \
    ( (This)->lpVtbl->CreateWithId(This,tileId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.StartScreen.ISecondaryTileFactory
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileFactory2[] = L"Windows.UI.StartScreen.ISecondaryTileFactory2";
/* [object, uuid("274B8A3B-522D-448E-9EB2-D0672AB345C8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMinimalTile )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
        /* [in] */__RPC__in HSTRING tileId,
        /* [in] */__RPC__in HSTRING displayName,
        /* [in] */__RPC__in HSTRING arguments,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * square150x150Logo,
        /* [in] */__x_ABI_CWindows_CUI_CStartScreen_CTileSize desiredSize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2Vtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_CreateMinimalTile(This,tileId,displayName,arguments,square150x150Logo,desiredSize,value) \
    ( (This)->lpVtbl->CreateMinimalTile(This,tileId,displayName,arguments,square150x150Logo,desiredSize,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileStatics[] = L"Windows.UI.StartScreen.ISecondaryTileStatics";
/* [object, uuid("99908DAE-D051-4676-87FE-9EC242D83C74"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Exists )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
        /* [in] */__RPC__in HSTRING tileId,
        /* [retval, out] */__RPC__out boolean * exists
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllForApplicationAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
        /* [in] */__RPC__in HSTRING applicationId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllForPackageAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStaticsVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_Exists(This,tileId,exists) \
    ( (This)->lpVtbl->Exists(This,tileId,exists) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FindAllAsync(This,operation) \
    ( (This)->lpVtbl->FindAllAsync(This,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FindAllForApplicationAsync(This,applicationId,operation) \
    ( (This)->lpVtbl->FindAllForApplicationAsync(This,applicationId,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_FindAllForPackageAsync(This,operation) \
    ( (This)->lpVtbl->FindAllForPackageAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements";
/* [object, uuid("1D8DF333-815E-413F-9F50-A81DA70A96B2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Square30x30Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Square30x30Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Square70x70Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Square70x70Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Square150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Square150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Wide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Square310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Square310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */__x_ABI_CWindows_CUI_CStartScreen_CForegroundText value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CStartScreen_CForegroundText * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowNameOnSquare150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowNameOnSquare150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowNameOnWide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowNameOnWide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowNameOnSquare310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowNameOnSquare310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElementsVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElementsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_Square30x30Logo(This,value) \
    ( (This)->lpVtbl->put_Square30x30Logo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_Square30x30Logo(This,value) \
    ( (This)->lpVtbl->get_Square30x30Logo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_Square70x70Logo(This,value) \
    ( (This)->lpVtbl->put_Square70x70Logo(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_Square70x70Logo(This,value) \
    ( (This)->lpVtbl->get_Square70x70Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_Square150x150Logo(This,value) \
    ( (This)->lpVtbl->put_Square150x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_Square150x150Logo(This,value) \
    ( (This)->lpVtbl->get_Square150x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_Wide310x150Logo(This,value) \
    ( (This)->lpVtbl->put_Wide310x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_Wide310x150Logo(This,value) \
    ( (This)->lpVtbl->get_Wide310x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_Square310x310Logo(This,value) \
    ( (This)->lpVtbl->put_Square310x310Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_Square310x310Logo(This,value) \
    ( (This)->lpVtbl->get_Square310x310Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_ForegroundText(This,value) \
    ( (This)->lpVtbl->put_ForegroundText(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_ForegroundText(This,value) \
    ( (This)->lpVtbl->get_ForegroundText(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_ShowNameOnSquare150x150Logo(This,value) \
    ( (This)->lpVtbl->put_ShowNameOnSquare150x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_ShowNameOnSquare150x150Logo(This,value) \
    ( (This)->lpVtbl->get_ShowNameOnSquare150x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_ShowNameOnWide310x150Logo(This,value) \
    ( (This)->lpVtbl->put_ShowNameOnWide310x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_ShowNameOnWide310x150Logo(This,value) \
    ( (This)->lpVtbl->get_ShowNameOnWide310x150Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_put_ShowNameOnSquare310x310Logo(This,value) \
    ( (This)->lpVtbl->put_ShowNameOnSquare310x310Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_get_ShowNameOnSquare310x310Logo(This,value) \
    ( (This)->lpVtbl->get_ShowNameOnSquare310x310Logo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements2[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements2";
/* [object, uuid("FD2E31D0-57DC-4794-8ECF-5682F5F3E6EF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Square71x71Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Square71x71Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2Vtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_put_Square71x71Logo(This,value) \
    ( (This)->lpVtbl->put_Square71x71Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_get_Square71x71Logo(This,value) \
    ( (This)->lpVtbl->get_Square71x71Logo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements3[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements3";
/* [object, uuid("56B55AD6-D15C-40F4-81E7-57FFD8F8A4E9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Square44x44Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Square44x44Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3Vtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_put_Square44x44Logo(This,value) \
    ( (This)->lpVtbl->put_Square44x44Logo(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_get_Square44x44Logo(This,value) \
    ( (This)->lpVtbl->get_Square44x44Logo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.ISecondaryTileVisualElements4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements4[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements4";
/* [object, uuid("66566117-B544-40D2-8D12-74D4EC24D04C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MixedRealityModel )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4Vtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_get_MixedRealityModel(This,value) \
    ( (This)->lpVtbl->get_MixedRealityModel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.StartScreen.IStartScreenManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.StartScreenManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IStartScreenManager[] = L"Windows.UI.StartScreen.IStartScreenManager";
/* [object, uuid("4A1DCBCB-26E9-4EB4-8933-859EB6ECDB29"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SupportsAppListEntry )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * appListEntry,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ContainsAppListEntryAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * appListEntry,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAddAppListEntryAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * appListEntry,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_SupportsAppListEntry(This,appListEntry,result) \
    ( (This)->lpVtbl->SupportsAppListEntry(This,appListEntry,result) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_ContainsAppListEntryAsync(This,appListEntry,operation) \
    ( (This)->lpVtbl->ContainsAppListEntryAsync(This,appListEntry,operation) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_RequestAddAppListEntryAsync(This,appListEntry,operation) \
    ( (This)->lpVtbl->RequestAddAppListEntryAsync(This,appListEntry,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.StartScreen.IStartScreenManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.StartScreenManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IStartScreenManagerStatics[] = L"Windows.UI.StartScreen.IStartScreenManagerStatics";
/* [object, uuid("7865EF0F-B585-464E-8993-34E8F8738D48"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_GetDefault(This,value) \
    ( (This)->lpVtbl->GetDefault(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_GetForUser(This,user,result) \
    ( (This)->lpVtbl->GetForUser(This,user,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.StartScreen.ITileMixedRealityModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.TileMixedRealityModel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ITileMixedRealityModel[] = L"Windows.UI.StartScreen.ITileMixedRealityModel";
/* [object, uuid("B0764E5B-887D-4242-9A19-3D0A4EA78031"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BoundingBox )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModelVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_put_BoundingBox(This,value) \
    ( (This)->lpVtbl->put_BoundingBox(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_get_BoundingBox(This,value) \
    ( (This)->lpVtbl->get_BoundingBox(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.StartScreen.IVisualElementsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.VisualElementsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequest[] = L"Windows.UI.StartScreen.IVisualElementsRequest";
/* [object, uuid("C138333A-9308-4072-88CC-D068DB347C68"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualElements )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlternateVisualElements )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * * deferral
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_get_VisualElements(This,value) \
    ( (This)->lpVtbl->get_VisualElements(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_get_AlternateVisualElements(This,value) \
    ( (This)->lpVtbl->get_AlternateVisualElements(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.IVisualElementsRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.VisualElementsRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequestDeferral[] = L"Windows.UI.StartScreen.IVisualElementsRequestDeferral";
/* [object, uuid("A1656EB0-0126-4357-8204-BD82BB2A046D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferralVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.StartScreen.IVisualElementsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.StartScreen.VisualElementsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs[] = L"Windows.UI.StartScreen.IVisualElementsRequestedEventArgs";
/* [object, uuid("7B6FC982-3A0D-4ECE-AF96-CD17E1B00B2D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.JumpList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.IJumpListStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IJumpList ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_JumpList_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_JumpList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_JumpList[] = L"Windows.UI.StartScreen.JumpList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.StartScreen.JumpListItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.IJumpListItemStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IJumpListItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_JumpListItem_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_JumpListItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_JumpListItem[] = L"Windows.UI.StartScreen.JumpListItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.StartScreen.SecondaryTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.StartScreen.ISecondaryTileFactory2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.UI.StartScreen.ISecondaryTileFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.ISecondaryTileStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.ISecondaryTile ** Default Interface **
 *    Windows.UI.StartScreen.ISecondaryTile2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTile_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_SecondaryTile[] = L"Windows.UI.StartScreen.SecondaryTile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.SecondaryTileVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements ** Default Interface **
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements2
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements3
 *    Windows.UI.StartScreen.ISecondaryTileVisualElements4
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTileVisualElements_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_SecondaryTileVisualElements_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_SecondaryTileVisualElements[] = L"Windows.UI.StartScreen.SecondaryTileVisualElements";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.StartScreenManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.StartScreen.IStartScreenManagerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IStartScreenManager ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_StartScreenManager_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_StartScreenManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_StartScreenManager[] = L"Windows.UI.StartScreen.StartScreenManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.StartScreen.TileMixedRealityModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.ITileMixedRealityModel ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_TileMixedRealityModel_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_TileMixedRealityModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_TileMixedRealityModel[] = L"Windows.UI.StartScreen.TileMixedRealityModel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.StartScreen.VisualElementsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IVisualElementsRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequest[] = L"Windows.UI.StartScreen.VisualElementsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.VisualElementsRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IVisualElementsRequestDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequestDeferral[] = L"Windows.UI.StartScreen.VisualElementsRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.StartScreen.VisualElementsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.StartScreen.IVisualElementsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_StartScreen_VisualElementsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequestedEventArgs[] = L"Windows.UI.StartScreen.VisualElementsRequestedEventArgs";
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
#endif // __windows2Eui2Estartscreen_p_h__

#endif // __windows2Eui2Estartscreen_h__
