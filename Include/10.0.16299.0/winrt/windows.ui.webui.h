/* Header file automatically generated from windows.ui.webui.idl */
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
#ifndef __windows2Eui2Ewebui_h__
#define __windows2Eui2Ewebui_h__
#ifndef __windows2Eui2Ewebui_p_h__
#define __windows2Eui2Ewebui_p_h__


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
#include "Windows.ApplicationModel.h"
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.ApplicationModel.Background.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.ApplicationModel.Wallet.h"
#include "Windows.Graphics.Printing.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IActivatedEventHandler;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler ABI::Windows::UI::WebUI::IActivatedEventHandler

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IEnteredBackgroundEventHandler;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler ABI::Windows::UI::WebUI::IEnteredBackgroundEventHandler

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface ILeavingBackgroundEventHandler;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler ABI::Windows::UI::WebUI::ILeavingBackgroundEventHandler

#endif // ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface INavigatedEventHandler;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler ABI::Windows::UI::WebUI::INavigatedEventHandler

#endif // ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IResumingEventHandler;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler ABI::Windows::UI::WebUI::IResumingEventHandler

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface ISuspendingEventHandler;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler ABI::Windows::UI::WebUI::ISuspendingEventHandler

#endif // ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IActivatedDeferral;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral ABI::Windows::UI::WebUI::IActivatedDeferral

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IActivatedEventArgsDeferral;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral ABI::Windows::UI::WebUI::IActivatedEventArgsDeferral

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IActivatedOperation;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation ABI::Windows::UI::WebUI::IActivatedOperation

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IHtmlPrintDocumentSource;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource ABI::Windows::UI::WebUI::IHtmlPrintDocumentSource

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUIActivationStatics;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics ABI::Windows::UI::WebUI::IWebUIActivationStatics

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUIActivationStatics2;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 ABI::Windows::UI::WebUI::IWebUIActivationStatics2

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUIActivationStatics3;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 ABI::Windows::UI::WebUI::IWebUIActivationStatics3

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUIBackgroundTaskInstance;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance ABI::Windows::UI::WebUI::IWebUIBackgroundTaskInstance

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUIBackgroundTaskInstanceStatics;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics ABI::Windows::UI::WebUI::IWebUIBackgroundTaskInstanceStatics

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUINavigatedDeferral;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral ABI::Windows::UI::WebUI::IWebUINavigatedDeferral

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUINavigatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs ABI::Windows::UI::WebUI::IWebUINavigatedEventArgs

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                interface IWebUINavigatedOperation;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation ABI::Windows::UI::WebUI::IWebUINavigatedOperation

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                enum AppRestartFailureReason : int;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dcec478a-9f27-5c5d-afdb-c91aee4f1f02"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::Core::AppRestartFailureReason> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::Core::AppRestartFailureReason> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Core.AppRestartFailureReason>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::Core::AppRestartFailureReason> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Core::AppRestartFailureReason>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Core::AppRestartFailureReason>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0938905d-54c0-572f-8451-4bfd2b52edda"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::Core::AppRestartFailureReason> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::Core::AppRestartFailureReason> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Core.AppRestartFailureReason>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::Core::AppRestartFailureReason> __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Core::AppRestartFailureReason>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Core::AppRestartFailureReason>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_USE */








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


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IActivatedEventArgsWithUser;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser ABI::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IApplicationViewActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderAddAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderRemoveAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderReplaceAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderShowTimeFrameActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ICachedFileUpdaterActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ICameraSettingsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ICommandLineActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactMapActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactMessageActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactPanelActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactPickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactPostActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactVideoCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContinuationActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IDeviceActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IDevicePairingActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IDialReceiverActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileActivatedEventArgsWithNeighboringFiles;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileOpenPickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileOpenPickerActivatedEventArgs2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileOpenPickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileSavePickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileSavePickerActivatedEventArgs2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileSavePickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFolderPickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ILaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ILockScreenActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ILockScreenCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IPrelaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IPrint3DWorkflowActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IPrintTaskSettingsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IProtocolActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData ABI::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IProtocolForResultsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IRestrictedLaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ISearchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ISearchActivatedEventArgsWithLinguisticDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IShareTargetActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IStartupTaskActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IToastNotificationActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IUserDataAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IVoiceCommandActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IWalletActionActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IWebAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IWebAuthenticationBrokerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IBackgroundTaskInstance;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance ABI::Windows::ApplicationModel::Background::IBackgroundTaskInstance

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                
                typedef enum AppRestartFailureReason : int AppRestartFailureReason;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */




#ifndef ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IEnteredBackgroundEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs ABI::Windows::ApplicationModel::IEnteredBackgroundEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ILeavingBackgroundEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs ABI::Windows::ApplicationModel::ILeavingBackgroundEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ISuspendingDeferral;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral ABI::Windows::ApplicationModel::ISuspendingDeferral

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ISuspendingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs ABI::Windows::ApplicationModel::ISuspendingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ISuspendingOperation;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation ABI::Windows::ApplicationModel::ISuspendingOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintDocumentSource;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource ABI::Windows::Graphics::Printing::IPrintDocumentSource

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__





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
            namespace WebUI {
                
                typedef enum PrintContent : int PrintContent;
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */



















namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class ActivatedDeferral;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class ActivatedOperation;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class EnteredBackgroundEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class HtmlPrintDocumentSource;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class LeavingBackgroundEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class SuspendingDeferral;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class SuspendingEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class SuspendingOperation;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIAppointmentsProviderAddAppointmentActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIBackgroundTaskInstanceRuntimeClass;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUICachedFileUpdaterActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUICameraSettingsActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUICommandLineActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIContactCallActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIContactMapActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIContactMessageActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIContactPanelActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIContactPickerActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIContactPostActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIContactVideoCallActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIDeviceActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIDevicePairingActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIDialReceiverActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIFileActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIFileOpenPickerActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIFileOpenPickerContinuationEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIFileSavePickerActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIFileSavePickerContinuationEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIFolderPickerContinuationEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUILaunchActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUILockScreenActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUILockScreenCallActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUILockScreenComponentActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUINavigatedDeferral;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUINavigatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUINavigatedOperation;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIPrint3DWorkflowActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIPrintTaskSettingsActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIPrintWorkflowForegroundTaskActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIProtocolActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIProtocolForResultsActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIRestrictedLaunchActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUISearchActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIShareTargetActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIStartupTaskActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIToastNotificationActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIUserDataAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIVoiceCommandActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIWalletActionActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIWebAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                class WebUIWebAuthenticationBrokerContinuationEventArgs;
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */






/*
 *
 * Struct Windows.UI.WebUI.PrintContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [v1_enum, contract] */
                enum PrintContent : int
                {
                    PrintContent_AllPages = 0,
                    PrintContent_CurrentPage = 1,
                    PrintContent_CustomPageRange = 2,
                    PrintContent_CurrentSelection = 3,
                };
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.ActivatedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("50F1E730-C5D1-4B6B-9ADB-8A11756BE29C"), contract] */
                MIDL_INTERFACE("50F1E730-C5D1-4B6B-9ADB-8A11756BE29C")
                IActivatedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs * eventArgs
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IActivatedEventHandler=_uuidof(IActivatedEventHandler);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.EnteredBackgroundEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("2B09A173-B68E-4DEF-88C1-8DE84E5AAB2F"), contract] */
                MIDL_INTERFACE("2B09A173-B68E-4DEF-88C1-8DE84E5AAB2F")
                IEnteredBackgroundEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::IEnteredBackgroundEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEnteredBackgroundEventHandler=_uuidof(IEnteredBackgroundEventHandler);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Delegate Windows.UI.WebUI.LeavingBackgroundEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("00B4CCD9-7A9C-4B6B-9AC4-13474F268BC4"), contract] */
                MIDL_INTERFACE("00B4CCD9-7A9C-4B6B-9AC4-13474F268BC4")
                ILeavingBackgroundEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::ILeavingBackgroundEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILeavingBackgroundEventHandler=_uuidof(ILeavingBackgroundEventHandler);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Delegate Windows.UI.WebUI.NavigatedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("7AF46FE6-40CA-4E49-A7D6-DBDB330CD1A3"), contract] */
                MIDL_INTERFACE("7AF46FE6-40CA-4E49-A7D6-DBDB330CD1A3")
                INavigatedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::WebUI::IWebUINavigatedEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INavigatedEventHandler=_uuidof(INavigatedEventHandler);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.ResumingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("26599BA9-A22D-4806-A728-ACADC1D075FA"), contract] */
                MIDL_INTERFACE("26599BA9-A22D-4806-A728-ACADC1D075FA")
                IResumingEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResumingEventHandler=_uuidof(IResumingEventHandler);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.SuspendingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("509C429C-78E2-4883-ABC8-8960DCDE1B5C"), contract] */
                MIDL_INTERFACE("509C429C-78E2-4883-ABC8-8960DCDE1B5C")
                ISuspendingEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::ISuspendingEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISuspendingEventHandler=_uuidof(ISuspendingEventHandler);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IActivatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.ActivatedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedDeferral[] = L"Windows.UI.WebUI.IActivatedDeferral";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("C3BD1978-A431-49D8-A76A-395A4E03DCF3"), exclusiveto, contract] */
                MIDL_INTERFACE("C3BD1978-A431-49D8-A76A-395A4E03DCF3")
                IActivatedDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IActivatedDeferral=_uuidof(IActivatedDeferral);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedEventArgsDeferral[] = L"Windows.UI.WebUI.IActivatedEventArgsDeferral";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("CA6D5F74-63C2-44A6-B97B-D9A03C20BC9B"), contract] */
                MIDL_INTERFACE("CA6D5F74-63C2-44A6-B97B-D9A03C20BC9B")
                IActivatedEventArgsDeferral : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivatedOperation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::WebUI::IActivatedOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IActivatedEventArgsDeferral=_uuidof(IActivatedEventArgsDeferral);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IActivatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.ActivatedOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedOperation[] = L"Windows.UI.WebUI.IActivatedOperation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("B6A0B4BC-C6CA-42FD-9818-71904E45FED7"), exclusiveto, contract] */
                MIDL_INTERFACE("B6A0B4BC-C6CA-42FD-9818-71904E45FED7")
                IActivatedOperation : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::WebUI::IActivatedDeferral * * deferral
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IActivatedOperation=_uuidof(IActivatedOperation);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IHtmlPrintDocumentSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.HtmlPrintDocumentSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.IPrintDocumentSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IHtmlPrintDocumentSource[] = L"Windows.UI.WebUI.IHtmlPrintDocumentSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("CEA6469A-0E05-467A-ABC9-36EC1D4CDCB6"), exclusiveto, contract] */
                MIDL_INTERFACE("CEA6469A-0E05-467A-ABC9-36EC1D4CDCB6")
                IHtmlPrintDocumentSource : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::WebUI::PrintContent * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                        /* [in] */ABI::Windows::UI::WebUI::PrintContent value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LeftMargin(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LeftMargin(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TopMargin(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TopMargin(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightMargin(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RightMargin(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BottomMargin(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BottomMargin(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnableHeaderFooter(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EnableHeaderFooter(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShrinkToFit(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShrinkToFit(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PercentScale(
                        /* [retval, out] */__RPC__out FLOAT * pScalePercent
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PercentScale(
                        /* [in] */FLOAT scalePercent
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageRange(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * pstrPageRange
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySetPageRange(
                        /* [in] */__RPC__in HSTRING strPageRange,
                        /* [retval, out] */__RPC__out boolean * pfSuccess
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHtmlPrintDocumentSource=_uuidof(IHtmlPrintDocumentSource);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIActivationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIApplication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics[] = L"Windows.UI.WebUI.IWebUIActivationStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("351B86BD-43B3-482B-85DB-35D87B517AD9"), exclusiveto, contract] */
                MIDL_INTERFACE("351B86BD-43B3-482B-85DB-35D87B517AD9")
                IWebUIActivationStatics : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Activated(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::WebUI::IActivatedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Activated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Suspending(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::WebUI::ISuspendingEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Suspending(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Resuming(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::WebUI::IResumingEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Resuming(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Navigated(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::WebUI::INavigatedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Navigated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUIActivationStatics=_uuidof(IWebUIActivationStatics);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIActivationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIApplication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics2[] = L"Windows.UI.WebUI.IWebUIActivationStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("C8E88696-4D78-4AA4-8F06-2A9EADC6C40A"), exclusiveto, contract] */
                MIDL_INTERFACE("C8E88696-4D78-4AA4-8F06-2A9EADC6C40A")
                IWebUIActivationStatics2 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LeavingBackground(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::WebUI::ILeavingBackgroundEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LeavingBackground(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnteredBackground(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::WebUI::IEnteredBackgroundEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnteredBackground(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EnablePrelaunch(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUIActivationStatics2=_uuidof(IWebUIActivationStatics2);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIActivationStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIApplication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics3[] = L"Windows.UI.WebUI.IWebUIActivationStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("91ABB686-1AF5-4445-B49F-9459F40FC8DE"), exclusiveto, contract] */
                MIDL_INTERFACE("91ABB686-1AF5-4445-B49F-9459F40FC8DE")
                IWebUIActivationStatics3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestRestartAsync(
                        /* [in] */__RPC__in HSTRING launchArguments,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestRestartForUserAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [in] */__RPC__in HSTRING launchArguments,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUIActivationStatics3=_uuidof(IWebUIActivationStatics3);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIBackgroundTaskInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIBackgroundTaskInstance[] = L"Windows.UI.WebUI.IWebUIBackgroundTaskInstance";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("23F12C25-E2F7-4741-BC9C-394595DE24DC"), contract] */
                MIDL_INTERFACE("23F12C25-E2F7-4741-BC9C-394595DE24DC")
                IWebUIBackgroundTaskInstance : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Succeeded(
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Succeeded(
                        /* [in] */boolean succeeded
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUIBackgroundTaskInstance=_uuidof(IWebUIBackgroundTaskInstance);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIBackgroundTaskInstanceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIBackgroundTaskInstance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIBackgroundTaskInstanceStatics[] = L"Windows.UI.WebUI.IWebUIBackgroundTaskInstanceStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("9C7A5291-19AE-4CA3-B94B-FE4EC744A740"), exclusiveto, contract] */
                MIDL_INTERFACE("9C7A5291-19AE-4CA3-B94B-FE4EC744A740")
                IWebUIBackgroundTaskInstanceStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::WebUI::IWebUIBackgroundTaskInstance * * backgroundTaskInstance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUIBackgroundTaskInstanceStatics=_uuidof(IWebUIBackgroundTaskInstanceStatics);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUINavigatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUINavigatedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedDeferral[] = L"Windows.UI.WebUI.IWebUINavigatedDeferral";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("D804204D-831F-46E2-B432-3AFCE211F962"), exclusiveto, contract] */
                MIDL_INTERFACE("D804204D-831F-46E2-B432-3AFCE211F962")
                IWebUINavigatedDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUINavigatedDeferral=_uuidof(IWebUINavigatedDeferral);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUINavigatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedEventArgs[] = L"Windows.UI.WebUI.IWebUINavigatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("A75841B8-2499-4030-A69D-15D2D9CFE524"), contract] */
                MIDL_INTERFACE("A75841B8-2499-4030-A69D-15D2D9CFE524")
                IWebUINavigatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavigatedOperation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::WebUI::IWebUINavigatedOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUINavigatedEventArgs=_uuidof(IWebUINavigatedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUINavigatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUINavigatedOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedOperation[] = L"Windows.UI.WebUI.IWebUINavigatedOperation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace WebUI {
                /* [object, uuid("7A965F08-8182-4A89-AB67-8492E8750D4B"), exclusiveto, contract] */
                MIDL_INTERFACE("7A965F08-8182-4A89-AB67-8492E8750D4B")
                IWebUINavigatedOperation : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::WebUI::IWebUINavigatedDeferral * * deferral
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebUINavigatedOperation=_uuidof(IWebUINavigatedOperation);
                
            } /* Windows */
        } /* UI */
    } /* WebUI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.ActivatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IActivatedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_ActivatedDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_ActivatedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_ActivatedDeferral[] = L"Windows.UI.WebUI.ActivatedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.ActivatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IActivatedOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_ActivatedOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_ActivatedOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_ActivatedOperation[] = L"Windows.UI.WebUI.ActivatedOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.EnteredBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IEnteredBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_EnteredBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_EnteredBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_EnteredBackgroundEventArgs[] = L"Windows.UI.WebUI.EnteredBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.WebUI.HtmlPrintDocumentSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IHtmlPrintDocumentSource ** Default Interface **
 *    Windows.Graphics.Printing.IPrintDocumentSource
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_HtmlPrintDocumentSource_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_HtmlPrintDocumentSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_HtmlPrintDocumentSource[] = L"Windows.UI.WebUI.HtmlPrintDocumentSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.LeavingBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ILeavingBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_LeavingBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_LeavingBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_LeavingBackgroundEventArgs[] = L"Windows.UI.WebUI.LeavingBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.WebUI.SuspendingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_SuspendingDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_SuspendingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingDeferral[] = L"Windows.UI.WebUI.SuspendingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.SuspendingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_SuspendingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_SuspendingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingEventArgs[] = L"Windows.UI.WebUI.SuspendingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.SuspendingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_SuspendingOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_SuspendingOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingOperation[] = L"Windows.UI.WebUI.SuspendingOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIApplication
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIActivationStatics3 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIActivationStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIActivationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIApplication_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIApplication_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIApplication[] = L"Windows.UI.WebUI.WebUIApplication";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderAddAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderAddAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderAddAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIBackgroundTaskInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIBackgroundTaskInstanceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstance_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIBackgroundTaskInstance[] = L"Windows.UI.WebUI.WebUIBackgroundTaskInstance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIBackgroundTaskInstanceRuntimeClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUIBackgroundTaskInstance ** Default Interface **
 *    Windows.ApplicationModel.Background.IBackgroundTaskInstance
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstanceRuntimeClass_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstanceRuntimeClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIBackgroundTaskInstanceRuntimeClass[] = L"Windows.UI.WebUI.WebUIBackgroundTaskInstanceRuntimeClass";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUICachedFileUpdaterActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUICachedFileUpdaterActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUICachedFileUpdaterActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICachedFileUpdaterActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICachedFileUpdaterActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUICameraSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivationCameraSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUICameraSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUICameraSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICameraSettingsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICameraSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUICommandLineActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUICommandLineActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUICommandLineActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICommandLineActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICommandLineActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactMapActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMapActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMapActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactMapActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactMapActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactMessageActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMessageActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMessageActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactMessageActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactMessageActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactPanelActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPanelActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPanelActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPanelActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPanelActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactPickerActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPickerActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactPostActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPostActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPostActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPostActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPostActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactVideoCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactVideoCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactVideoCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactVideoCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactVideoCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIDeviceActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIDeviceActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIDeviceActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDeviceActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDeviceActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIDevicePairingActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIDevicePairingActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIDevicePairingActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDevicePairingActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDevicePairingActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.WebUI.WebUIDialReceiverActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIDialReceiverActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIDialReceiverActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDialReceiverActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDialReceiverActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileOpenPickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileOpenPickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileOpenPickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileOpenPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileOpenPickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFileOpenPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileSavePickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileSavePickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileSavePickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileSavePickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileSavePickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFileSavePickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFolderPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFolderPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFolderPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFolderPickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFolderPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILaunchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILockScreenActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILockScreenCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILockScreenComponentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs ** Default Interface **
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenComponentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenComponentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenComponentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenComponentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.WebUI.WebUINavigatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUINavigatedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedDeferral[] = L"Windows.UI.WebUI.WebUINavigatedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUINavigatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUINavigatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedEventArgs[] = L"Windows.UI.WebUI.WebUINavigatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUINavigatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUINavigatedOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedOperation[] = L"Windows.UI.WebUI.WebUINavigatedOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIPrint3DWorkflowActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIPrint3DWorkflowActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIPrint3DWorkflowActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrint3DWorkflowActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrint3DWorkflowActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIPrintTaskSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintTaskSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintTaskSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrintTaskSettingsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrintTaskSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIPrintWorkflowForegroundTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs ** Default Interface **
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintWorkflowForegroundTaskActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintWorkflowForegroundTaskActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrintWorkflowForegroundTaskActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrintWorkflowForegroundTaskActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.WebUI.WebUIProtocolActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIProtocolActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIProtocolActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIProtocolForResultsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolForResultsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolForResultsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIProtocolForResultsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIProtocolForResultsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIRestrictedLaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIRestrictedLaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIRestrictedLaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIRestrictedLaunchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIRestrictedLaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUISearchActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.WebUISearchActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUISearchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUISearchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUISearchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUISearchActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIShareTargetActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIShareTargetActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIShareTargetActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIShareTargetActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIShareTargetActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIStartupTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIStartupTaskActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIStartupTaskActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIStartupTaskActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIStartupTaskActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.WebUI.WebUIToastNotificationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIToastNotificationActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIToastNotificationActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIToastNotificationActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIToastNotificationActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIUserDataAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIUserDataAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIUserDataAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIUserDataAccountProviderActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIUserDataAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.WebUI.WebUIVoiceCommandActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIVoiceCommandActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIVoiceCommandActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIVoiceCommandActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIVoiceCommandActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIWalletActionActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIWalletActionActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIWalletActionActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWalletActionActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIWalletActionActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIWebAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWebAccountProviderActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIWebAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIWebAuthenticationBrokerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAuthenticationBrokerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAuthenticationBrokerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWebAuthenticationBrokerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIWebAuthenticationBrokerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation;

#endif // ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason_INTERFACE_DEFINED__






#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason;




#ifndef ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral;

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingOperation __x_ABI_CWindows_CApplicationModel_CISuspendingOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CUI_CWebUI_CPrintContent __x_ABI_CWindows_CUI_CWebUI_CPrintContent;
















































































/*
 *
 * Struct Windows.UI.WebUI.PrintContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CWebUI_CPrintContent
{
    PrintContent_AllPages = 0,
    PrintContent_CurrentPage = 1,
    PrintContent_CustomPageRange = 2,
    PrintContent_CurrentSelection = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.ActivatedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("50F1E730-C5D1-4B6B-9ADB-8A11756BE29C"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * eventArgs
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_Invoke(This,sender,eventArgs) \
    ( (This)->lpVtbl->Invoke(This,sender,eventArgs) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.EnteredBackgroundEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_INTERFACE_DEFINED__
/* [object, uuid("2B09A173-B68E-4DEF-88C1-8DE84E5AAB2F"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Delegate Windows.UI.WebUI.LeavingBackgroundEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_INTERFACE_DEFINED__
/* [object, uuid("00B4CCD9-7A9C-4B6B-9AC4-13474F268BC4"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Delegate Windows.UI.WebUI.NavigatedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("7AF46FE6-40CA-4E49-A7D6-DBDB330CD1A3"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.ResumingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_INTERFACE_DEFINED__
/* [object, uuid("26599BA9-A22D-4806-A728-ACADC1D075FA"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.WebUI.SuspendingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_INTERFACE_DEFINED__
/* [object, uuid("509C429C-78E2-4883-ABC8-8960DCDE1B5C"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IActivatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.ActivatedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedDeferral[] = L"Windows.UI.WebUI.IActivatedDeferral";
/* [object, uuid("C3BD1978-A431-49D8-A76A-395A4E03DCF3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferralVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedEventArgsDeferral[] = L"Windows.UI.WebUI.IActivatedEventArgsDeferral";
/* [object, uuid("CA6D5F74-63C2-44A6-B97B-D9A03C20BC9B"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivatedOperation )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferralVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_get_ActivatedOperation(This,value) \
    ( (This)->lpVtbl->get_ActivatedOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedEventArgsDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IActivatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.ActivatedOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IActivatedOperation[] = L"Windows.UI.WebUI.IActivatedOperation";
/* [object, uuid("B6A0B4BC-C6CA-42FD-9818-71904E45FED7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIActivatedDeferral * * deferral
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperationVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIActivatedOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IHtmlPrintDocumentSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.HtmlPrintDocumentSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.IPrintDocumentSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IHtmlPrintDocumentSource[] = L"Windows.UI.WebUI.IHtmlPrintDocumentSource";
/* [object, uuid("CEA6469A-0E05-467A-ABC9-36EC1D4CDCB6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CWebUI_CPrintContent * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */__x_ABI_CWindows_CUI_CWebUI_CPrintContent value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LeftMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LeftMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TopMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TopMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RightMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BottomMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BottomMargin )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnableHeaderFooter )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EnableHeaderFooter )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShrinkToFit )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShrinkToFit )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PercentScale )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__out FLOAT * pScalePercent
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PercentScale )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */FLOAT scalePercent
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageRange )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * pstrPageRange
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetPageRange )(
        __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource * This,
        /* [in] */__RPC__in HSTRING strPageRange,
        /* [retval, out] */__RPC__out boolean * pfSuccess
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSourceVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_LeftMargin(This,value) \
    ( (This)->lpVtbl->get_LeftMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_LeftMargin(This,value) \
    ( (This)->lpVtbl->put_LeftMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_TopMargin(This,value) \
    ( (This)->lpVtbl->get_TopMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_TopMargin(This,value) \
    ( (This)->lpVtbl->put_TopMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_RightMargin(This,value) \
    ( (This)->lpVtbl->get_RightMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_RightMargin(This,value) \
    ( (This)->lpVtbl->put_RightMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_BottomMargin(This,value) \
    ( (This)->lpVtbl->get_BottomMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_BottomMargin(This,value) \
    ( (This)->lpVtbl->put_BottomMargin(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_EnableHeaderFooter(This,value) \
    ( (This)->lpVtbl->get_EnableHeaderFooter(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_EnableHeaderFooter(This,value) \
    ( (This)->lpVtbl->put_EnableHeaderFooter(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_ShrinkToFit(This,value) \
    ( (This)->lpVtbl->get_ShrinkToFit(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_ShrinkToFit(This,value) \
    ( (This)->lpVtbl->put_ShrinkToFit(This,value) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_PercentScale(This,pScalePercent) \
    ( (This)->lpVtbl->get_PercentScale(This,pScalePercent) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_put_PercentScale(This,scalePercent) \
    ( (This)->lpVtbl->put_PercentScale(This,scalePercent) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_get_PageRange(This,pstrPageRange) \
    ( (This)->lpVtbl->get_PageRange(This,pstrPageRange) )

#define __x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_TrySetPageRange(This,strPageRange,pfSuccess) \
    ( (This)->lpVtbl->TrySetPageRange(This,strPageRange,pfSuccess) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIHtmlPrintDocumentSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIActivationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIApplication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics[] = L"Windows.UI.WebUI.IWebUIActivationStatics";
/* [object, uuid("351B86BD-43B3-482B-85DB-35D87B517AD9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIActivatedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Suspending )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CISuspendingEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Suspending )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Resuming )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIResumingEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Resuming )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Navigated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CINavigatedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Navigated )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStaticsVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_add_Activated(This,handler,token) \
    ( (This)->lpVtbl->add_Activated(This,handler,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_remove_Activated(This,token) \
    ( (This)->lpVtbl->remove_Activated(This,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_add_Suspending(This,handler,token) \
    ( (This)->lpVtbl->add_Suspending(This,handler,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_remove_Suspending(This,token) \
    ( (This)->lpVtbl->remove_Suspending(This,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_add_Resuming(This,handler,token) \
    ( (This)->lpVtbl->add_Resuming(This,handler,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_remove_Resuming(This,token) \
    ( (This)->lpVtbl->remove_Resuming(This,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_add_Navigated(This,handler,token) \
    ( (This)->lpVtbl->add_Navigated(This,handler,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_remove_Navigated(This,token) \
    ( (This)->lpVtbl->remove_Navigated(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIActivationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIApplication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics2[] = L"Windows.UI.WebUI.IWebUIActivationStatics2";
/* [object, uuid("C8E88696-4D78-4AA4-8F06-2A9EADC6C40A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LeavingBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CILeavingBackgroundEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LeavingBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnteredBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CWebUI_CIEnteredBackgroundEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnteredBackground )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *EnablePrelaunch )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_add_LeavingBackground(This,handler,token) \
    ( (This)->lpVtbl->add_LeavingBackground(This,handler,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_remove_LeavingBackground(This,token) \
    ( (This)->lpVtbl->remove_LeavingBackground(This,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_add_EnteredBackground(This,handler,token) \
    ( (This)->lpVtbl->add_EnteredBackground(This,handler,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_remove_EnteredBackground(This,token) \
    ( (This)->lpVtbl->remove_EnteredBackground(This,token) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_EnablePrelaunch(This,value) \
    ( (This)->lpVtbl->EnablePrelaunch(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIActivationStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIApplication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIActivationStatics3[] = L"Windows.UI.WebUI.IWebUIActivationStatics3";
/* [object, uuid("91ABB686-1AF5-4445-B49F-9459F40FC8DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestRestartAsync )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
        /* [in] */__RPC__in HSTRING launchArguments,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestRestartForUserAsync )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING launchArguments,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_RequestRestartAsync(This,launchArguments,operation) \
    ( (This)->lpVtbl->RequestRestartAsync(This,launchArguments,operation) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_RequestRestartForUserAsync(This,user,launchArguments,operation) \
    ( (This)->lpVtbl->RequestRestartForUserAsync(This,user,launchArguments,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIActivationStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIBackgroundTaskInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIBackgroundTaskInstance[] = L"Windows.UI.WebUI.IWebUIBackgroundTaskInstance";
/* [object, uuid("23F12C25-E2F7-4741-BC9C-394595DE24DC"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Succeeded )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * This,
        /* [in] */boolean succeeded
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_get_Succeeded(This,succeeded) \
    ( (This)->lpVtbl->get_Succeeded(This,succeeded) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_put_Succeeded(This,succeeded) \
    ( (This)->lpVtbl->put_Succeeded(This,succeeded) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUIBackgroundTaskInstanceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUIBackgroundTaskInstance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUIBackgroundTaskInstanceStatics[] = L"Windows.UI.WebUI.IWebUIBackgroundTaskInstanceStatics";
/* [object, uuid("9C7A5291-19AE-4CA3-B94B-FE4EC744A740"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstance * * backgroundTaskInstance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStaticsVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_get_Current(This,backgroundTaskInstance) \
    ( (This)->lpVtbl->get_Current(This,backgroundTaskInstance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUIBackgroundTaskInstanceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUINavigatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUINavigatedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedDeferral[] = L"Windows.UI.WebUI.IWebUINavigatedDeferral";
/* [object, uuid("D804204D-831F-46E2-B432-3AFCE211F962"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferralVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUINavigatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedEventArgs[] = L"Windows.UI.WebUI.IWebUINavigatedEventArgs";
/* [object, uuid("A75841B8-2499-4030-A69D-15D2D9CFE524"), contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavigatedOperation )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_get_NavigatedOperation(This,value) \
    ( (This)->lpVtbl->get_NavigatedOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.WebUI.IWebUINavigatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.WebUI.WebUINavigatedOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WebUI_IWebUINavigatedOperation[] = L"Windows.UI.WebUI.IWebUINavigatedOperation";
/* [object, uuid("7A965F08-8182-4A89-AB67-8492E8750D4B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedDeferral * * deferral
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperationVtbl;

interface __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation;
#endif /* !defined(____x_ABI_CWindows_CUI_CWebUI_CIWebUINavigatedOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.ActivatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IActivatedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_ActivatedDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_ActivatedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_ActivatedDeferral[] = L"Windows.UI.WebUI.ActivatedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.ActivatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IActivatedOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_ActivatedOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_ActivatedOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_ActivatedOperation[] = L"Windows.UI.WebUI.ActivatedOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.EnteredBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IEnteredBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_EnteredBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_EnteredBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_EnteredBackgroundEventArgs[] = L"Windows.UI.WebUI.EnteredBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.WebUI.HtmlPrintDocumentSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IHtmlPrintDocumentSource ** Default Interface **
 *    Windows.Graphics.Printing.IPrintDocumentSource
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_HtmlPrintDocumentSource_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_HtmlPrintDocumentSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_HtmlPrintDocumentSource[] = L"Windows.UI.WebUI.HtmlPrintDocumentSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.LeavingBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ILeavingBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_LeavingBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_LeavingBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_LeavingBackgroundEventArgs[] = L"Windows.UI.WebUI.LeavingBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.WebUI.SuspendingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_SuspendingDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_SuspendingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingDeferral[] = L"Windows.UI.WebUI.SuspendingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.SuspendingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_SuspendingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_SuspendingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingEventArgs[] = L"Windows.UI.WebUI.SuspendingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.SuspendingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_SuspendingOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_SuspendingOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_SuspendingOperation[] = L"Windows.UI.WebUI.SuspendingOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIApplication
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIActivationStatics3 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIActivationStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIActivationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIApplication_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIApplication_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIApplication[] = L"Windows.UI.WebUI.WebUIApplication";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderAddAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderAddAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderAddAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIBackgroundTaskInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.WebUI.IWebUIBackgroundTaskInstanceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstance_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIBackgroundTaskInstance[] = L"Windows.UI.WebUI.WebUIBackgroundTaskInstance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIBackgroundTaskInstanceRuntimeClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUIBackgroundTaskInstance ** Default Interface **
 *    Windows.ApplicationModel.Background.IBackgroundTaskInstance
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstanceRuntimeClass_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIBackgroundTaskInstanceRuntimeClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIBackgroundTaskInstanceRuntimeClass[] = L"Windows.UI.WebUI.WebUIBackgroundTaskInstanceRuntimeClass";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUICachedFileUpdaterActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUICachedFileUpdaterActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUICachedFileUpdaterActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICachedFileUpdaterActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICachedFileUpdaterActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUICameraSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivationCameraSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUICameraSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUICameraSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICameraSettingsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICameraSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUICommandLineActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUICommandLineActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUICommandLineActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUICommandLineActivatedEventArgs[] = L"Windows.UI.WebUI.WebUICommandLineActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactMapActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMapActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMapActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactMapActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactMapActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactMessageActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMessageActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactMessageActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactMessageActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactMessageActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactPanelActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPanelActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPanelActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPanelActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPanelActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactPickerActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPickerActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactPostActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPostActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactPostActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactPostActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactPostActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIContactVideoCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIContactVideoCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIContactVideoCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIContactVideoCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIContactVideoCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIDeviceActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIDeviceActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIDeviceActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDeviceActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDeviceActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIDevicePairingActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIDevicePairingActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIDevicePairingActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDevicePairingActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDevicePairingActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.WebUI.WebUIDialReceiverActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIDialReceiverActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIDialReceiverActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIDialReceiverActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIDialReceiverActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileOpenPickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileOpenPickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileOpenPickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileOpenPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileOpenPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileOpenPickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFileOpenPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileSavePickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileSavePickerActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIFileSavePickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFileSavePickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFileSavePickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFileSavePickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFileSavePickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIFolderPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIFolderPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIFolderPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIFolderPickerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIFolderPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILaunchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILockScreenActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILockScreenCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenCallActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUILockScreenComponentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs ** Default Interface **
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenComponentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUILockScreenComponentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUILockScreenComponentActivatedEventArgs[] = L"Windows.UI.WebUI.WebUILockScreenComponentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.WebUI.WebUINavigatedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUINavigatedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedDeferral[] = L"Windows.UI.WebUI.WebUINavigatedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUINavigatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUINavigatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedEventArgs[] = L"Windows.UI.WebUI.WebUINavigatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUINavigatedOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.WebUI.IWebUINavigatedOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUINavigatedOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUINavigatedOperation[] = L"Windows.UI.WebUI.WebUINavigatedOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIPrint3DWorkflowActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIPrint3DWorkflowActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIPrint3DWorkflowActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrint3DWorkflowActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrint3DWorkflowActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIPrintTaskSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintTaskSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintTaskSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrintTaskSettingsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrintTaskSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIPrintWorkflowForegroundTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs ** Default Interface **
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintWorkflowForegroundTaskActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIPrintWorkflowForegroundTaskActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIPrintWorkflowForegroundTaskActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIPrintWorkflowForegroundTaskActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.WebUI.WebUIProtocolActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIProtocolActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIProtocolActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIProtocolForResultsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolForResultsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIProtocolForResultsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIProtocolForResultsActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIProtocolForResultsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIRestrictedLaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIRestrictedLaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIRestrictedLaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIRestrictedLaunchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIRestrictedLaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUISearchActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.WebUISearchActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUISearchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUISearchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUISearchActivatedEventArgs[] = L"Windows.UI.WebUI.WebUISearchActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIShareTargetActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIShareTargetActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIShareTargetActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIShareTargetActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIShareTargetActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIStartupTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIStartupTaskActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIStartupTaskActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIStartupTaskActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIStartupTaskActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.WebUI.WebUIToastNotificationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIToastNotificationActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIToastNotificationActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIToastNotificationActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIToastNotificationActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIUserDataAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIUserDataAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIUserDataAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIUserDataAccountProviderActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIUserDataAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.WebUI.WebUIVoiceCommandActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIVoiceCommandActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIVoiceCommandActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIVoiceCommandActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIVoiceCommandActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIWalletActionActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIWalletActionActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIWalletActionActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWalletActionActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIWalletActionActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIWebAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWebAccountProviderActivatedEventArgs[] = L"Windows.UI.WebUI.WebUIWebAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.WebUI.WebUIWebAuthenticationBrokerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.UI.WebUI.IActivatedEventArgsDeferral
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAuthenticationBrokerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_WebUI_WebUIWebAuthenticationBrokerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WebUI_WebUIWebAuthenticationBrokerContinuationEventArgs[] = L"Windows.UI.WebUI.WebUIWebAuthenticationBrokerContinuationEventArgs";
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
#endif // __windows2Eui2Ewebui_p_h__

#endif // __windows2Eui2Ewebui_h__
